#pragma once

#include "../../../JObject.hpp"

class JString;
namespace java::security
{
	class NoSuchAlgorithmException;
}
namespace java::security
{
	class Provider;
}
namespace java::security::cert
{
	class CertStoreSpi;
}

namespace java::security::cert
{
	class CertStore : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertStore(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CertStore(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JString getDefaultType();
		static java::security::cert::CertStore getInstance(JString arg0, JObject arg1);
		static java::security::cert::CertStore getInstance(JString arg0, JObject arg1, JString arg2);
		static java::security::cert::CertStore getInstance(JString arg0, JObject arg1, java::security::Provider arg2);
		JObject getCRLs(JObject arg0) const;
		JObject getCertStoreParameters() const;
		JObject getCertificates(JObject arg0) const;
		java::security::Provider getProvider() const;
		JString getType() const;
	};
} // namespace java::security::cert

