#pragma once

#include "../../JByteArray.hpp"
#include "./Network.def.hpp"
#include "../os/CancellationSignal.def.hpp"
#include "../../JString.hpp"
#include "./DnsResolver.def.hpp"

namespace android::net
{
	// Fields
	inline jint DnsResolver::CLASS_IN()
	{
		return getStaticField<jint>(
			"android.net.DnsResolver",
			"CLASS_IN"
		);
	}
	inline jint DnsResolver::ERROR_PARSE()
	{
		return getStaticField<jint>(
			"android.net.DnsResolver",
			"ERROR_PARSE"
		);
	}
	inline jint DnsResolver::ERROR_SYSTEM()
	{
		return getStaticField<jint>(
			"android.net.DnsResolver",
			"ERROR_SYSTEM"
		);
	}
	inline jint DnsResolver::FLAG_EMPTY()
	{
		return getStaticField<jint>(
			"android.net.DnsResolver",
			"FLAG_EMPTY"
		);
	}
	inline jint DnsResolver::FLAG_NO_CACHE_LOOKUP()
	{
		return getStaticField<jint>(
			"android.net.DnsResolver",
			"FLAG_NO_CACHE_LOOKUP"
		);
	}
	inline jint DnsResolver::FLAG_NO_CACHE_STORE()
	{
		return getStaticField<jint>(
			"android.net.DnsResolver",
			"FLAG_NO_CACHE_STORE"
		);
	}
	inline jint DnsResolver::FLAG_NO_RETRY()
	{
		return getStaticField<jint>(
			"android.net.DnsResolver",
			"FLAG_NO_RETRY"
		);
	}
	inline jint DnsResolver::TYPE_A()
	{
		return getStaticField<jint>(
			"android.net.DnsResolver",
			"TYPE_A"
		);
	}
	inline jint DnsResolver::TYPE_AAAA()
	{
		return getStaticField<jint>(
			"android.net.DnsResolver",
			"TYPE_AAAA"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::net::DnsResolver DnsResolver::getInstance()
	{
		return callStaticObjectMethod(
			"android.net.DnsResolver",
			"getInstance",
			"()Landroid/net/DnsResolver;"
		);
	}
	inline void DnsResolver::query(android::net::Network arg0, JString arg1, jint arg2, JObject arg3, android::os::CancellationSignal arg4, JObject arg5) const
	{
		callMethod<void>(
			"query",
			"(Landroid/net/Network;Ljava/lang/String;ILjava/util/concurrent/Executor;Landroid/os/CancellationSignal;Landroid/net/DnsResolver$Callback;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3.object(),
			arg4.object(),
			arg5.object()
		);
	}
	inline void DnsResolver::query(android::net::Network arg0, JString arg1, jint arg2, jint arg3, JObject arg4, android::os::CancellationSignal arg5, JObject arg6) const
	{
		callMethod<void>(
			"query",
			"(Landroid/net/Network;Ljava/lang/String;IILjava/util/concurrent/Executor;Landroid/os/CancellationSignal;Landroid/net/DnsResolver$Callback;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3,
			arg4.object(),
			arg5.object(),
			arg6.object()
		);
	}
	inline void DnsResolver::rawQuery(android::net::Network arg0, JByteArray arg1, jint arg2, JObject arg3, android::os::CancellationSignal arg4, JObject arg5) const
	{
		callMethod<void>(
			"rawQuery",
			"(Landroid/net/Network;[BILjava/util/concurrent/Executor;Landroid/os/CancellationSignal;Landroid/net/DnsResolver$Callback;)V",
			arg0.object(),
			arg1.object<jbyteArray>(),
			arg2,
			arg3.object(),
			arg4.object(),
			arg5.object()
		);
	}
	inline void DnsResolver::rawQuery(android::net::Network arg0, JString arg1, jint arg2, jint arg3, jint arg4, JObject arg5, android::os::CancellationSignal arg6, JObject arg7) const
	{
		callMethod<void>(
			"rawQuery",
			"(Landroid/net/Network;Ljava/lang/String;IIILjava/util/concurrent/Executor;Landroid/os/CancellationSignal;Landroid/net/DnsResolver$Callback;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3,
			arg4,
			arg5.object(),
			arg6.object(),
			arg7.object()
		);
	}
} // namespace android::net

// Base class headers

