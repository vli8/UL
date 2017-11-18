//Victor Li
//Data structures with Professor Yanjun Li
//This is the main driver to test our code 
//September 25th
#include "itemType.h"
#include "UnsortedArray.h"

void Print( UnsortedListByArray& list)
// Pre:  list has been initialized.         
// Post: Each component in list has been written. 
// 
{
  int length;
  ItemType item;

  list.ResetList( );
  length = list.GetLength( );
  for (int counter = 1; counter <= length; counter++)
  {
    list.GetNextItem(item);
    item.Print( );
  }
}

int main(){

    UnsortedListByArray listOne, listTwo, original_list;

    ItemType x;
    x.Initialize(5);
    listOne.InsertItem(x);

    //Print(listOne);

    ItemType y;
    y.Initialize(6);
    listTwo.InsertItem(y);

    ItemType m;
    m.Initialize(2);
    listOne.InsertItem(m);

    ItemType s;
    s.Initialize(1);
    listTwo.InsertItem(s);

    ItemType keyItem;
    keyItem.Initialize(4);
    listOne.InsertItem(keyItem);

    	cout << "list one: " << endl;
	Print(listOne);
	cout << "list two: " << endl;
        Print(listTwo);

        original_list.MergeList(listOne, listTwo);
        cout << "Merged list is: " << endl;
        Print(original_list);
    

    original_list.Splitlist(keyItem, listOne, listTwo);
    cout << "List one is: " << endl;
    Print(listOne);
    cout << "List two is: " << endl;
    Print(listTwo);

    listOne.MakeEmpty();
    cout<<listOne.IsEmpty()<<endl;



    return 0;
}

