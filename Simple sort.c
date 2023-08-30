int main(){
    int a,b,c,sor;
    int v[3];

    scanf("%d %d %d", &a, &b, &c);
    v[0] = a;
    v[1] = b;
    v[2] = c;

    for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                    if(v[i] < v[j]){
                            sor = v[j];
                            v[j] = v[i];
                            v[i] = sor;
                    }
            }
    }

    printf("%d\n%d\n%d\n", v[0], v[1], v[2]);
    printf("\n%d\n%d\n%d\n", a, b, c);

}
