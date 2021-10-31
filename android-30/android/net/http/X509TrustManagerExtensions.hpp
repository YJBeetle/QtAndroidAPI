#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::security::cert
{
	class X509Certificate;
}

namespace android::net::http
{
	class X509TrustManagerExtensions : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit X509TrustManagerExtensions(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		X509TrustManagerExtensions(QAndroidJniObject obj);
		
		// Constructors
		X509TrustManagerExtensions(__JniBaseClass arg0);
		
		// Methods
		__JniBaseClass checkServerTrusted(jarray arg0, jstring arg1, jstring arg2);
		jboolean isSameTrustConfiguration(jstring arg0, jstring arg1);
		jboolean isUserAddedCertificate(java::security::cert::X509Certificate arg0);
	};
} // namespace android::net::http

