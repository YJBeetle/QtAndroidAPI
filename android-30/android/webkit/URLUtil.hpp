#pragma once

#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "./URLUtil.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline URLUtil::URLUtil()
		: JObject(
			"android.webkit.URLUtil",
			"()V"
		) {}
	
	// Methods
	inline JString URLUtil::composeSearchUrl(JString arg0, JString arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.webkit.URLUtil",
			"composeSearchUrl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline JByteArray URLUtil::decode(JByteArray arg0)
	{
		return callStaticObjectMethod(
			"android.webkit.URLUtil",
			"decode",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	inline JString URLUtil::guessFileName(JString arg0, JString arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.webkit.URLUtil",
			"guessFileName",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline JString URLUtil::guessUrl(JString arg0)
	{
		return callStaticObjectMethod(
			"android.webkit.URLUtil",
			"guessUrl",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline jboolean URLUtil::isAboutUrl(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isAboutUrl",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean URLUtil::isAssetUrl(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isAssetUrl",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean URLUtil::isContentUrl(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isContentUrl",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean URLUtil::isCookielessProxyUrl(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isCookielessProxyUrl",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean URLUtil::isDataUrl(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isDataUrl",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean URLUtil::isFileUrl(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isFileUrl",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean URLUtil::isHttpUrl(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isHttpUrl",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean URLUtil::isHttpsUrl(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isHttpsUrl",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean URLUtil::isJavaScriptUrl(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isJavaScriptUrl",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean URLUtil::isNetworkUrl(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isNetworkUrl",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean URLUtil::isValidUrl(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.webkit.URLUtil",
			"isValidUrl",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline JString URLUtil::stripAnchor(JString arg0)
	{
		return callStaticObjectMethod(
			"android.webkit.URLUtil",
			"stripAnchor",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
} // namespace android::webkit

// Base class headers

