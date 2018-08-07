int diagonalDifference(vector<vector<int>> arr) {
    
    int digNsum1 = 0;
    int digNsum2 = 0;
    
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[i].size(); j++){
            if (i == j)
                digNsum1 += arr[i][j];
            if(i + j == (arr.size()-1))
                digNsum2 += arr[i][j];
        }
    }
    return abs(digNsum1 - digNsum2);
}

