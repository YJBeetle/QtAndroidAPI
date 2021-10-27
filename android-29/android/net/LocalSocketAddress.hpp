#pragma once

#ifndef ANDROID_NET_LOCALSOCKETADDRESS
#define ANDROID_NET_LOCALSOCKETADDRESS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class LocalSocketAddress_Namespace;
}

namespace __jni_impl::android::net
{
	class LocalSocketAddress : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, __jni_impl::android::net::LocalSocketAddress_Namespace arg1);
		void __constructor(const QString &arg0, __jni_impl::android::net::LocalSocketAddress_Namespace arg1);
		
		// Methods
		jstring getName();
		QAndroidJniObject getNamespace();
	};
} // namespace __jni_impl::android::net

#include "LocalSocketAddress_Namespace.hpp"

namespace __jni_impl::android::net
{
	// Fields
	
	// Constructors
	void LocalSocketAddress::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.LocalSocketAddress",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void LocalSocketAddress::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.LocalSocketAddress",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void LocalSocketAddress::__constructor(jstring arg0, __jni_impl::android::net::LocalSocketAddress_Namespace arg1)
	{
		__thiz = QAndroidJniObject(
			"android.net.LocalSocketAddress",
			"(Ljava/lang/String;Landroid/net/LocalSocketAddress$Namespace;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void LocalSocketAddress::__constructor(const QString &arg0, __jni_impl::android::net::LocalSocketAddress_Namespace arg1)
	{
		__thiz = QAndroidJniObject(
			"android.net.LocalSocketAddress",
			"(Ljava/lang/String;Landroid/net/LocalSocketAddress$Namespace;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jstring LocalSocketAddress::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject LocalSocketAddress::getNamespace()
	{
		return __thiz.callObjectMethod(
			"getNamespace",
			"()Landroid/net/LocalSocketAddress$Namespace;"
		);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class LocalSocketAddress : public __jni_impl::android::net::LocalSocketAddress
	{
	public:
		LocalSocketAddress(QAndroidJniObject obj) { __thiz = obj; }
		LocalSocketAddress(jstring arg0)
		{
			__constructor(
				arg0);
		}
		LocalSocketAddress(jstring arg0, __jni_impl::android::net::LocalSocketAddress_Namespace arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::net

#endif // ANDROID_NET_LOCALSOCKETADDRESS

