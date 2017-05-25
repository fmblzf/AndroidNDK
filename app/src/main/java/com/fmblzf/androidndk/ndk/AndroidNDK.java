package com.fmblzf.androidndk.ndk;

/**
 * Created by fmblzf on 2017/5/24.
 * 该类是各种Native方法集合
 *
 */
public class AndroidNDK {

    /**
     * 静态加载.so文件
     * 注意加载的so文件名称和build.gradle中的moduleName保持一致
     * 即没有lib前缀的文件名
     */
    static {
        System.loadLibrary("fm");
    }
    /**
     * 启动后台服务
     * @param packName
     * @param sdkVersion
     */
    public static native void startService(String packName,int sdkVersion);

    /**
     * 启动指定的Activity
     * @param compantName
     */
    public static native void startActivity(String compantName);

    /**
     * 发送广播
     * @param actionName
     */
    public static native void sendBroadCast(String actionName);

    /**
     * 测试.so文件链接成功
     * @param str
     * @return
     */
    public static native String test(String str);

}
