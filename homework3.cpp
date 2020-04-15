#include <bits/stdc++.h>

using namespace std;
typedef struct kecheng
{
    char keming[20];
    int bianhao;
    struct kecheng *next;
}List;
typedef struct xuesheng
{
    char xkeming[20];
    int xbianhao;
}xuesheng;
List *Luru()
{
    int num,i;
        printf("输入课程总数：");
    cin>>num;
    List *head=NULL,*p=NULL,*pre=NULL;
    printf("输入课程信息：");
    for(i=0;i<num;i++)
    {
        printf("输入第%d门课程编号及名称，中间用空格隔开：\n",i+1);
        p=new(kecheng);
        cin>>p->bianhao;
        cin>>p->keming;
        if(head==NULL)
        {
            head=p;
        }
        else
        {
            pre->next=p;
        }
        pre=p;
    }
    return head;
}
int Yixuan(xuesheng xue[20])
{
    int i,num=0;
    printf("请输入已选课程编号及课程名，输入-1和abc结束：\n");
    for(i=0;i<20;i++)
    {
        cin>>xue[i].xbianhao;
        cin>>xue[i].xkeming;
        if(xue[i].xbianhao==-1)
        {
            break;
        }
        num++;
    }
    return num;
}
void Chaxun(List *head)
{
    List *p=head;
    printf("课程编号     课程名\n");
    while(p)
    {
        printf("%d          ",p->bianhao);
        printf("%s\n",p->keming);
        p=p->next;
    }
}
void Dayin(xuesheng xue[20],int num)
{
    int i;
    printf("课程编号     课程名\n");
    for(i=0;i<num;i++)
    {
        printf("%d         ",xue[i].xbianhao);
        printf("%s\n",xue[i].xkeming);
    }
}
int Xuanke(List *head,xuesheng xue[20],int num)
{
    printf("输入所选课程编号：\n");
    int a,i;
    cin>>a;
    List *p=head;
    for(p=head;p;p=p->next)
    {
        if(num==0&&p->bianhao==a)
        {
            printf("选课成功\n");
            xue[num].xbianhao=a;
            strcpy(xue[num].xkeming,p->keming);
            num++;
            break;
        }
        for(i=0;i<num;i++)
        {
            if(p->bianhao==xue[i].xbianhao)
                break;
        }
        if(i==num-1)
            break;
    }
    if(p->next->bianhao==a)
        {
            printf("选课成功\n");
            xue[num].xbianhao=a;
            strcpy(xue[num].xkeming,p->next->keming);
            num++;
        }
        else
        {
            printf("您不能选择该课程！\n");
        }
    return num;
}
int main()
{
    printf("         学生选课系统\n");
    printf("********************************\n");
    printf("1 课程录入\n");
    printf("2 课程查询\n");
    printf("3 进行选课\n");
    printf("4 打印课表\n");
    printf("0 结束系统\n");
    int a;
    List *head;
    xuesheng xue[20];
    int num;
    printf("请输入需要执行的操作：\n");
    cin>>a;
    while(a!=0)
    {
        if(a==1)
        {
            head=Luru();
            printf("请进行下一步操作：\n");
            cin>>a;
            continue;
        }
         if(a==2)
        {
            Chaxun(head);
            printf("请进行下一步操作：\n");
            cin>>a;
            continue;
        }
        if(a==3)
        {
            num=Yixuan(xue);
            num=Xuanke(head,xue,num);
            printf("请进行下一步操作：\n");
            cin>>a;
            continue;
        }
        if(a==4)
        {
            Dayin(xue,num);
            printf("请进行下一步操作：\n");
            cin>>a;
            continue;
        }
    }
    return 0;
}
