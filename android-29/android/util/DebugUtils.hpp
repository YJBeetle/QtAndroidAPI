#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class DebugUtils : public __JniBaseClass
	{
	public:
		// Fields
		
		DebugUtils(QAndroidJniObject obj);
		// Constructors
		DebugUtils() = default;
		
		// Methods
		static jboolean isObjectSelected(jobject arg0);
	};
} // namespace android::util

