#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/util/EventObject.hpp"


namespace javax::net::ssl
{
	class SSLSessionBindingEvent : public java::util::EventObject
	{
	public:
		// Fields
		
		SSLSessionBindingEvent(QAndroidJniObject obj);
		// Constructors
		SSLSessionBindingEvent(__JniBaseClass &arg0, jstring &arg1);
		SSLSessionBindingEvent(__JniBaseClass &arg0, const QString &arg1);
		SSLSessionBindingEvent() = default;
		
		// Methods
		jstring getName();
		QAndroidJniObject getSession();
	};
} // namespace javax::net::ssl

