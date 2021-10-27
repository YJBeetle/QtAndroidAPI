#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::lang
{
	class UCharacterCategory : public __JniBaseClass
	{
	public:
		// Fields
		
		UCharacterCategory(QAndroidJniObject obj);
		// Constructors
		UCharacterCategory() = default;
		
		// Methods
		static jstring toString(jint arg0);
	};
} // namespace android::icu::lang

