#include "../../../java/security/cert/X509Certificate.hpp"
#include "./X509TrustManagerExtensions.hpp"

namespace android::net::http
{
	// Fields
	
	// QAndroidJniObject forward
	X509TrustManagerExtensions::X509TrustManagerExtensions(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	X509TrustManagerExtensions::X509TrustManagerExtensions(__JniBaseClass arg0)
		: __JniBaseClass(
			"android.net.http.X509TrustManagerExtensions",
			"(Ljavax/net/ssl/X509TrustManager;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject X509TrustManagerExtensions::checkServerTrusted(jarray arg0, jstring arg1, jstring arg2)
	{
		return callObjectMethod(
			"checkServerTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean X509TrustManagerExtensions::isSameTrustConfiguration(jstring arg0, jstring arg1)
	{
		return callMethod<jboolean>(
			"isSameTrustConfiguration",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	jboolean X509TrustManagerExtensions::isUserAddedCertificate(java::security::cert::X509Certificate arg0)
	{
		return callMethod<jboolean>(
			"isUserAddedCertificate",
			"(Ljava/security/cert/X509Certificate;)Z",
			arg0.object()
		);
	}
} // namespace android::net::http

