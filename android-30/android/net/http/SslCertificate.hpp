#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net::http
{
	class SslCertificate_DName;
}
namespace android::os
{
	class Bundle;
}
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
	class SslCertificate : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SslCertificate(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SslCertificate(QJniObject obj);
		
		// Constructors
		SslCertificate(java::security::cert::X509Certificate arg0);
		SslCertificate(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
		SslCertificate(jstring arg0, jstring arg1, java::util::Date arg2, java::util::Date arg3);
		
		// Methods
		static android::net::http::SslCertificate restoreState(android::os::Bundle arg0);
		static android::os::Bundle saveState(android::net::http::SslCertificate arg0);
		android::net::http::SslCertificate_DName getIssuedBy();
		android::net::http::SslCertificate_DName getIssuedTo();
		jstring getValidNotAfter();
		java::util::Date getValidNotAfterDate();
		jstring getValidNotBefore();
		java::util::Date getValidNotBeforeDate();
		java::security::cert::X509Certificate getX509Certificate();
		jstring toString();
	};
} // namespace android::net::http

