#include "../../JString.hpp"
#include "./GeolocationPermissions.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	
	// Methods
	android::webkit::GeolocationPermissions GeolocationPermissions::getInstance()
	{
		return callStaticObjectMethod(
			"android.webkit.GeolocationPermissions",
			"getInstance",
			"()Landroid/webkit/GeolocationPermissions;"
		);
	}
	void GeolocationPermissions::allow(JString arg0) const
	{
		callMethod<void>(
			"allow",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void GeolocationPermissions::clear(JString arg0) const
	{
		callMethod<void>(
			"clear",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void GeolocationPermissions::clearAll() const
	{
		callMethod<void>(
			"clearAll",
			"()V"
		);
	}
	void GeolocationPermissions::getAllowed(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"getAllowed",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void GeolocationPermissions::getOrigins(JObject arg0) const
	{
		callMethod<void>(
			"getOrigins",
			"(Landroid/webkit/ValueCallback;)V",
			arg0.object()
		);
	}
} // namespace android::webkit

