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
		
		// QJniObject forward
		template<typename ...Ts> explicit UnicodeSet_EntryRange(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UnicodeSet_EntryRange(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring toString();
	};
} // namespace android::icu::text

