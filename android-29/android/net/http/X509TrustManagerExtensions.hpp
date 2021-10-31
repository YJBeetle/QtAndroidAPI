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
		
		X509TrustManagerExtensions(QAndroidJniObject obj);
		// Constructors
		X509TrustManagerExtensions(__JniBaseClass arg0);
		X509TrustManagerExtensions() = default;
		
		// Methods
		QAndroidJniObject checkServerTrusted(jarray arg0, jstring arg1, jstring arg2);
		jboolean isSameTrustConfiguration(jstring arg0, jstring arg1);
		jboolean isUserAddedCertificate(java::security::cert::X509Certificate arg0);
	};
} // namespace android::net::http

