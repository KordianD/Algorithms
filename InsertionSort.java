public class InsertionSort {

    public static void main(String[] args){
        int[] unsortedTab = {5,8,1,4,13};
        int[] sortedTab = insertionSort(unsortedTab);

        for (int x : sortedTab)
            System.out.println(x);
    }

    public static int[] insertionSort(int[] tabToSort){
        int j, temp;
        
        for (int i = 1; i < tabToSort.length; i++){
            j = i-1;
            temp = tabToSort[i];
            while (j >= 0 && tabToSort[j] > temp){
                tabToSort[j+1] =  tabToSort[j];
                j--;
            }
            tabToSort[j+1] = temp;
        }
      return tabToSort;
    }
}