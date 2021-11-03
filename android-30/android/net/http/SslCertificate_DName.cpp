#include "./SslCertificate.hpp"
#include "../../../JString.hpp"
#include "./SslCertificate_DName.hpp"

namespace android::net::http
{
	// Fields
	
	// QAndroidJniObject forward
	SslCertificate_DName::SslCertificate_DName(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SslCertificate_DName::SslCertificate_DName(android::net::http::SslCertificate arg0, JString arg1)
		: JObject(
			"android.net.http.SslCertificate$DName",
			"(Landroid/net/http/SslCertificate;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	JString SslCertificate_DName::getCName() const
	{
		return callObjectMethod(
			"getCName",
			"()Ljava/lang/String;"
		);
	}
	JString SslCertificate_DName::getDName() const
	{
		return callObjectMethod(
			"getDName",
			"()Ljava/lang/String;"
		);
	}
	JString SslCertificate_DName::getOName() const
	{
		return callObjectMethod(
			"getOName",
			"()Ljava/lang/String;"
		);
	}
	JString SslCertificate_DName::getUName() const
	{
		return callObjectMethod(
			"getUName",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net::http

