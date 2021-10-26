#pragma once

#ifndef JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT
#define JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT

#include "../../../__JniBaseClass.hpp"
#include "../../../java/util/EventObject.hpp"


namespace __jni_impl::javax::net::ssl
{
	class SSLSessionBindingEvent : public __jni_impl::java::util::EventObject
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0, jstring arg1);
		void __constructor(__jni_impl::__JniBaseClass arg0, const QString &arg1);
		
		// Methods
		jstring getName();
		QAndroidJniObject getSession();
	};
} // namespace __jni_impl::javax::net::ssl


namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void SSLSessionBindingEvent::__constructor(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLSessionBindingEvent",
			"(Ljavax/net/ssl/SSLSession;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void SSLSessionBindingEvent::__constructor(__jni_impl::__JniBaseClass arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLSessionBindingEvent",
			"(Ljavax/net/ssl/SSLSession;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jstring SSLSessionBindingEvent::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SSLSessionBindingEvent::getSession()
	{
		return __thiz.callObjectMethod(
			"getSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SSLSessionBindingEvent : public __jni_impl::javax::net::ssl::SSLSessionBindingEvent
	{
	public:
		SSLSessionBindingEvent(QAndroidJniObject obj) { __thiz = obj; }
		SSLSessionBindingEvent(__jni_impl::__JniBaseClass arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT

