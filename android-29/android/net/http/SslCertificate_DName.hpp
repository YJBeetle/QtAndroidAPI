#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net::http
{
	class SslCertificate;
}

namespace android::net::http
{
	class SslCertificate_DName : public __JniBaseClass
	{
	public:
		// Fields
		
		SslCertificate_DName(QAndroidJniObject obj);
		// Constructors
		SslCertificate_DName(android::net::http::SslCertificate &arg0, jstring &arg1);
		SslCertificate_DName(android::net::http::SslCertificate &arg0, const QString &arg1);
		SslCertificate_DName() = default;
		
		// Methods
		jstring getCName();
		jstring getDName();
		jstring getOName();
		jstring getUName();
	};
} // namespace android::net::http

