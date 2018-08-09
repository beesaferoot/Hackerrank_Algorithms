void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    
    vector<int> appleCount;
    vector<int> orangeCount;
    for(int x: apples){
        appleCount.push_back(a + x);
    }
    
    for(int x: oranges){
        orangeCount.push_back(b + x);
    }
    
    int lendropApple = 0;
    int lendropOrange = 0;
    for(int x: appleCount){
        if (x >= s && x <= t)
            lendropApple++;
    }
    
    for(int x: orangeCount){
        if(x >= s && x <= t)
            lendropOrange++;
    }
    
    printf("%d\n%d", lendropApple, lendropOrange);
}
