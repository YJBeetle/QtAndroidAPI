#include "./InputFilter_LengthFilter.hpp"

namespace android::text
{
	// Fields
	
	// QJniObject forward
	InputFilter_LengthFilter::InputFilter_LengthFilter(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	InputFilter_LengthFilter::InputFilter_LengthFilter(jint arg0)
		: JObject(
			"android.text.InputFilter$LengthFilter",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jstring InputFilter_LengthFilter::filter(jstring arg0, jint arg1, jint arg2, JObject arg3, jint arg4, jint arg5)
	{
		return callObjectMethod(
			"filter",
			"(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4,
			arg5
		).object<jstring>();
	}
	jint InputFilter_LengthFilter::getMax()
	{
		return callMethod<jint>(
			"getMax",
			"()I"
		);
	}
} // namespace android::text

