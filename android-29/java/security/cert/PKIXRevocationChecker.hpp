#pragma once

#include "../../../JObject.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PKIXRevocationChecker(const char *className, const char *sig, Ts...agv) : java::security::cert::PKIXCertPathChecker(className, sig, std::forward<Ts>(agv)...) {}
		PKIXRevocationChecker(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		java::security::cert::PKIXRevocationChecker clone();
		JObject getOcspExtensions();
		java::net::URI getOcspResponder();
		java::security::cert::X509Certificate getOcspResponderCert();
		JObject getOcspResponses();
		JObject getOptions();
		JObject getSoftFailExceptions();
		void setOcspExtensions(JObject arg0);
		void setOcspResponder(java::net::URI arg0);
		void setOcspResponderCert(java::security::cert::X509Certificate arg0);
		void setOcspResponses(JObject arg0);
		void setOptions(JObject arg0);
	};
} // namespace java::security::cert

