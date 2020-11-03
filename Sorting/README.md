# Sorting
*Sorting refers to the operation of arranging data in some given order, such as increasing or decreasing with numerical data, or alphabetically with character data.*

# Types of sorting –
- Internal sorting - Sorts the data resides in the computer’s memory.
- External Sorting - Deals with sorting the data stored in files. External sorting is applied when there is large amount of data that cannot be stored in memory. Example-          Multiway merging

## Internal Sorting Methods –
- Selection Sort
- Bubble Sort
- Insertion Sort
- Merge Sort
- Quick Sort
- Heap Sort
- Bucket Sort....

## SORTING-Terminology

- In-place sorting - *Any sorting algorithm is called In-place sorting algorithm if it uses constant space for sorting the elements. It sorts the elements by changing the order of the elements within the given list.*

- Stable sorting -*Any sorting algorithm is called stable sorting algorithm if two elements with equal keys appear in the same order in sorted output as they appear in the input array to be sorted.*

# Complexity Analysis
| S No. | Algorithm | Worst Time | Average Time | Best Time | Memory | Stability |
| :---: | :--- | :---: | :---: | :---: | :---: | :---: |
| 1. | Bubble Sort | O(n^2) | O(n^2) | O(n) | O(1) | Stable |
| 2. | Selection Sort | O(n^2) | O(n^2) | O(n^2) | O(1) | Unstable |
| 3. | Insertion Sort | O(n^2) | O(n^2) | O(n^2) | O(1) | Stable |
| 4. | Merge Sort | O(n * log n ) | O(n * log n ) | O(n * log n ) | O(n) | Stable |
| 5. | Quick Sort | O(n * log n ) | O(n log n ) | O(n^2 )  | O( log n ) | Unstable |
| 6. | Bucket Sort  | O(n^2 * k) ) | O(n * k) |  | | |
| 7. | Heap Sort  | O(n * log n) | O(n * log n) |  | | |
| 8. | Shell Sort  | O(n * (log n)^2 ) | |  | | |

