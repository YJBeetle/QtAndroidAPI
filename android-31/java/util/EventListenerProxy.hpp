#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class EventListenerProxy : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EventListenerProxy(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EventListenerProxy(QJniObject obj);
		
		// Constructors
		EventListenerProxy(__JniBaseClass arg0);
		
		// Methods
		__JniBaseClass getListener();
	};
} // namespace java::util

