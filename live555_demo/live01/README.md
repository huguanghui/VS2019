# live01

## 实现了live555中环境类的打印技巧

## live555中处理请求数据和相应数据的技巧

> 再live555中默认使用了两个20k的buffer来处理RTSP的请求数据和响应数据.
> 使用了fRequestBytesAlreadySeen,fRequestBufferBytesLeft两个整型变量来控制请求数据存储的位置.
