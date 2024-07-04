// DESCRIPTION: Verilator: Verilog Test module
//
// This file ONLY is placed under the Creative Commons Public Domain, for
// any use, without warranty, 2022 by Wilson Snyder.
// SPDX-License-Identifier: CC0-1.0

`define stop $stop
`define check_range(gotv,minv,maxv) do if ((gotv) < (minv) || (gotv) > (maxv)) begin $write("%%Error: %s:%0d:  got=%0d exp=%0d-%0d\n", `__FILE__,`__LINE__, (gotv), (minv), (maxv)); `stop; end while(0);
`define check_within_30_percent(gotv,val) `check_range((gotv), (val) * 70 / 100, (val) * 130 / 100)

module t (/*AUTOARG*/);

   localparam int COUNT = 1000;

   int v;
   int counts[8];

   function int randfunc();
      int i;
      randcase
        0 : i = 50;  // Never
        1 : i = 100;
      endcase
      return i;
   endfunction

   initial begin;
      if (randfunc() != 100) $stop;

      //
      for (int i = 0; i < 8; ++i) counts[i] = 0;
      for (int i = 0; i < COUNT; ++i) begin
         randcase
           0 : ;  // Never
           0 : counts[0]++;  // Never
           1 : counts[1]++;
         endcase
      end
      `check_range(counts[0], 0, 0);
      `check_range(counts[1], COUNT, COUNT);

      //
      for (int i = 0; i < 8; ++i) counts[i] = 0;
      for (int i = 0; i < COUNT; ++i) begin
         randcase
           i - i : counts[0]++;  // Never
           i + i + 1: counts[1]++;
         endcase
      end
      `check_range(counts[0], 0, 0);
      `check_range(counts[1], COUNT, COUNT);

      //
      for (int i = 0; i < 8; ++i) counts[i] = 0;
      for (int i = 0; i < COUNT; ++i) begin
         randcase
           1 : counts[0]++;  // Never
           4 : counts[1]++;
         endcase
      end
      `check_within_30_percent(counts[0], (COUNT * 1 / 5));
      `check_within_30_percent(counts[1], (COUNT * 4 / 5));

      //
      for (int i = 0; i < 8; ++i) counts[i] = 0;
      for (int i = 0; i < COUNT; ++i) begin
         randcase
           2 : counts[0]++;  // Never
           2 : counts[1]++;  // Never
           1 : counts[2]++;  // Never
           1 : counts[3]++;  // Never
           1 : counts[4]++;  // Never
           1 : counts[5]++;  // Never
           1 : counts[6]++;  // Never
           1 : counts[7]++;  // Never
         endcase
      end
      `check_within_30_percent(counts[0], (COUNT * 2 / 10));
      `check_within_30_percent(counts[1], (COUNT * 2 / 10));
      `check_within_30_percent(counts[2], (COUNT * 1 / 10));
      `check_within_30_percent(counts[7], (COUNT * 1 / 10));

      //
      $write("*-* All Finished *-*\n");
      $finish;
   end

endmodule
