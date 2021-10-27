#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::text
{
	class UnicodeSet_EntryRange : public __JniBaseClass
	{
	public:
		// Fields
		jint codepoint();
		jint codepointEnd();
		
		UnicodeSet_EntryRange(QAndroidJniObject obj);
		// Constructors
		UnicodeSet_EntryRange() = default;
		
		// Methods
		jstring toString();
	};
} // namespace android::icu::text

