#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::text
{
	class UnicodeSet;
}

namespace android::icu::text
{
	class UnicodeSetIterator : public __JniBaseClass
	{
	public:
		// Fields
		static jint IS_STRING();
		jint codepoint();
		jint codepointEnd();
		jstring string();
		
		UnicodeSetIterator(QAndroidJniObject obj);
		// Constructors
		UnicodeSetIterator();
		UnicodeSetIterator(android::icu::text::UnicodeSet arg0);
		
		// Methods
		jstring getString();
		jboolean next();
		jboolean nextRange();
		void reset();
		void reset(android::icu::text::UnicodeSet arg0);
	};
} // namespace android::icu::text

