#pragma once

#include "../../java/security/cert/X509Certificate.def.hpp"
#include "./FileIntegrityManager.def.hpp"

namespace android::security
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean FileIntegrityManager::isApkVeritySupported() const
	{
		return callMethod<jboolean>(
			"isApkVeritySupported",
			"()Z"
		);
	}
	inline jboolean FileIntegrityManager::isAppSourceCertificateTrusted(java::security::cert::X509Certificate arg0) const
	{
		return callMethod<jboolean>(
			"isAppSourceCertificateTrusted",
			"(Ljava/security/cert/X509Certificate;)Z",
			arg0.object()
		);
	}
} // namespace android::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security;
#endif
