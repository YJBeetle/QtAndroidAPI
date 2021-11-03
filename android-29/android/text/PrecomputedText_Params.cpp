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
	jboolean PrecomputedText_Params::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint PrecomputedText_Params::getBreakStrategy() const
	{
		return callMethod<jint>(
			"getBreakStrategy",
			"()I"
		);
	}
	jint PrecomputedText_Params::getHyphenationFrequency() const
	{
		return callMethod<jint>(
			"getHyphenationFrequency",
			"()I"
		);
	}
	JObject PrecomputedText_Params::getTextDirection() const
	{
		return callObjectMethod(
			"getTextDirection",
			"()Landroid/text/TextDirectionHeuristic;"
		);
	}
	android::text::TextPaint PrecomputedText_Params::getTextPaint() const
	{
		return callObjectMethod(
			"getTextPaint",
			"()Landroid/text/TextPaint;"
		);
	}
	jint PrecomputedText_Params::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString PrecomputedText_Params::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::text

