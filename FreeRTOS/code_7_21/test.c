
//堆 空闲的并可管理的内存，我们可以取出这块内存，也可将其释放

char heap_buf[1024];
int pos = 0;
//取内存
void* my_malloc(int size)
{
    int old_pos = pos;
    pos += size;
    return &heap_buf[old_pos];//取出内存
}
void* my_free(void *buf)
{

}
int main(void)
{
    char data = 65;
    char* buf_ = my_malloc(100);
    int i = 0;
    
    unsigned char uch = 200;
    for(i = 0; i < 26;i++)
    {
        buf_[i] = 'A' + i;
    }

    
    return 0;
}