#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::text
{
	class Annotation : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Annotation(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Annotation(QAndroidJniObject obj);
		
		// Constructors
		Annotation(jobject arg0);
		
		// Methods
		jobject getValue();
		jstring toString();
	};
} // namespace java::text

