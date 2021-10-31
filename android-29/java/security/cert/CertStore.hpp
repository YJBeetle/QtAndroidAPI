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
		
		CertStore(QAndroidJniObject obj);
		// Constructors
		CertStore() = default;
		
		// Methods
		static jstring getDefaultType();
		static QAndroidJniObject getInstance(jstring arg0, __JniBaseClass arg1);
		static QAndroidJniObject getInstance(jstring arg0, __JniBaseClass arg1, jstring arg2);
		static QAndroidJniObject getInstance(jstring arg0, __JniBaseClass arg1, java::security::Provider arg2);
		QAndroidJniObject getCRLs(__JniBaseClass arg0);
		QAndroidJniObject getCertStoreParameters();
		QAndroidJniObject getCertificates(__JniBaseClass arg0);
		QAndroidJniObject getProvider();
		jstring getType();
	};
} // namespace java::security::cert

