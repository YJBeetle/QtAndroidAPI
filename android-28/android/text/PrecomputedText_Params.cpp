#include "./TextPaint.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PrecomputedText_Params.hpp"

namespace android::text
{
	// Fields
	
	// QJniObject forward
	PrecomputedText_Params::PrecomputedText_Params(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean PrecomputedText_Params::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
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
	JObject PrecomputedText_Params::getTextDirection()
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
	JString PrecomputedText_Params::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::text

