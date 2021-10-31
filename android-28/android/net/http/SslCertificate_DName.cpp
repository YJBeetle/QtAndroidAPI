#include "./SslCertificate.hpp"
#include "./SslCertificate_DName.hpp"

namespace android::net::http
{
	// Fields
	
	// QJniObject forward
	SslCertificate_DName::SslCertificate_DName(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SslCertificate_DName::SslCertificate_DName(android::net::http::SslCertificate arg0, jstring arg1)
		: __JniBaseClass(
			"android.net.http.SslCertificate$DName",
			"(Landroid/net/http/SslCertificate;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jstring SslCertificate_DName::getCName()
	{
		return callObjectMethod(
			"getCName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SslCertificate_DName::getDName()
	{
		return callObjectMethod(
			"getDName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SslCertificate_DName::getOName()
	{
		return callObjectMethod(
			"getOName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SslCertificate_DName::getUName()
	{
		return callObjectMethod(
			"getUName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net::http

