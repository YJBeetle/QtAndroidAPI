#include "./UnicodeSet_EntryRange.hpp"

namespace android::icu::text
{
	// Fields
	jint UnicodeSet_EntryRange::codepoint()
	{
		return __thiz.getField<jint>(
			"codepoint"
		);
	}
	jint UnicodeSet_EntryRange::codepointEnd()
	{
		return __thiz.getField<jint>(
			"codepointEnd"
		);
	}
	
	UnicodeSet_EntryRange::UnicodeSet_EntryRange(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring UnicodeSet_EntryRange::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text

