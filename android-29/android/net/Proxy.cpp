#include "../content/Context.hpp"
#include "../../JString.hpp"
#include "./Proxy.hpp"

namespace android::net
{
	// Fields
	JString Proxy::EXTRA_PROXY_INFO()
	{
		return getStaticObjectField(
			"android.net.Proxy",
			"EXTRA_PROXY_INFO",
			"Ljava/lang/String;"
		);
	}
	JString Proxy::PROXY_CHANGE_ACTION()
	{
		return getStaticObjectField(
			"android.net.Proxy",
			"PROXY_CHANGE_ACTION",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	Proxy::Proxy(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Proxy::Proxy()
		: JObject(
			"android.net.Proxy",
			"()V"
		) {}
	
	// Methods
	JString Proxy::getDefaultHost()
	{
		return callStaticObjectMethod(
			"android.net.Proxy",
			"getDefaultHost",
			"()Ljava/lang/String;"
		);
	}
	jint Proxy::getDefaultPort()
	{
		return callStaticMethod<jint>(
			"android.net.Proxy",
			"getDefaultPort",
			"()I"
		);
	}
	JString Proxy::getHost(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.net.Proxy",
			"getHost",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		);
	}
	jint Proxy::getPort(android::content::Context arg0)
	{
		return callStaticMethod<jint>(
			"android.net.Proxy",
			"getPort",
			"(Landroid/content/Context;)I",
			arg0.object()
		);
	}
} // namespace android::net

