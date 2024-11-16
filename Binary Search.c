int BinarySearch(int item, int list[], int start, int end)
{
	int mid_point = (start + end)/2;
	if (end < start)
	{
		  return -1;
	}
	else if(item == list[mid_point]){
		  return mid_point;
	}
	else if(item < list[mid_point]){
	    return BinarySearch(item, list, start, mid_point - 1);
    }
	
	else {
		return BinarySearch(item, list, mid_point + 1, end);
	}
}
