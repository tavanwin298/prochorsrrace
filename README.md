# prochorsrrace

// Pseudocode for a procedural horse race in C++

// Function: advance()
// Purpose: Move a random horse forward by 1
// Parameters: array of horse positions
// Return: void
PROCEDURE advance(horses)
    SELECT a random horse index (0 to 4)
    INCREMENT the horse's position by 1
END PROCEDURE

// Function: printLane()
// Purpose: Print a single horse's race lane
// Parameters: horse position
// Return: void
PROCEDURE printLane(position)
    PRINT '-' repeated 'position' times followed by 'H'
END PROCEDURE

// Function: isWinner()
// Purpose: Check if any horse has won
// Parameters: array of horse positions
// Return: boolean
PROCEDURE isWinner(horses)
    FOR each horse position in horses
        IF horse position >= WINNING_POSITION
            RETURN true
    END FOR
    RETURN false
END PROCEDURE

// Function: main()
// Purpose: Control the race process
// Parameters: none
// Return: int
PROCEDURE main()
    DECLARE array horses of size 5, initialized to zero
    WHILE no horse has won
        CALL advance(horses)
        FOR each horse position in horses
            CALL printLane(horse position)
        END FOR
        CHECK if there is a winner using isWinner(horses)
        IF winner exists, exit loop
    END WHILE
    PRINT "We have a winner!"
    RETURN 0
END PROCEDURE
