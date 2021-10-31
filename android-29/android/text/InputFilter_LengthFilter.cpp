#include "./InputFilter_LengthFilter.hpp"

namespace android::text
{
	// Fields
	
	InputFilter_LengthFilter::InputFilter_LengthFilter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InputFilter_LengthFilter::InputFilter_LengthFilter(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.InputFilter$LengthFilter",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jstring InputFilter_LengthFilter::filter(jstring arg0, jint arg1, jint arg2, __JniBaseClass arg3, jint arg4, jint arg5)
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
	jint InputFilter_LengthFilter::getMax()
	{
		return __thiz.callMethod<jint>(
			"getMax",
			"()I"
		);
	}
} // namespace android::text

