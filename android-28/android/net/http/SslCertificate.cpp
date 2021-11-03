#include "./SslCertificate_DName.hpp"
#include "../../os/Bundle.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/cert/X509Certificate.hpp"
#include "../../../java/util/Date.hpp"
#include "./SslCertificate.hpp"

namespace android::net::http
{
	// Fields
	
	// QJniObject forward
	SslCertificate::SslCertificate(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SslCertificate::SslCertificate(java::security::cert::X509Certificate arg0)
		: JObject(
			"android.net.http.SslCertificate",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.object()
		) {}
	SslCertificate::SslCertificate(JString arg0, JString arg1, JString arg2, JString arg3)
		: JObject(
			"android.net.http.SslCertificate",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		) {}
	SslCertificate::SslCertificate(JString arg0, JString arg1, java::util::Date arg2, java::util::Date arg3)
		: JObject(
			"android.net.http.SslCertificate",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Date;Ljava/util/Date;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	android::net::http::SslCertificate SslCertificate::restoreState(android::os::Bundle arg0)
	{
		return callStaticObjectMethod(
			"android.net.http.SslCertificate",
			"restoreState",
			"(Landroid/os/Bundle;)Landroid/net/http/SslCertificate;",
			arg0.object()
		);
	}
	android::os::Bundle SslCertificate::saveState(android::net::http::SslCertificate arg0)
	{
		return callStaticObjectMethod(
			"android.net.http.SslCertificate",
			"saveState",
			"(Landroid/net/http/SslCertificate;)Landroid/os/Bundle;",
			arg0.object()
		);
	}
	android::net::http::SslCertificate_DName SslCertificate::getIssuedBy()
	{
		return callObjectMethod(
			"getIssuedBy",
			"()Landroid/net/http/SslCertificate$DName;"
		);
	}
	android::net::http::SslCertificate_DName SslCertificate::getIssuedTo()
	{
		return callObjectMethod(
			"getIssuedTo",
			"()Landroid/net/http/SslCertificate$DName;"
		);
	}
	JString SslCertificate::getValidNotAfter()
	{
		return callObjectMethod(
			"getValidNotAfter",
			"()Ljava/lang/String;"
		);
	}
	java::util::Date SslCertificate::getValidNotAfterDate()
	{
		return callObjectMethod(
			"getValidNotAfterDate",
			"()Ljava/util/Date;"
		);
	}
	JString SslCertificate::getValidNotBefore()
	{
		return callObjectMethod(
			"getValidNotBefore",
			"()Ljava/lang/String;"
		);
	}
	java::util::Date SslCertificate::getValidNotBeforeDate()
	{
		return callObjectMethod(
			"getValidNotBeforeDate",
			"()Ljava/util/Date;"
		);
	}
	JString SslCertificate::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net::http

