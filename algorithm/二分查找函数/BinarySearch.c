
Position BinarySearch(List L, ElementType X )
{
  Position left = 1;
  Position right = L->Last;
  Position mid = 0;
  ElementType midData;
  while(left<=right)
  {
    mid = (left+right)/2;
    midData = L->Data[mid];
    if(X<midData)
    {
      right=mid-1;
    }
    else if(X>midData)
    {
      left=mid+1;
    }
    else
      return mid;
  }
  return NotFound;
  
}
