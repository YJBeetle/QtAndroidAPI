#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::lang
{
	class UCharacterDirection : public __JniBaseClass
	{
	public:
		// Fields
		
		UCharacterDirection(QAndroidJniObject obj);
		// Constructors
		UCharacterDirection() = default;
		
		// Methods
		static jstring toString(jint arg0);
	};
} // namespace android::icu::lang

