#pragma once

#include "../../JString.hpp"
#include "./WebStorage.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::webkit::WebStorage WebStorage::getInstance()
	{
		return callStaticObjectMethod(
			"android.webkit.WebStorage",
			"getInstance",
			"()Landroid/webkit/WebStorage;"
		);
	}
	inline void WebStorage::deleteAllData() const
	{
		callMethod<void>(
			"deleteAllData",
			"()V"
		);
	}
	inline void WebStorage::deleteOrigin(JString arg0) const
	{
		callMethod<void>(
			"deleteOrigin",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WebStorage::getOrigins(JObject arg0) const
	{
		callMethod<void>(
			"getOrigins",
			"(Landroid/webkit/ValueCallback;)V",
			arg0.object()
		);
	}
	inline void WebStorage::getQuotaForOrigin(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"getQuotaForOrigin",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void WebStorage::getUsageForOrigin(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"getUsageForOrigin",
			"(Ljava/lang/String;Landroid/webkit/ValueCallback;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void WebStorage::setQuotaForOrigin(JString arg0, jlong arg1) const
	{
		callMethod<void>(
			"setQuotaForOrigin",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace android::webkit

// Base class headers

