#include "../../../JString.hpp"
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
	
	// QJniObject forward
	UnicodeSet_EntryRange::UnicodeSet_EntryRange(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString UnicodeSet_EntryRange::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

