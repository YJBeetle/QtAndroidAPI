#pragma once

#include "./PKIXCertPathChecker.def.hpp"

class JObject;
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
		PKIXRevocationChecker(QJniObject obj) : java::security::cert::PKIXCertPathChecker(obj) {}
		
		// Constructors
		
		// Methods
		java::security::cert::PKIXRevocationChecker clone() const;
		JObject getOcspExtensions() const;
		java::net::URI getOcspResponder() const;
		java::security::cert::X509Certificate getOcspResponderCert() const;
		JObject getOcspResponses() const;
		JObject getOptions() const;
		JObject getSoftFailExceptions() const;
		void setOcspExtensions(JObject arg0) const;
		void setOcspResponder(java::net::URI arg0) const;
		void setOcspResponderCert(java::security::cert::X509Certificate arg0) const;
		void setOcspResponses(JObject arg0) const;
		void setOptions(JObject arg0) const;
	};
} // namespace java::security::cert

