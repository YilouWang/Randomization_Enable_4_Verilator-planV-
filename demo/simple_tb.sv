
class cls;
    rand ENUM enum_4_;
    // rand UNION union_2_;    UNSPORTED IN VERILATOR(A DIRECTION TO VESTIGATE)
    // rand int dyn_arr[];
    rand bit[31:0] lgc_1_;
    rand bit x;

    constraint combined_debug {
        enum_4_ inside {TWO, THREE};
        //if (lgc_1_ < 100) {
        //    union_2_.x < 10000;
        // } else {
        //    union_2_.byte_value inside {8'h0, 8'hFF};
        //}
        //dyn_arr.size() < 5;  
    }
    function new();
        enum_4_ = ONE;
    endfunction
endclass
//DEBUG USE

class w_sequence_item;
    cls cls_1_;
    int r;

    rand logic[7:0] data;
    rand int delay;
    rand logic flag;
    constraint w_delay_con { delay > 90 && delay < 700;}
    constraint w_data_con {
        // conditional
        if(flag) {
            data inside {1, 2, 3} || data % 2 == 0;
        } else {
            // mask
            (data & 8'hF0) == 8'hA0;
        }
    }

    function new(string name = "w_sequence_item");
        cls_1_ = new();
        r = cls_1_.randomize(); // randomize() with {} is not supported in Verilator currently.
    endfunction
endclass

module simple_tb;
    w_sequence_item w;
    int v;
    initial begin
        w = new();
        v = w.randomize();
        if (v !=1 ) $stop;
        $display(w);
        $finish;
    end
endmodule