class implication_con_and_if_else_con_class;

    rand int flag = 0;

    rand bit [2:0] ic_data1;
    rand logic[3:0] ic_data2;

    rand logic[7:0] iec_data1;
    rand logic[7:0] iec_data2;
    
    constraint imp_con {
        ic_data1 > 2 -> ic_data2 inside {1, 2, 3};
    }

    constraint flag_con {
        flag > -8 && flag < 8;
    }

    constraint if_else_con_1 {
        if(flag > -2) {
            iec_data1 inside {1, 2, 3};
        } else {
            (iec_data1 & 8'hF0) == 8'hA0;
        }
    }

    constraint if_else_con_2 {
        if(flag > 0) {
            iec_data2 inside {1, 2, 3} || iec_data2 % 2 == 0;
        } else if (flag == 0 || flag == -1) {
            iec_data2 inside {4, 5};
        }
        else {
            iec_data2 inside {8, 9};
        }
    }

endclass

module implication_con_and_if_else_con;
    
    //implication_con_and_if_else_con w;
    implication_con_and_if_else_con_class w = new;
    int v;

    initial begin
        
        repeat(10) begin

            $display("***************************");

            v = w.randomize(); // with { delay > 90 && delay < 700; };
            if (v !=1 ) $stop;
            

            $display("ic_data1(h) = %h", w.ic_data1);
            $display("ic_data2(h) = %h", w.ic_data2);

            $display("flag(d) = %d", w.flag);
            $display("iec_data1(h) = %h", w.iec_data1);
            $display("iec_data2(h) = %h", w.iec_data2);
            
            $display("***************************");
        end
        $finish;
    end
endmodule