// Zican Hao
// CS5008 Spring 2023

// 134. Gas Station (medium)
// https://leetcode.com/problems/gas-station/description/

int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize){
    if(gas==NULL || cost==NULL ){return -1;}
    if(gasSize==1){ if(gas[0]<cost[0]){return -1;}else{return 0;}}
    int tg=0,tc=0;
    for(int i=0;i<gasSize;i++){
        tg+=gas[i];
        tc+=cost[i];
    }
    if(tg<tc){return -1;}

    int fuel=0,start=0;
    for(int j=0;j<gasSize;j++){
        if(fuel<0){
            start=j;
            fuel=0;
        }
        fuel+=(gas[j]-cost[j]);
    }
    return start;
}
