#include "./Network.hpp"
#include "../os/CancellationSignal.hpp"
#include "./DnsResolver.hpp"

namespace android::net
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
	
	// QAndroidJniObject forward
	DnsResolver::DnsResolver(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject DnsResolver::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.DnsResolver",
			"getInstance",
			"()Landroid/net/DnsResolver;"
		);
	}
	void DnsResolver::query(android::net::Network arg0, jstring arg1, jint arg2, __JniBaseClass arg3, android::os::CancellationSignal arg4, __JniBaseClass arg5)
	{
		callMethod<void>(
			"query",
			"(Landroid/net/Network;Ljava/lang/String;ILjava/util/concurrent/Executor;Landroid/os/CancellationSignal;Landroid/net/DnsResolver$Callback;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object(),
			arg4.object(),
			arg5.object()
		);
	}
	void DnsResolver::query(android::net::Network arg0, jstring arg1, jint arg2, jint arg3, __JniBaseClass arg4, android::os::CancellationSignal arg5, __JniBaseClass arg6)
	{
		callMethod<void>(
			"query",
			"(Landroid/net/Network;Ljava/lang/String;IILjava/util/concurrent/Executor;Landroid/os/CancellationSignal;Landroid/net/DnsResolver$Callback;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object(),
			arg5.object(),
			arg6.object()
		);
	}
	void DnsResolver::rawQuery(android::net::Network arg0, jbyteArray arg1, jint arg2, __JniBaseClass arg3, android::os::CancellationSignal arg4, __JniBaseClass arg5)
	{
		callMethod<void>(
			"rawQuery",
			"(Landroid/net/Network;[BILjava/util/concurrent/Executor;Landroid/os/CancellationSignal;Landroid/net/DnsResolver$Callback;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object(),
			arg4.object(),
			arg5.object()
		);
	}
	void DnsResolver::rawQuery(android::net::Network arg0, jstring arg1, jint arg2, jint arg3, jint arg4, __JniBaseClass arg5, android::os::CancellationSignal arg6, __JniBaseClass arg7)
	{
		callMethod<void>(
			"rawQuery",
			"(Landroid/net/Network;Ljava/lang/String;IIILjava/util/concurrent/Executor;Landroid/os/CancellationSignal;Landroid/net/DnsResolver$Callback;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object(),
			arg6.object(),
			arg7.object()
		);
	}
} // namespace android::net

