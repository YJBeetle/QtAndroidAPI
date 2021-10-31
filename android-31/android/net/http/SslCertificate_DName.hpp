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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SslCertificate_DName(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SslCertificate_DName(QAndroidJniObject obj);
		
		// Constructors
		SslCertificate_DName(android::net::http::SslCertificate arg0, jstring arg1);
		
		// Methods
		jstring getCName();
		jstring getDName();
		jstring getOName();
		jstring getUName();
	};
} // namespace android::net::http

