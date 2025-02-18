#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/cert/X509Certificate.def.hpp"
#include "./X509TrustManagerExtensions.def.hpp"

namespace android::net::http
{
	// Fields
	
	// Constructors
	inline X509TrustManagerExtensions::X509TrustManagerExtensions(JObject arg0)
		: JObject(
			"android.net.http.X509TrustManagerExtensions",
			"(Ljavax/net/ssl/X509TrustManager;)V",
			arg0.object()
		) {}
	
	// Methods
	inline JObject X509TrustManagerExtensions::checkServerTrusted(JArray arg0, JString arg1, JString arg2) const
	{
		return callObjectMethod(
			"checkServerTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;",
			arg0.object<jarray>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline jboolean X509TrustManagerExtensions::isSameTrustConfiguration(JString arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"isSameTrustConfiguration",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jboolean X509TrustManagerExtensions::isUserAddedCertificate(java::security::cert::X509Certificate arg0) const
	{
		return callMethod<jboolean>(
			"isUserAddedCertificate",
			"(Ljava/security/cert/X509Certificate;)Z",
			arg0.object()
		);
	}
} // namespace android::net::http

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif
