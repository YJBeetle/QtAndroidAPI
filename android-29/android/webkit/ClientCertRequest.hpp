#pragma once

#ifndef ANDROID_WEBKIT_CLIENTCERTREQUEST
#define ANDROID_WEBKIT_CLIENTCERTREQUEST

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::webkit
{
	class ClientCertRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getPrincipals();
		void ignore();
		QAndroidJniObject getHost();
		jint getPort();
		void cancel();
		void proceed(__jni_impl::__JniBaseClass arg0, jarray arg1);
		QAndroidJniObject getKeyTypes();
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void ClientCertRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.ClientCertRequest",
			"()V");
	}
	
	// Methods
	QAndroidJniObject ClientCertRequest::getPrincipals()
	{
		return __thiz.callObjectMethod(
			"getPrincipals",
			"()[Ljava/security/Principal;");
	}
	void ClientCertRequest::ignore()
	{
		__thiz.callMethod<void>(
			"ignore",
			"()V");
	}
	QAndroidJniObject ClientCertRequest::getHost()
	{
		return __thiz.callObjectMethod(
			"getHost",
			"()Ljava/lang/String;");
	}
	jint ClientCertRequest::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I");
	}
	void ClientCertRequest::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V");
	}
	void ClientCertRequest::proceed(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"proceed",
			"(Ljava/security/PrivateKey;[Ljava/security/cert/X509Certificate;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject ClientCertRequest::getKeyTypes()
	{
		return __thiz.callObjectMethod(
			"getKeyTypes",
			"()[Ljava/lang/String;");
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class ClientCertRequest : public __jni_impl::android::webkit::ClientCertRequest
	{
	public:
		ClientCertRequest(QAndroidJniObject obj) { __thiz = obj; }
		ClientCertRequest()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_CLIENTCERTREQUEST

