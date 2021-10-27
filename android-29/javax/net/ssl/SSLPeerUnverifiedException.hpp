#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/io/IOException.hpp"
#include "SSLException.hpp"


namespace __jni_impl::javax::net::ssl
{
	class SSLPeerUnverifiedException : public __jni_impl::javax::net::ssl::SSLException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::javax::net::ssl


namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void SSLPeerUnverifiedException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLPeerUnverifiedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SSLPeerUnverifiedException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLPeerUnverifiedException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SSLPeerUnverifiedException : public __jni_impl::javax::net::ssl::SSLPeerUnverifiedException
	{
	public:
		SSLPeerUnverifiedException(QAndroidJniObject obj) { __thiz = obj; }
		SSLPeerUnverifiedException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::net::ssl

