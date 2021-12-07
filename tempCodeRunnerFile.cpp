
char arr[51][51];
ll int n,m;
int sz;
void dfs(int i,int j){
     if(arr[i][j]=='.' && i>0 && j>0 && i<n-1 && j<0 &&!visited[i][j]){
         visited[i][j]=1;
         sz++;
     }else{
         return;
     }
     dfs(i,j+1);
     dfs(i,j-1);

}
