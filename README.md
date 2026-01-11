This project has been created as part of the 42 curriculum by vvieira.

## Description

**Pushswap** is a 42 School project that implements an algorithm to sort a stack of integers using only specific limited operations (`sa/sb/ss`, `pa/pb`, `ra/rb/rr`, `rra/rrb/rrr`). The goal is to find the **shortest possible sequence** of instructions to sort the stack `a` in ascending order, with the smallest number at the top.

The program receives a list of integers as arguments, validates inputs (duplicates, overflow, invalid format), and generates optimized instructions for sorting. For small sizes, it uses specific algorithms (2, 3, 5 elements), while for larger lists, it applies a **chunk** strategy with indexing for efficiency.

## Instructions

### Compilation
\`\`\`bash
make
\`\`\`

### Execution
\`\`\`bash
./pushswap 2 1 3 6 5 8
\`\`\`
**Expected output:**
\`\`\`
sa
pb
pb
pb
sa
pa
pa
pa
\`\`\`

### Cleaning
\`\`\`bash
make clean    # Remove objects
make fclean   # Remove objects + executable
make re       # Recompile everything
\`\`\`

### Mandatory flags
Compiled with \`cc -Wall -Wextra -Werror\` using custom libft.

## Resources

### Technical references
- **Official subject** 42 Intranet → Pushswap v10.0
- Official **checker** (push_swap_tester.sh) for performance validation
- **Norminette** for compliance with 42's Norminette
- Own **libft** (folder \`./libft\`) with essential functions


### Algorithm
- **Small sorts**: Exhaustive algorithms for 2-5 elements
- **Big sorts**: Indexing + chunk strategy (15 for <100, 30 for >100)
- **Target benchmarks**: <700 ops (100 nums), <5500 ops (500 nums)

### Use of AI
- **Not used** for code generation or main algorithms
- **Used only** for:
  - Review of Makefile structure and file organization
  - Validation of compliance with subject (parsing, errors, operations)
  - Suggestions for structuring README according to requirements

### Local tests
\`\`\`bash
# Test with official checker
./pushswap [args] | ./checkerOS_[OS] [args]
# Should print “OK”
\`\`\`

---

**Login:** vvieira  
**42 São Paulo**  
**Created:** November 2025