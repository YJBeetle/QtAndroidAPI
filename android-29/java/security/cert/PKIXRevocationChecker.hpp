#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./PKIXCertPathChecker.hpp"

namespace java::net
{
	class URI;
}
namespace java::security::cert
{
	class X509Certificate;
}

namespace java::security::cert
{
	class PKIXRevocationChecker : public java::security::cert::PKIXCertPathChecker
	{
	public:
		// Fields
		
		PKIXRevocationChecker(QAndroidJniObject obj);
		// Constructors
		PKIXRevocationChecker() = default;
		
		// Methods
		QAndroidJniObject clone();
		QAndroidJniObject getOcspExtensions();
		QAndroidJniObject getOcspResponder();
		QAndroidJniObject getOcspResponderCert();
		QAndroidJniObject getOcspResponses();
		QAndroidJniObject getOptions();
		QAndroidJniObject getSoftFailExceptions();
		void setOcspExtensions(__JniBaseClass arg0);
		void setOcspResponder(java::net::URI arg0);
		void setOcspResponderCert(java::security::cert::X509Certificate arg0);
		void setOcspResponses(__JniBaseClass arg0);
		void setOptions(__JniBaseClass arg0);
	};
} // namespace java::security::cert

