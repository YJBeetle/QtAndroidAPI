#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::util
{
	class ValueIterator_Element : public __JniBaseClass
	{
	public:
		// Fields
		jint integer();
		jobject value();
		
		ValueIterator_Element(QAndroidJniObject obj);
		// Constructors
		ValueIterator_Element();
		
		// Methods
	};
} // namespace android::icu::util

