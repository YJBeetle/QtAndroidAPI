#include "../../../java/security/cert/X509Certificate.hpp"
#include "./X509TrustManagerExtensions.hpp"

namespace android::net::http
{
	// Fields
	
	X509TrustManagerExtensions::X509TrustManagerExtensions(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	X509TrustManagerExtensions::X509TrustManagerExtensions(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.http.X509TrustManagerExtensions",
			"(Ljavax/net/ssl/X509TrustManager;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject X509TrustManagerExtensions::checkServerTrusted(jarray arg0, jstring arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"checkServerTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject X509TrustManagerExtensions::checkServerTrusted(jarray arg0, const QString &arg1, const QString &arg2)
	{
		return __thiz.callObjectMethod(
			"checkServerTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	jboolean X509TrustManagerExtensions::isSameTrustConfiguration(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isSameTrustConfiguration",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	jboolean X509TrustManagerExtensions::isSameTrustConfiguration(const QString &arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isSameTrustConfiguration",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean X509TrustManagerExtensions::isUserAddedCertificate(java::security::cert::X509Certificate arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isUserAddedCertificate",
			"(Ljava/security/cert/X509Certificate;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::net::http

