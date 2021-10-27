#include "../content/Context.hpp"
#include "./Proxy.hpp"

namespace android::net
{
	// Fields
	jstring Proxy::EXTRA_PROXY_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.Proxy",
			"EXTRA_PROXY_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Proxy::PROXY_CHANGE_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.Proxy",
			"PROXY_CHANGE_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	Proxy::Proxy(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Proxy::Proxy()
	{
		__thiz = QAndroidJniObject(
			"android.net.Proxy",
			"()V"
		);
	}
	
	// Methods
	jstring Proxy::getDefaultHost()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Proxy",
			"getDefaultHost",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Proxy::getDefaultPort()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.net.Proxy",
			"getDefaultPort",
			"()I"
		);
	}
	jstring Proxy::getHost(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Proxy",
			"getHost",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jint Proxy::getPort(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.net.Proxy",
			"getPort",
			"(Landroid/content/Context;)I",
			arg0.__jniObject().object()
		);
	}
} // namespace android::net

