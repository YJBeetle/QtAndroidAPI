#include "../../../JIntArray.hpp"
#include "./UnicodeFilter.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	UnicodeFilter::UnicodeFilter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean UnicodeFilter::contains(jint arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(I)Z",
			arg0
		);
	}
	jint UnicodeFilter::matches(JObject arg0, JIntArray arg1, jint arg2, jboolean arg3) const
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

