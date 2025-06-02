function real abs(input real num); begin
        if (num <= 0)
            return -1*num;
        return num;
    end
endfunction

function real sqrt(input real x);
    real low, high, mid, error;
    begin
        if (x < 0) begin
            $display("Number less than 0, Sqrt Non-Existant\n");
            return 0;
        end
        error = 0.00000001;
        low = 0;
        high = x;
        if (x < 1) begin
            low = x;
            high = 1;
        end
        mid = (low+high)/2.0;
        while (~(abs((mid*mid) - x) <= error)) begin
            if (mid*mid > x)
                high = mid;
            else if (mid*mid < x)
                low = mid;
            mid = (low+high)/2;
        end
        return mid;
    end
endfunction

module SquareRoot(
    input real x,
    output real y
);

    always_comb begin
        y = sqrt(x);
    end
    
endmodule