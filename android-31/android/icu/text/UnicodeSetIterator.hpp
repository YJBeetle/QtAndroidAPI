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
		
		// QJniObject forward
		template<typename ...Ts> explicit UnicodeSetIterator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UnicodeSetIterator(QJniObject obj);
		
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

