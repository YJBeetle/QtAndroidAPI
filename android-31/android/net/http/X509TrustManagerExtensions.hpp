#pragma once

#include "../../../JObject.hpp"

namespace java::security::cert
{
	class X509Certificate;
}

namespace android::net::http
{
	class X509TrustManagerExtensions : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit X509TrustManagerExtensions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		X509TrustManagerExtensions(QAndroidJniObject obj);
		
		// Constructors
		X509TrustManagerExtensions(JObject arg0);
		
		// Methods
		JObject checkServerTrusted(jarray arg0, jstring arg1, jstring arg2);
		jboolean isSameTrustConfiguration(jstring arg0, jstring arg1);
		jboolean isUserAddedCertificate(java::security::cert::X509Certificate arg0);
	};
} // namespace android::net::http

