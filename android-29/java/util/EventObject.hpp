#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class EventObject : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EventObject(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EventObject(QAndroidJniObject obj);
		
		// Constructors
		EventObject(jobject arg0);
		
		// Methods
		jobject getSource();
		jstring toString();
	};
} // namespace java::util

