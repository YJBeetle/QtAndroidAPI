#include "./SSLSessionBindingEvent.hpp"

namespace javax::net::ssl
{
	// Fields
	
	SSLSessionBindingEvent::SSLSessionBindingEvent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SSLSessionBindingEvent::SSLSessionBindingEvent(__JniBaseClass arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLSessionBindingEvent",
			"(Ljavax/net/ssl/SSLSession;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
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
} // namespace javax::net::ssl

