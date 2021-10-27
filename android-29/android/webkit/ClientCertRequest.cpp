#include "./ClientCertRequest.hpp"

namespace android::webkit
{
	// Fields
	
	ClientCertRequest::ClientCertRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ClientCertRequest::ClientCertRequest()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.ClientCertRequest",
			"()V"
		);
	}
	
	// Methods
	void ClientCertRequest::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jstring ClientCertRequest::getHost()
	{
		return __thiz.callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray ClientCertRequest::getKeyTypes()
	{
		return __thiz.callObjectMethod(
			"getKeyTypes",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint ClientCertRequest::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jarray ClientCertRequest::getPrincipals()
	{
		return __thiz.callObjectMethod(
			"getPrincipals",
			"()[Ljava/security/Principal;"
		).object<jarray>();
	}
	void ClientCertRequest::ignore()
	{
		__thiz.callMethod<void>(
			"ignore",
			"()V"
		);
	}
	void ClientCertRequest::proceed(__JniBaseClass arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"proceed",
			"(Ljava/security/PrivateKey;[Ljava/security/cert/X509Certificate;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::webkit

