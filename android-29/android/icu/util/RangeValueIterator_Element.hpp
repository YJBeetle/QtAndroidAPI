#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::util
{
	class RangeValueIterator_Element : public __JniBaseClass
	{
	public:
		// Fields
		jint limit();
		jint start();
		jint value();
		
		RangeValueIterator_Element(QAndroidJniObject obj);
		// Constructors
		RangeValueIterator_Element();
		
		// Methods
	};
} // namespace android::icu::util

