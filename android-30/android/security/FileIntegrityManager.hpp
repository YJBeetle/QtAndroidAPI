#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::security::cert
{
	class X509Certificate;
}

namespace android::security
{
	class FileIntegrityManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileIntegrityManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FileIntegrityManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean isApkVeritySupported();
		jboolean isAppSourceCertificateTrusted(java::security::cert::X509Certificate arg0);
	};
} // namespace android::security

