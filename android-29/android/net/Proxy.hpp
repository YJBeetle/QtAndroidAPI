#pragma once

#ifndef ANDROID_NET_PROXY
#define ANDROID_NET_PROXY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::net
{
	class Proxy : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject EXTRA_PROXY_INFO();
		static QAndroidJniObject PROXY_CHANGE_ACTION();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getHost(__jni_impl::android::content::Context arg0);
		static jint getPort(__jni_impl::android::content::Context arg0);
		static jint getDefaultPort();
		static QAndroidJniObject getDefaultHost();
	};
} // namespace __jni_impl::android::net

#include "../content/Context.hpp"

namespace __jni_impl::android::net
{
	// Fields
	QAndroidJniObject Proxy::EXTRA_PROXY_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.Proxy",
			"EXTRA_PROXY_INFO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Proxy::PROXY_CHANGE_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.Proxy",
			"PROXY_CHANGE_ACTION",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Proxy::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.Proxy",
			"()V");
	}
	
	// Methods
	QAndroidJniObject Proxy::getHost(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Proxy",
			"getHost",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	jint Proxy::getPort(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.net.Proxy",
			"getPort",
			"(Landroid/content/Context;)I",
			arg0.__jniObject().object());
	}
	jint Proxy::getDefaultPort()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.net.Proxy",
			"getDefaultPort",
			"()I");
	}
	QAndroidJniObject Proxy::getDefaultHost()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Proxy",
			"getDefaultHost",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class Proxy : public __jni_impl::android::net::Proxy
	{
	public:
		Proxy(QAndroidJniObject obj) { __thiz = obj; }
		Proxy()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_PROXY

