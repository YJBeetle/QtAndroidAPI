#pragma once

#include "../../JString.hpp"
#include "./GeolocationPermissions.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::webkit::GeolocationPermissions GeolocationPermissions::getInstance()
	{
		return callStaticObjectMethod(
			"android.webkit.GeolocationPermissions",
			"getInstance",
			"()Landroid/webkit/GeolocationPermissions;"
		);
	}
	inline void GeolocationPermissions::allow(JString arg0) const
	{
		callMethod<void>(
			"allow",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void GeolocationPermissions::clear(JString arg0) const
	{
		callMethod<void>(
			"clear",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void GeolocationPermissions::clearAll() const
	{
		callMethod<void>(
			"clearAll",
			"()V"
		);
	}
	inline void GeolocationPermissions::getAllowed(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"getAllowed",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void GeolocationPermissions::getOrigins(JObject arg0) const
	{
		callMethod<void>(
			"getOrigins",
			"(Landroid/webkit/ValueCallback;)V",
			arg0.object()
		);
	}
} // namespace android::webkit

// Base class headers

