#include <bits/stdc++.h>

using namespace std;



int main()
{
	char puzzle[9][9];
	
	for(int i = 0; i < 9;i++)
	{
		for(int j = 0; j < 9; j++)
		{
			cin>>puzzle[i][j];
		}
	}
	
	bool noOps = true;
	int i = 0;
	while(noOps)
	{
		if(i == 9)
		{
			i = 1;
			noOps = false;
		}
		else
		{
			i++;
		}
		vector <int> rows;
		vector <int> cols;
		for(int j = 0; j < 9; j++)
		{
			for(int k = 0; k < 9; k ++)
			{
				if(puzzle[j][k] == (i+48))
				{	
					rows.push_back(j);
					cols.push_back(k);
				} 	
			}
			cout<<endl;
		}
		
		vector<int> aRows;
		vector<int> aCols;
		for(int m = 1; m <= 9; m++)
		{
			bool skipRow = false;
			for(int n = 0; n < rows.size(); n++)
			{
				if(rows[n] == m-1)
					skipRow = true;
			}
			
			for(int x = 1; x <= 9 && !skipRow ;x++)
			{
				
				if(puzzle[m-1][x-1] == '.')
				{
					bool check = true;
					for(int l = 0; l < cols.size(); l++)
					{
						if(cols[l] == x-1)
							check = false;
					}
					
					if(check)
					{
						aRows.push_back(m-1);
						aCols.push_back(x-1);
					}
				}
					
			}

		}
		
		cout<<i;
		cout<<" ; Cordinates ";
		vector<int> one,two,three,four,five,six,seven,eight,nine;
		vector<int> onec,twoc,threec,fourc,fivec,sixc,sevenc,eightc,ninec;
		for(int y = 0 ; y < aRows.size(); y++)
		{
			cout<<aRows[y]<<","<<aCols[y];
			
			if((aRows[y]/3)*3 + aCols[y]/3 +1 == 1)
			{
				one.push_back(aRows[y]);
				onec.push_back(aCols[y]);
			}
			
			if((aRows[y]/3)*3 + aCols[y]/3 +1 == 2)
			{
				two.push_back(aRows[y]);
				twoc.push_back(aCols[y]);
			}
			
			if((aRows[y]/3)*3 + aCols[y]/3 +1 == 3)
			{
				three.push_back(aRows[y]);
				threec.push_back(aCols[y]);
			}
			
			if((aRows[y]/3)*3 + aCols[y]/3 +1 == 4)
			{
				four.push_back(aRows[y]);
				fourc.push_back(aCols[y]);
			}
			
			if((aRows[y]/3)*3 + aCols[y]/3 +1 == 5)
			{
				five.push_back(aRows[y]);
				fivec.push_back(aCols[y]);
			}
			
			if((aRows[y]/3)*3 + aCols[y]/3 +1 == 6)
			{
				six.push_back(aRows[y]);
				sixc.push_back(aCols[y]);
			}
			
			if((aRows[y]/3)*3 + aCols[y]/3 +1 == 7)
			{
				seven.push_back(aRows[y]);
				sevenc.push_back(aCols[y]);
			}
			
			if((aRows[y]/3)*3 + aCols[y]/3 +1 == 8)
			{
				eight.push_back(aRows[y]);
				eightc.push_back(aCols[y]);
			}
			
			if((aRows[y]/3)*3 + aCols[y]/3 +1 == 9)
			{
				nine.push_back(aRows[y]);
				ninec.push_back(aCols[y]);
			}
		}
		
		if(one.size() == 1)
		{
			puzzle[one[0]][onec[0]] = i+48;	
			noOps= true;
			
		}
		
		if(two.size() == 1)
		{
			puzzle[two[0]][twoc[0]] = i+48;	
			noOps= true;
		}
		
		if(three.size() == 1)
		{
			puzzle[three[0]][threec[0]] = i+48;	
			noOps= true;
		}
		if(four.size() == 1)
		{
			puzzle[four[0]][fourc[0]] = i+48;	
			noOps= true;
		}
		if(five.size() == 1)
		{
			puzzle[five[0]][fivec[0]] = i+48;	
			noOps= true;
		}
		if(six.size() == 1)
		{
			puzzle[six[0]][sixc[0]] = i+48;	
			noOps= true;
		}
		if(seven.size() == 1)
		{
			puzzle[seven[0]][sevenc[0]] = i+48;	
			noOps= true;
		}
		if(eight.size() == 1)
		{
			puzzle[eight[0]][eightc[0]] = i+48;	
			noOps= true;
		}
		if(nine.size() == 1)
		{
			puzzle[nine[0]][ninec[0]] = i+48;	
			noOps= true;
		}
		
		cout<<"\n\n";
		for(int i = 0; i < 9;i++)
		{
			for(int j = 0; j < 9; j++)
			{
				cout<<puzzle[i][j];
			}
			cout<<endl;
		}
		cout<<"\n\n-------------------"<<endl;
		
		
		
		aRows.clear();
		aCols.clear();
		rows.clear();
		cols.clear();
	}
	
	
	

	return 0;
}
