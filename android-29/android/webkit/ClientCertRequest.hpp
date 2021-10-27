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
		void cancel();
		jstring getHost();
		jarray getKeyTypes();
		jint getPort();
		jarray getPrincipals();
		void ignore();
		void proceed(__jni_impl::__JniBaseClass arg0, jarray arg1);
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
	void ClientCertRequest::proceed(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"proceed",
			"(Ljava/security/PrivateKey;[Ljava/security/cert/X509Certificate;)V",
			arg0.__jniObject().object(),
			arg1
		);
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

