#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::text
{
	class Annotation : public __JniBaseClass
	{
	public:
		// Fields
		
		Annotation(QAndroidJniObject obj);
		// Constructors
		Annotation(jobject arg0);
		Annotation() = default;
		
		// Methods
		jobject getValue();
		jstring toString();
	};
} // namespace java::text

