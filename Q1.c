#include <stdio.h>
int calculatechecksum(int transaction_id){
    if (transaction_id <10)
    return transaction_id;
    int sum =0;
    while(transaction_id >0){
        sum = sum + transaction_id % 10;
        transaction_id = transaction_id / 10;
    }
    return calculatechecksum(sum);
}
int main (){
    int transaction_id = 9875;
    int checksum = calculatechecksum(transaction_id);
    printf("Checksum: %d\n", checksum);

    return 0;
}