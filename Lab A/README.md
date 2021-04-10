# Lab A - Mentor HLS Bluebook (v10.5b, June 2020)

Team 5 游子緒 馬健凱 陳昱行

## Objective

Implement the examples in the bluebook, which were originally written for Catapult C Synthesis, with Vivado HLS.

## Chapter 5 - Scheduling of IO and Memories

### 5.1. Unconditional IO

| Section                  | Examples                                                     |
| ------------------------ | ------------------------------------------------------------ |
| 5.1.1. Pass by Reference | Example 42 Unconditional IO Passed by Reference<br />`uncond_pass_by_ref.cpp` |
| 5.1.2. Pass by Value     | Example 43 Unconditional IO Passed by Value<br />`uncond_pass_by_value.cpp` |

### 5.2. Conditional IO

| Section                                  | Examples                                                     |
| ---------------------------------------- | ------------------------------------------------------------ |
| 5.2.1. Pass by Reference                 | Example 44 Conditional IO Passed by Reference<br />`cond_pass_by_ref.cpp` |
| 5.2.2. Pass by Value                     | Example 45 Conditional IO Passed by Value<br />`cond_pass_by_value.cpp` |
| 5.2.3. Ready/acknowledge Behavior (wait) | Example 44 Conditional IO Passed by Reference<br />`cond_pass_by_ref.cpp` |
| 5.2.4. Stalling the Pipeline             | Example 46 Stalling the Pipeline with Conditional IO<br />`cond_stall.cpp` |
| 5.2.5. Manually Flushing the Pipeline    | Example 47 Manually Flushing the Pipeline<br />`cond_flush_manual.cpp` |
| 5.2.6. Writing IO for Throughput         | Example 48 IO Throughput Limiting Design<br />`throughput_limit.cpp`<br />Example 49 Manual Unrolling of IO Throughput Limiting Design<br />`throughput_limit_unroll.cpp`<br />Example 50 Making IO Read Unconditional<br />`throughput_limit_uncond.cpp`<br />Example 51 Simplifying Conditional IO to Help Merging<br />`throughput_limit_cond.cpp` |

### 5.3. Memories

| Section                                             | Examples                                                     |
| --------------------------------------------------- | ------------------------------------------------------------ |
| 5.3.1. Automatic Mapping of Arrays to Memories      | Example 52 Arrays Mapped to Memories<br />`cond_stall.cpp`   |
| 5.3.2. Automatic Memory Merging                     | Example 52 Arrays Mapped to Memories<br />`cond_stall.cpp`   |
| 5.3.3. Designing for Throughput When Using Memories | Example 53 Non-Mutually Exclusive Memory Accesses<br />`mem_non_mutual_exclusive.cpp`<br />Example 54 Mutually Exclusive Memory Accesses<br />`mem_mutual_exclusive.cpp`<br />Example 55 Manually Merging Non-Mutually Exclusive Memory Accesses<br />`mem_non_mutual_exclusive_manual.cpp` |
