#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class CertStore : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertStore(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CertStore(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring getDefaultType();
		static java::security::cert::CertStore getInstance(jstring arg0, __JniBaseClass arg1);
		static java::security::cert::CertStore getInstance(jstring arg0, __JniBaseClass arg1, jstring arg2);
		static java::security::cert::CertStore getInstance(jstring arg0, __JniBaseClass arg1, java::security::Provider arg2);
		__JniBaseClass getCRLs(__JniBaseClass arg0);
		__JniBaseClass getCertStoreParameters();
		__JniBaseClass getCertificates(__JniBaseClass arg0);
		java::security::Provider getProvider();
		jstring getType();
	};
} // namespace java::security::cert

