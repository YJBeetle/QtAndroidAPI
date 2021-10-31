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
		
		SslCertificate(QAndroidJniObject obj);
		// Constructors
		SslCertificate(java::security::cert::X509Certificate arg0);
		SslCertificate(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
		SslCertificate(jstring arg0, jstring arg1, java::util::Date arg2, java::util::Date arg3);
		SslCertificate() = default;
		
		// Methods
		static QAndroidJniObject restoreState(android::os::Bundle arg0);
		static QAndroidJniObject saveState(android::net::http::SslCertificate arg0);
		QAndroidJniObject getIssuedBy();
		QAndroidJniObject getIssuedTo();
		jstring getValidNotAfter();
		QAndroidJniObject getValidNotAfterDate();
		jstring getValidNotBefore();
		QAndroidJniObject getValidNotBeforeDate();
		QAndroidJniObject getX509Certificate();
		jstring toString();
	};
} // namespace android::net::http

