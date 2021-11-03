#pragma once

#include "../../../JObject.hpp"
#include "../../../java/util/EventObject.hpp"


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
		SSLSessionBindingEvent(JObject arg0, jstring arg1);
		
		// Methods
		jstring getName();
		JObject getSession();
	};
} // namespace javax::net::ssl

