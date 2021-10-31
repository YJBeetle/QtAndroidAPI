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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CollationKey_BoundMode(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CollationKey_BoundMode(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::icu::text

