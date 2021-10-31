#include "./UnicodeSet_EntryRange.hpp"

namespace android::icu::text
{
	// Fields
	jint UnicodeSet_EntryRange::codepoint()
	{
		return getField<jint>(
			"codepoint"
		);
	}
	jint UnicodeSet_EntryRange::codepointEnd()
	{
		return getField<jint>(
			"codepointEnd"
		);
	}
	
	// QAndroidJniObject forward
	UnicodeSet_EntryRange::UnicodeSet_EntryRange(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring UnicodeSet_EntryRange::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text

