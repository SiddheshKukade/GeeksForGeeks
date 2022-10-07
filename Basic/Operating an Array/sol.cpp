
bool searchEle(int arr[], int x) {
  /*Searching by comapring one by one but first calculating the size of the array which was not provided  */
  int c = 0;
  for (int i = 0; arr[i] != -1; i++) {
    c++;
  }
  for (int i = 0; i < c; i++) {
    if (arr[i] == x) {
      return true;
    }
  }
  return false;
}
bool insertEle(int arr[], int y, int yi) {
  
  /*Insert th elemenent at the position and check whether it exists or not by using another function  */
  arr[yi] = y;
  return searchEle(arr, y);
}
bool deleteEle(int arr[], int z) {
  //deleting the element and then replacling it with forward elements continiously
  int c = 0;
  for (int i = 0; arr[i] != -1; i++) {
    c++;
  }
  bool isDeleted = false;
  int delId = 0;
  for (int i = 0; i < c; i++) {
    if (arr[i] == z) {
      delId++;
    }
  }
  for (int i = delId; i < c; i++) {
    arr[i] = arr[i + 1];
    isDeleted = true;
  }

  return isDeleted;
}
