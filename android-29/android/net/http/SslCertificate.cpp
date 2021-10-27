#include "./SslCertificate_DName.hpp"
#include "../../os/Bundle.hpp"
#include "../../../java/security/cert/X509Certificate.hpp"
#include "../../../java/util/Date.hpp"
#include "./SslCertificate.hpp"

namespace android::net::http
{
	// Fields
	
	SslCertificate::SslCertificate(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SslCertificate::SslCertificate(java::security::cert::X509Certificate &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.SslCertificate",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.__jniObject().object()
		);
	}
	SslCertificate::SslCertificate(jstring &arg0, jstring &arg1, jstring &arg2, jstring &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.SslCertificate",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	SslCertificate::SslCertificate(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.SslCertificate",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	SslCertificate::SslCertificate(jstring &arg0, jstring &arg1, java::util::Date &arg2, java::util::Date &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.SslCertificate",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Date;Ljava/util/Date;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	SslCertificate::SslCertificate(const QString &arg0, const QString &arg1, java::util::Date &arg2, java::util::Date &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.SslCertificate",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Date;Ljava/util/Date;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject SslCertificate::restoreState(android::os::Bundle arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.http.SslCertificate",
			"restoreState",
			"(Landroid/os/Bundle;)Landroid/net/http/SslCertificate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SslCertificate::saveState(android::net::http::SslCertificate arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.http.SslCertificate",
			"saveState",
			"(Landroid/net/http/SslCertificate;)Landroid/os/Bundle;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SslCertificate::getIssuedBy()
	{
		return __thiz.callObjectMethod(
			"getIssuedBy",
			"()Landroid/net/http/SslCertificate$DName;"
		);
	}
	QAndroidJniObject SslCertificate::getIssuedTo()
	{
		return __thiz.callObjectMethod(
			"getIssuedTo",
			"()Landroid/net/http/SslCertificate$DName;"
		);
	}
	jstring SslCertificate::getValidNotAfter()
	{
		return __thiz.callObjectMethod(
			"getValidNotAfter",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SslCertificate::getValidNotAfterDate()
	{
		return __thiz.callObjectMethod(
			"getValidNotAfterDate",
			"()Ljava/util/Date;"
		);
	}
	jstring SslCertificate::getValidNotBefore()
	{
		return __thiz.callObjectMethod(
			"getValidNotBefore",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SslCertificate::getValidNotBeforeDate()
	{
		return __thiz.callObjectMethod(
			"getValidNotBeforeDate",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject SslCertificate::getX509Certificate()
	{
		return __thiz.callObjectMethod(
			"getX509Certificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	jstring SslCertificate::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net::http

