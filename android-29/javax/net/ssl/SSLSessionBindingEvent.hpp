#pragma once

#include "../../../JString.hpp"
#include "./SSLSessionBindingEvent.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	inline SSLSessionBindingEvent::SSLSessionBindingEvent(JObject arg0, JString arg1)
		: java::util::EventObject(
			"javax.net.ssl.SSLSessionBindingEvent",
			"(Ljavax/net/ssl/SSLSession;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline JString SSLSessionBindingEvent::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JObject SSLSessionBindingEvent::getSession() const
	{
		return callObjectMethod(
			"getSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
} // namespace javax::net::ssl

// Base class headers
#include "../../../java/util/EventObject.hpp"

