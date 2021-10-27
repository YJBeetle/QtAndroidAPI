#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::text
{
	class UnicodeFilter : public __JniBaseClass
	{
	public:
		// Fields
		
		UnicodeFilter(QAndroidJniObject obj);
		// Constructors
		UnicodeFilter() = default;
		
		// Methods
		jboolean contains(jint arg0);
		jint matches(__JniBaseClass arg0, jintArray arg1, jint arg2, jboolean arg3);
	};
} // namespace android::icu::text

