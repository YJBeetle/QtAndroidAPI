#include "./TextPaint.hpp"
#include "./PrecomputedText_Params.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	PrecomputedText_Params::PrecomputedText_Params(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean PrecomputedText_Params::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PrecomputedText_Params::getBreakStrategy()
	{
		return callMethod<jint>(
			"getBreakStrategy",
			"()I"
		);
	}
	jint PrecomputedText_Params::getHyphenationFrequency()
	{
		return callMethod<jint>(
			"getHyphenationFrequency",
			"()I"
		);
	}
	__JniBaseClass PrecomputedText_Params::getTextDirection()
	{
		return callObjectMethod(
			"getTextDirection",
			"()Landroid/text/TextDirectionHeuristic;"
		);
	}
	android::text::TextPaint PrecomputedText_Params::getTextPaint()
	{
		return callObjectMethod(
			"getTextPaint",
			"()Landroid/text/TextPaint;"
		);
	}
	jint PrecomputedText_Params::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PrecomputedText_Params::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::text

