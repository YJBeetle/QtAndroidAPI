#pragma once

#include "../../../JObject.hpp"

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
		static jstring getDefaultType();
		static java::security::cert::CertStore getInstance(jstring arg0, JObject arg1);
		static java::security::cert::CertStore getInstance(jstring arg0, JObject arg1, jstring arg2);
		static java::security::cert::CertStore getInstance(jstring arg0, JObject arg1, java::security::Provider arg2);
		JObject getCRLs(JObject arg0);
		JObject getCertStoreParameters();
		JObject getCertificates(JObject arg0);
		java::security::Provider getProvider();
		jstring getType();
	};
} // namespace java::security::cert

