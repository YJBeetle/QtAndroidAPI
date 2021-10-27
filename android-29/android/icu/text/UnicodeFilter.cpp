#include "./UnicodeFilter.hpp"

namespace android::icu::text
{
	// Fields
	
	UnicodeFilter::UnicodeFilter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean UnicodeFilter::contains(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(I)Z",
			arg0
		);
	}
	jint UnicodeFilter::matches(__JniBaseClass arg0, jintArray arg1, jint arg2, jboolean arg3)
	{
		return __thiz.callMethod<jint>(
			"matches",
			"(Landroid/icu/text/Replaceable;[IIZ)I",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::icu::text

