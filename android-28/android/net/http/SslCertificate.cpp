#include "./SslCertificate_DName.hpp"
#include "../../os/Bundle.hpp"
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
	SslCertificate::SslCertificate(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
		: JObject(
			"android.net.http.SslCertificate",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	SslCertificate::SslCertificate(jstring arg0, jstring arg1, java::util::Date arg2, java::util::Date arg3)
		: JObject(
			"android.net.http.SslCertificate",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Date;Ljava/util/Date;)V",
			arg0,
			arg1,
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
	jstring SslCertificate::getValidNotAfter()
	{
		return callObjectMethod(
			"getValidNotAfter",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::util::Date SslCertificate::getValidNotAfterDate()
	{
		return callObjectMethod(
			"getValidNotAfterDate",
			"()Ljava/util/Date;"
		);
	}
	jstring SslCertificate::getValidNotBefore()
	{
		return callObjectMethod(
			"getValidNotBefore",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::util::Date SslCertificate::getValidNotBeforeDate()
	{
		return callObjectMethod(
			"getValidNotBeforeDate",
			"()Ljava/util/Date;"
		);
	}
	jstring SslCertificate::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net::http

