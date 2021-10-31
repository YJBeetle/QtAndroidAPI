#include "./UnicodeFilter.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	UnicodeFilter::UnicodeFilter(QJniObject obj) : __JniBaseClass(obj) {}
	
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
	jint UnicodeFilter::matches(__JniBaseClass arg0, jintArray arg1, jint arg2, jboolean arg3)
	{
		return callMethod<jint>(
			"matches",
			"(Landroid/icu/text/Replaceable;[IIZ)I",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::icu::text

