#include "../../../JIntArray.hpp"
#include "./UnicodeFilter.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	UnicodeFilter::UnicodeFilter(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean UnicodeFilter::contains(jint arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(I)Z",
			arg0
		);
	}
	jint UnicodeFilter::matches(JObject arg0, JIntArray arg1, jint arg2, jboolean arg3)
	{
		return callMethod<jint>(
			"matches",
			"(Landroid/icu/text/Replaceable;[IIZ)I",
			arg0.object(),
			arg1.object<jintArray>(),
			arg2,
			arg3
		);
	}
} // namespace android::icu::text

