###
#
#  Sort integer arguments (ascending) 
#
###

result = []
ARGV.each do |arg|
    # Next is the ruby equivalent of "continue" in Python,
    #   you can chain it with a condition
    # Here it is "skip current entry if it's not a string
    #   representing an actual positive/negative integer"
    next if arg !~ /^-?[0-9]+$/

    # Convert to integer (because it's the only way we can
    #   properly order numerically)
    i_arg = arg.to_i
    
    # Defining variables controlling insertion
    # Set at true once right position found.
    is_inserted = false
    # Parser to evaluate each position
    i = 0
    # Current length of ordered array.
    l = result.size
    # We try to find the first position where
    #   number to insert is superior to the evaluated
    #   current number in array.
    while !is_inserted && i < l do
        # Current number is smaller than the number to insert,
        #   so we must continue advancing.
        if result[i] < i_arg
            i += 1
        # We found the position where current number is superior
        #   to the number to insert so we can "squeeze it in" just before.
        else
            # Must be at i, not i-1 because...
            # a) We start i at 0
            # b) Insert automatically "pushes" all the subsequent items
            # c) We compared "to_insert" to "i" AND because i was inferior
            #    in previous loop cycle we incremented it.
            # And now we are in the else because i >= "number_to_insert".
            # Meaning that i is now the "best potential position".
            result.insert(i, i_arg)
            is_inserted = true
            break
        end
    end
    # If is_inserted is still False it means that we never found
    #   any number in current results array which would be >= to
    #   number to insert... Which implies it's the biggest of all
    #   so logically must be inserted at the end.
    result << i_arg if !is_inserted
end

# Displays array
puts result
