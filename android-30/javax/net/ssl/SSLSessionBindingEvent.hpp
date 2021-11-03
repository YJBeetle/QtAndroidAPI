#pragma once

#include "../../../java/util/EventObject.hpp"

class JString;

namespace javax::net::ssl
{
	class SSLSessionBindingEvent : public java::util::EventObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLSessionBindingEvent(const char *className, const char *sig, Ts...agv) : java::util::EventObject(className, sig, std::forward<Ts>(agv)...) {}
		SSLSessionBindingEvent(QAndroidJniObject obj);
		
		// Constructors
		SSLSessionBindingEvent(JObject arg0, JString arg1);
		
		// Methods
		JString getName() const;
		JObject getSession() const;
	};
} // namespace javax::net::ssl

