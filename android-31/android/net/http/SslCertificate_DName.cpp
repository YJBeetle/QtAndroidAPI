#include "./SslCertificate.hpp"
#include "../../../JString.hpp"
#include "./SslCertificate_DName.hpp"

namespace android::net::http
{
	// Fields
	
	// QJniObject forward
	SslCertificate_DName::SslCertificate_DName(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SslCertificate_DName::SslCertificate_DName(android::net::http::SslCertificate arg0, JString arg1)
		: JObject(
			"android.net.http.SslCertificate$DName",
			"(Landroid/net/http/SslCertificate;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	JString SslCertificate_DName::getCName()
	{
		return callObjectMethod(
			"getCName",
			"()Ljava/lang/String;"
		);
	}
	JString SslCertificate_DName::getDName()
	{
		return callObjectMethod(
			"getDName",
			"()Ljava/lang/String;"
		);
	}
	JString SslCertificate_DName::getOName()
	{
		return callObjectMethod(
			"getOName",
			"()Ljava/lang/String;"
		);
	}
	JString SslCertificate_DName::getUName()
	{
		return callObjectMethod(
			"getUName",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net::http

