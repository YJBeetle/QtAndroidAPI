#include "../../../JString.hpp"
#include "./SSLSessionBindingEvent.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	SSLSessionBindingEvent::SSLSessionBindingEvent(JObject arg0, JString arg1)
		: java::util::EventObject(
			"javax.net.ssl.SSLSessionBindingEvent",
			"(Ljavax/net/ssl/SSLSession;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	JString SSLSessionBindingEvent::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JObject SSLSessionBindingEvent::getSession() const
	{
		return callObjectMethod(
			"getSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
} // namespace javax::net::ssl

