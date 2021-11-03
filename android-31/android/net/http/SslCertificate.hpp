#pragma once

#include "../../../JObject.hpp"

namespace android::net::http
{
	class SslCertificate_DName;
}
namespace android::os
{
	class Bundle;
}
class JString;
namespace java::security::cert
{
	class X509Certificate;
}
namespace java::util
{
	class Date;
}

namespace android::net::http
{
	class SslCertificate : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SslCertificate(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SslCertificate(QJniObject obj);
		
		// Constructors
		SslCertificate(java::security::cert::X509Certificate arg0);
		SslCertificate(JString arg0, JString arg1, JString arg2, JString arg3);
		SslCertificate(JString arg0, JString arg1, java::util::Date arg2, java::util::Date arg3);
		
		// Methods
		static android::net::http::SslCertificate restoreState(android::os::Bundle arg0);
		static android::os::Bundle saveState(android::net::http::SslCertificate arg0);
		android::net::http::SslCertificate_DName getIssuedBy();
		android::net::http::SslCertificate_DName getIssuedTo();
		JString getValidNotAfter();
		java::util::Date getValidNotAfterDate();
		JString getValidNotBefore();
		java::util::Date getValidNotBeforeDate();
		java::security::cert::X509Certificate getX509Certificate();
		JString toString();
	};
} // namespace android::net::http

