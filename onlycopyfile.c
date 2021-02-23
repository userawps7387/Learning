#include <stdio.h>
#include <stdlib.h>

int copyFile(char *fileRead, char *fileWrite);

int main()
{
    char fileRead[100];  // Ҫ���Ƶ��ļ���
    char fileWrite[100];  // ���ƺ���ļ���
   
    // ��ȡ�û����룬�����ַ
    printf("Ҫ���Ƶ��ļ���");
    scanf("%s", fileRead);
    printf("���ļ����Ƶ���");
    scanf("%s", fileWrite);
    // ���и��Ʋ���
    if( copyFile(fileRead, fileWrite) )
	{
        printf("��ϲ�㣬�ļ����Ƴɹ���\n");
    }
	else
	{
        printf("�ļ�����ʧ�ܣ�\n");
    }
    return 0;
}
/**
* �ļ����ƺ���
* @param    fileRead    Ҫ���Ƶ��ļ�
* @param    fileWrite   ���ƺ��ļ��ı���·��
* @return   int         1: ���Ƴɹ���2: ����ʧ��
**/
int copyFile(char *fileRead, char *fileWrite){
    FILE *fpRead;  // ָ��Ҫ���Ƶ��ļ�
    FILE *fpWrite;  // ָ���ƺ���ļ�
    int bufferLen = 1024*4;  // ����������
    char *buffer = (char*)malloc(bufferLen);  // ���ٻ���
    int readCount;  // ʵ�ʶ�ȡ���ֽ���
    if( (fpRead=fopen(fileRead, "rb")) == NULL || (fpWrite=fopen(fileWrite, "wb")) == NULL )
	{
        printf("Cannot open file, press any key to exit!\n");
        getch();
        exit(1);
    }
    // ���ϴ�fileRead��ȡ���ݣ����ڻ��������ٽ�������������д��fileWrite
    while( (readCount=fread(buffer, 1, bufferLen, fpRead)) > 0 )
	{
        fwrite(buffer, readCount, 1, fpWrite);
    }
    free(buffer);
    fclose(fpRead);
    fclose(fpWrite);
    return 1;
}
