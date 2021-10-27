#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::text
{
	class CollationKey_BoundMode : public __JniBaseClass
	{
	public:
		// Fields
		static jint LOWER();
		static jint UPPER();
		static jint UPPER_LONG();
		
		CollationKey_BoundMode(QAndroidJniObject obj);
		// Constructors
		CollationKey_BoundMode() = default;
		
		// Methods
	};
} // namespace android::icu::text

