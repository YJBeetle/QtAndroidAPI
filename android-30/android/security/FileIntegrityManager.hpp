#pragma once

#include "../../JObject.hpp"

namespace java::security::cert
{
	class X509Certificate;
}

namespace android::security
{
	class FileIntegrityManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FileIntegrityManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FileIntegrityManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean isApkVeritySupported() const;
		jboolean isAppSourceCertificateTrusted(java::security::cert::X509Certificate arg0) const;
	};
} // namespace android::security

