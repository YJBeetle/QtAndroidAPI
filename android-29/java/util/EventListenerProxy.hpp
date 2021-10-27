#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class EventListenerProxy : public __JniBaseClass
	{
	public:
		// Fields
		
		EventListenerProxy(QAndroidJniObject obj);
		// Constructors
		EventListenerProxy(__JniBaseClass &arg0);
		EventListenerProxy() = default;
		
		// Methods
		QAndroidJniObject getListener();
	};
} // namespace java::util

