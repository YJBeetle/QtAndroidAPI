#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::net::ssl
{
	class CertPathTrustManagerParameters : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		QAndroidJniObject getParameters();
	};
} // namespace __jni_impl::javax::net::ssl


namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void CertPathTrustManagerParameters::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.CertPathTrustManagerParameters",
			"(Ljava/security/cert/CertPathParameters;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject CertPathTrustManagerParameters::getParameters()
	{
		return __thiz.callObjectMethod(
			"getParameters",
			"()Ljava/security/cert/CertPathParameters;"
		);
	}
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class CertPathTrustManagerParameters : public __jni_impl::javax::net::ssl::CertPathTrustManagerParameters
	{
	public:
		CertPathTrustManagerParameters(QAndroidJniObject obj) { __thiz = obj; }
		CertPathTrustManagerParameters(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::net::ssl

