vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m){
	// Create two vector for the row and column indicator.
	vector<bool> row(n, false) , col(m, false);

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (matrix[i][j] == 0){
				/*
				   We have to set entire ith row and,
				   entire jth column of the matrix to 0.
				*/
				row[i] = true;
				col[j] = true;
			}
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			/*
			   If ith entery of row vector is true or jth entry of col vec,
			   is true then make entry at i,j to 0.
			*/
			if (row[i] || col[j]){
				matrix[i][j] = 0;
			}
		}
	}
	return matrix;
}
