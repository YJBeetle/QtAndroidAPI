#include "../../JString.hpp"
#include "./InputFilter_LengthFilter.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	InputFilter_LengthFilter::InputFilter_LengthFilter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	InputFilter_LengthFilter::InputFilter_LengthFilter(jint arg0)
		: JObject(
			"android.text.InputFilter$LengthFilter",
			"(I)V",
			arg0
		) {}
	
	// Methods
	JString InputFilter_LengthFilter::filter(JString arg0, jint arg1, jint arg2, JObject arg3, jint arg4, jint arg5)
	{
		return callObjectMethod(
			"filter",
			"(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object(),
			arg4,
			arg5
		);
	}
	jint InputFilter_LengthFilter::getMax()
	{
		return callMethod<jint>(
			"getMax",
			"()I"
		);
	}
} // namespace android::text

