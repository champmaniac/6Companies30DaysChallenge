// TC O(N) SC O(N)
class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here   
        Node* link = head;
        while(link){
            for(int i=1;i<M && link;i++){
                link=link->next;
            }
            if(!link) return;
            Node* temp = link;
            for(int j=0;j<=N && temp;j++){
                temp=temp->next;
            }
            link->next=temp;
            link=temp;
        }
    }
};