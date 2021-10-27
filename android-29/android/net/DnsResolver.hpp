#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Network;
}
namespace __jni_impl::android::os
{
	class CancellationSignal;
}

namespace __jni_impl::android::net
{
	class DnsResolver : public __JniBaseClass
	{
	public:
		// Fields
		static jint CLASS_IN();
		static jint ERROR_PARSE();
		static jint ERROR_SYSTEM();
		static jint FLAG_EMPTY();
		static jint FLAG_NO_CACHE_LOOKUP();
		static jint FLAG_NO_CACHE_STORE();
		static jint FLAG_NO_RETRY();
		static jint TYPE_A();
		static jint TYPE_AAAA();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance();
		void query(__jni_impl::android::net::Network arg0, jstring arg1, jint arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::CancellationSignal arg4, __jni_impl::__JniBaseClass arg5);
		void query(__jni_impl::android::net::Network arg0, const QString &arg1, jint arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::CancellationSignal arg4, __jni_impl::__JniBaseClass arg5);
		void query(__jni_impl::android::net::Network arg0, jstring arg1, jint arg2, jint arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::android::os::CancellationSignal arg5, __jni_impl::__JniBaseClass arg6);
		void query(__jni_impl::android::net::Network arg0, const QString &arg1, jint arg2, jint arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::android::os::CancellationSignal arg5, __jni_impl::__JniBaseClass arg6);
		void rawQuery(__jni_impl::android::net::Network arg0, jbyteArray arg1, jint arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::CancellationSignal arg4, __jni_impl::__JniBaseClass arg5);
		void rawQuery(__jni_impl::android::net::Network arg0, jstring arg1, jint arg2, jint arg3, jint arg4, __jni_impl::__JniBaseClass arg5, __jni_impl::android::os::CancellationSignal arg6, __jni_impl::__JniBaseClass arg7);
		void rawQuery(__jni_impl::android::net::Network arg0, const QString &arg1, jint arg2, jint arg3, jint arg4, __jni_impl::__JniBaseClass arg5, __jni_impl::android::os::CancellationSignal arg6, __jni_impl::__JniBaseClass arg7);
	};
} // namespace __jni_impl::android::net

#include "Network.hpp"
#include "../os/CancellationSignal.hpp"

namespace __jni_impl::android::net
{
	// Fields
	jint DnsResolver::CLASS_IN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.DnsResolver",
			"CLASS_IN"
		);
	}
	jint DnsResolver::ERROR_PARSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.DnsResolver",
			"ERROR_PARSE"
		);
	}
	jint DnsResolver::ERROR_SYSTEM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.DnsResolver",
			"ERROR_SYSTEM"
		);
	}
	jint DnsResolver::FLAG_EMPTY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.DnsResolver",
			"FLAG_EMPTY"
		);
	}
	jint DnsResolver::FLAG_NO_CACHE_LOOKUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.DnsResolver",
			"FLAG_NO_CACHE_LOOKUP"
		);
	}
	jint DnsResolver::FLAG_NO_CACHE_STORE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.DnsResolver",
			"FLAG_NO_CACHE_STORE"
		);
	}
	jint DnsResolver::FLAG_NO_RETRY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.DnsResolver",
			"FLAG_NO_RETRY"
		);
	}
	jint DnsResolver::TYPE_A()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.DnsResolver",
			"TYPE_A"
		);
	}
	jint DnsResolver::TYPE_AAAA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.DnsResolver",
			"TYPE_AAAA"
		);
	}
	
	// Constructors
	void DnsResolver::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.DnsResolver",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject DnsResolver::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.DnsResolver",
			"getInstance",
			"()Landroid/net/DnsResolver;"
		);
	}
	void DnsResolver::query(__jni_impl::android::net::Network arg0, jstring arg1, jint arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::CancellationSignal arg4, __jni_impl::__JniBaseClass arg5)
	{
		__thiz.callMethod<void>(
			"query",
			"(Landroid/net/Network;Ljava/lang/String;ILjava/util/concurrent/Executor;Landroid/os/CancellationSignal;Landroid/net/DnsResolver$Callback;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object()
		);
	}
	void DnsResolver::query(__jni_impl::android::net::Network arg0, const QString &arg1, jint arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::CancellationSignal arg4, __jni_impl::__JniBaseClass arg5)
	{
		__thiz.callMethod<void>(
			"query",
			"(Landroid/net/Network;Ljava/lang/String;ILjava/util/concurrent/Executor;Landroid/os/CancellationSignal;Landroid/net/DnsResolver$Callback;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object()
		);
	}
	void DnsResolver::query(__jni_impl::android::net::Network arg0, jstring arg1, jint arg2, jint arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::android::os::CancellationSignal arg5, __jni_impl::__JniBaseClass arg6)
	{
		__thiz.callMethod<void>(
			"query",
			"(Landroid/net/Network;Ljava/lang/String;IILjava/util/concurrent/Executor;Landroid/os/CancellationSignal;Landroid/net/DnsResolver$Callback;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object()
		);
	}
	void DnsResolver::query(__jni_impl::android::net::Network arg0, const QString &arg1, jint arg2, jint arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::android::os::CancellationSignal arg5, __jni_impl::__JniBaseClass arg6)
	{
		__thiz.callMethod<void>(
			"query",
			"(Landroid/net/Network;Ljava/lang/String;IILjava/util/concurrent/Executor;Landroid/os/CancellationSignal;Landroid/net/DnsResolver$Callback;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object()
		);
	}
	void DnsResolver::rawQuery(__jni_impl::android::net::Network arg0, jbyteArray arg1, jint arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::CancellationSignal arg4, __jni_impl::__JniBaseClass arg5)
	{
		__thiz.callMethod<void>(
			"rawQuery",
			"(Landroid/net/Network;[BILjava/util/concurrent/Executor;Landroid/os/CancellationSignal;Landroid/net/DnsResolver$Callback;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object()
		);
	}
	void DnsResolver::rawQuery(__jni_impl::android::net::Network arg0, jstring arg1, jint arg2, jint arg3, jint arg4, __jni_impl::__JniBaseClass arg5, __jni_impl::android::os::CancellationSignal arg6, __jni_impl::__JniBaseClass arg7)
	{
		__thiz.callMethod<void>(
			"rawQuery",
			"(Landroid/net/Network;Ljava/lang/String;IIILjava/util/concurrent/Executor;Landroid/os/CancellationSignal;Landroid/net/DnsResolver$Callback;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object(),
			arg6.__jniObject().object(),
			arg7.__jniObject().object()
		);
	}
	void DnsResolver::rawQuery(__jni_impl::android::net::Network arg0, const QString &arg1, jint arg2, jint arg3, jint arg4, __jni_impl::__JniBaseClass arg5, __jni_impl::android::os::CancellationSignal arg6, __jni_impl::__JniBaseClass arg7)
	{
		__thiz.callMethod<void>(
			"rawQuery",
			"(Landroid/net/Network;Ljava/lang/String;IIILjava/util/concurrent/Executor;Landroid/os/CancellationSignal;Landroid/net/DnsResolver$Callback;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object(),
			arg6.__jniObject().object(),
			arg7.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class DnsResolver : public __jni_impl::android::net::DnsResolver
	{
	public:
		DnsResolver(QAndroidJniObject obj) { __thiz = obj; }
		DnsResolver()
		{
			__constructor();
		}
	};
} // namespace android::net

