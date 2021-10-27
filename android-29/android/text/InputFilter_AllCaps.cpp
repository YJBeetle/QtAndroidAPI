#include "../../java/util/Locale.hpp"
#include "./InputFilter_AllCaps.hpp"

namespace android::text
{
	// Fields
	
	InputFilter_AllCaps::InputFilter_AllCaps(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InputFilter_AllCaps::InputFilter_AllCaps()
	{
		__thiz = QAndroidJniObject(
			"android.text.InputFilter$AllCaps",
			"()V"
		);
	}
	InputFilter_AllCaps::InputFilter_AllCaps(java::util::Locale &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.InputFilter$AllCaps",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jstring InputFilter_AllCaps::filter(jstring arg0, jint arg1, jint arg2, __JniBaseClass arg3, jint arg4, jint arg5)
	{
		return __thiz.callObjectMethod(
			"filter",
			"(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5
		).object<jstring>();
	}
	jstring InputFilter_AllCaps::filter(const QString &arg0, jint arg1, jint arg2, __JniBaseClass arg3, jint arg4, jint arg5)
	{
		return __thiz.callObjectMethod(
			"filter",
			"(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5
		).object<jstring>();
	}
} // namespace android::text

