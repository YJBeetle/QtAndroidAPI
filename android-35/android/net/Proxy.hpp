#pragma once

#include "../content/Context.def.hpp"
#include "../../JString.hpp"
#include "./Proxy.def.hpp"

namespace android::net
{
	// Fields
	inline JString Proxy::PROXY_CHANGE_ACTION()
	{
		return getStaticObjectField(
			"android.net.Proxy",
			"PROXY_CHANGE_ACTION",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline Proxy::Proxy()
		: JObject(
			"android.net.Proxy",
			"()V"
		) {}
	
	// Methods
	inline JString Proxy::getDefaultHost()
	{
		return callStaticObjectMethod(
			"android.net.Proxy",
			"getDefaultHost",
			"()Ljava/lang/String;"
		);
	}
	inline jint Proxy::getDefaultPort()
	{
		return callStaticMethod<jint>(
			"android.net.Proxy",
			"getDefaultPort",
			"()I"
		);
	}
	inline JString Proxy::getHost(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.net.Proxy",
			"getHost",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jint Proxy::getPort(android::content::Context arg0)
	{
		return callStaticMethod<jint>(
			"android.net.Proxy",
			"getPort",
			"(Landroid/content/Context;)I",
			arg0.object()
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
