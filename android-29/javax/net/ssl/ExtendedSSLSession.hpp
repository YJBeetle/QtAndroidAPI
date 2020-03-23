#pragma once

#ifndef JAVAX_NET_SSL_EXTENDEDSSLSESSION
#define JAVAX_NET_SSL_EXTENDEDSSLSESSION

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::net::ssl
{
	class ExtendedSSLSession : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getLocalSupportedSignatureAlgorithms();
		QAndroidJniObject getPeerSupportedSignatureAlgorithms();
		QAndroidJniObject getRequestedServerNames();
		QAndroidJniObject getStatusResponses();
	};
} // namespace __jni_impl::javax::net::ssl


namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void ExtendedSSLSession::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.ExtendedSSLSession",
			"()V");
	}
	
	// Methods
	QAndroidJniObject ExtendedSSLSession::getLocalSupportedSignatureAlgorithms()
	{
		return __thiz.callObjectMethod(
			"getLocalSupportedSignatureAlgorithms",
			"()[Ljava/lang/String;");
	}
	QAndroidJniObject ExtendedSSLSession::getPeerSupportedSignatureAlgorithms()
	{
		return __thiz.callObjectMethod(
			"getPeerSupportedSignatureAlgorithms",
			"()[Ljava/lang/String;");
	}
	QAndroidJniObject ExtendedSSLSession::getRequestedServerNames()
	{
		return __thiz.callObjectMethod(
			"getRequestedServerNames",
			"()Ljava/util/List;");
	}
	QAndroidJniObject ExtendedSSLSession::getStatusResponses()
	{
		return __thiz.callObjectMethod(
			"getStatusResponses",
			"()Ljava/util/List;");
	}
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class ExtendedSSLSession : public __jni_impl::javax::net::ssl::ExtendedSSLSession
	{
	public:
		ExtendedSSLSession(QAndroidJniObject obj) { __thiz = obj; }
		ExtendedSSLSession()
		{
			__constructor();
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_EXTENDEDSSLSESSION

