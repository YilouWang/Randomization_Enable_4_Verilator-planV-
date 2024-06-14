# Randomization_Enable_4_Verilator-planV-

PlanV Project: try to enable the randomization in sv-uvm testbench with Verilator.

In constraint_random/ folder, I put some demos inside it to check whether constraint_randomization works with Verilator.

Currently, 
1. constraint works with Verilator.(check the demo in demo/ folder.)
2. conditional constraint does not work with verilator, you can check in conditinoal_constraint/ folder. Works with vsim but not works with Verilator.(In progress...)
3. randomize() with{} not supported in Verilator.(check the demo in demo/ folder.)
4. Union and dynamic array not supported as rand variables.(check the demo in demo/ folder.)