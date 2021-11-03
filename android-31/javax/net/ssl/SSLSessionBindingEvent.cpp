#include "./SSLSessionBindingEvent.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	SSLSessionBindingEvent::SSLSessionBindingEvent(QAndroidJniObject obj) : java::util::EventObject(obj) {}
	
	// Constructors
	SSLSessionBindingEvent::SSLSessionBindingEvent(JObject arg0, jstring arg1)
		: java::util::EventObject(
			"javax.net.ssl.SSLSessionBindingEvent",
			"(Ljavax/net/ssl/SSLSession;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jstring SSLSessionBindingEvent::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	JObject SSLSessionBindingEvent::getSession()
	{
		return callObjectMethod(
			"getSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
} // namespace javax::net::ssl

