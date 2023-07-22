#pragma once

#include "../../JArray.hpp"
#include "../content/Context.def.hpp"
#include "../../JString.hpp"
#include "./WebViewDatabase.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline WebViewDatabase::WebViewDatabase()
		: JObject(
			"android.webkit.WebViewDatabase",
			"()V"
		) {}
	
	// Methods
	inline android::webkit::WebViewDatabase WebViewDatabase::getInstance(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.webkit.WebViewDatabase",
			"getInstance",
			"(Landroid/content/Context;)Landroid/webkit/WebViewDatabase;",
			arg0.object()
		);
	}
	inline void WebViewDatabase::clearFormData() const
	{
		callMethod<void>(
			"clearFormData",
			"()V"
		);
	}
	inline void WebViewDatabase::clearHttpAuthUsernamePassword() const
	{
		callMethod<void>(
			"clearHttpAuthUsernamePassword",
			"()V"
		);
	}
	inline void WebViewDatabase::clearUsernamePassword() const
	{
		callMethod<void>(
			"clearUsernamePassword",
			"()V"
		);
	}
	inline JArray WebViewDatabase::getHttpAuthUsernamePassword(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"getHttpAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jboolean WebViewDatabase::hasFormData() const
	{
		return callMethod<jboolean>(
			"hasFormData",
			"()Z"
		);
	}
	inline jboolean WebViewDatabase::hasHttpAuthUsernamePassword() const
	{
		return callMethod<jboolean>(
			"hasHttpAuthUsernamePassword",
			"()Z"
		);
	}
	inline jboolean WebViewDatabase::hasUsernamePassword() const
	{
		return callMethod<jboolean>(
			"hasUsernamePassword",
			"()Z"
		);
	}
	inline void WebViewDatabase::setHttpAuthUsernamePassword(JString arg0, JString arg1, JString arg2, JString arg3) const
	{
		callMethod<void>(
			"setHttpAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		);
	}
} // namespace android::webkit

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::webkit;
#endif
