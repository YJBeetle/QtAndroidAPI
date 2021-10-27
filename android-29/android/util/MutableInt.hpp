#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class MutableInt : public __JniBaseClass
	{
	public:
		// Fields
		jint value();
		
		MutableInt(QAndroidJniObject obj);
		// Constructors
		MutableInt(jint &arg0);
		MutableInt() = default;
		
		// Methods
	};
} // namespace android::util

