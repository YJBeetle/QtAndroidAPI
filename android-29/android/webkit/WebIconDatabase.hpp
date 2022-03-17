#pragma once

#include "../../JString.hpp"
#include "./WebIconDatabase.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline WebIconDatabase::WebIconDatabase()
		: JObject(
			"android.webkit.WebIconDatabase",
			"()V"
		) {}
	
	// Methods
	inline android::webkit::WebIconDatabase WebIconDatabase::getInstance()
	{
		return callStaticObjectMethod(
			"android.webkit.WebIconDatabase",
			"getInstance",
			"()Landroid/webkit/WebIconDatabase;"
		);
	}
	inline void WebIconDatabase::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void WebIconDatabase::open(JString arg0) const
	{
		callMethod<void>(
			"open",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WebIconDatabase::releaseIconForPageUrl(JString arg0) const
	{
		callMethod<void>(
			"releaseIconForPageUrl",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WebIconDatabase::removeAllIcons() const
	{
		callMethod<void>(
			"removeAllIcons",
			"()V"
		);
	}
	inline void WebIconDatabase::requestIconForPageUrl(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"requestIconForPageUrl",
			"(Ljava/lang/String;Landroid/webkit/WebIconDatabase$IconListener;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void WebIconDatabase::retainIconForPageUrl(JString arg0) const
	{
		callMethod<void>(
			"retainIconForPageUrl",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::webkit

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::webkit;
#endif
