#include "../../JString.hpp"
#include "../../java/util/Locale.hpp"
#include "./InputFilter_AllCaps.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	InputFilter_AllCaps::InputFilter_AllCaps(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	InputFilter_AllCaps::InputFilter_AllCaps()
		: JObject(
			"android.text.InputFilter$AllCaps",
			"()V"
		) {}
	InputFilter_AllCaps::InputFilter_AllCaps(java::util::Locale arg0)
		: JObject(
			"android.text.InputFilter$AllCaps",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	JString InputFilter_AllCaps::filter(JString arg0, jint arg1, jint arg2, JObject arg3, jint arg4, jint arg5)
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
} // namespace android::text

