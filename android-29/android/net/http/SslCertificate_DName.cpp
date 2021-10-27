#include "./SslCertificate.hpp"
#include "./SslCertificate_DName.hpp"

namespace android::net::http
{
	// Fields
	
	SslCertificate_DName::SslCertificate_DName(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SslCertificate_DName::SslCertificate_DName(android::net::http::SslCertificate &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.SslCertificate$DName",
			"(Landroid/net/http/SslCertificate;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	SslCertificate_DName::SslCertificate_DName(android::net::http::SslCertificate &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.SslCertificate$DName",
			"(Landroid/net/http/SslCertificate;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jstring SslCertificate_DName::getCName()
	{
		return __thiz.callObjectMethod(
			"getCName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SslCertificate_DName::getDName()
	{
		return __thiz.callObjectMethod(
			"getDName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SslCertificate_DName::getOName()
	{
		return __thiz.callObjectMethod(
			"getOName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SslCertificate_DName::getUName()
	{
		return __thiz.callObjectMethod(
			"getUName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net::http

