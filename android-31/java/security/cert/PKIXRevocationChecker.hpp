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
		
		// QJniObject forward
		template<typename ...Ts> explicit PKIXRevocationChecker(const char *className, const char *sig, Ts...agv) : java::security::cert::PKIXCertPathChecker(className, sig, std::forward<Ts>(agv)...) {}
		PKIXRevocationChecker(QJniObject obj);
		
		// Constructors
		
		// Methods
		java::security::cert::PKIXRevocationChecker clone();
		__JniBaseClass getOcspExtensions();
		java::net::URI getOcspResponder();
		java::security::cert::X509Certificate getOcspResponderCert();
		__JniBaseClass getOcspResponses();
		__JniBaseClass getOptions();
		__JniBaseClass getSoftFailExceptions();
		void setOcspExtensions(__JniBaseClass arg0);
		void setOcspResponder(java::net::URI arg0);
		void setOcspResponderCert(java::security::cert::X509Certificate arg0);
		void setOcspResponses(__JniBaseClass arg0);
		void setOptions(__JniBaseClass arg0);
	};
} // namespace java::security::cert

