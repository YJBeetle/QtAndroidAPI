#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class EventObject : public __JniBaseClass
	{
	public:
		// Fields
		
		EventObject(QAndroidJniObject obj);
		// Constructors
		EventObject(jobject arg0);
		EventObject() = default;
		
		// Methods
		jobject getSource();
		jstring toString();
	};
} // namespace java::util

