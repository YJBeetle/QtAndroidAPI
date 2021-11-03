#include "./MeasureUnit.hpp"
#include "../../../java/lang/Number.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Measure.hpp"

namespace android::icu::util
{
	// Fields
	
	// QJniObject forward
	Measure::Measure(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Measure::Measure(java::lang::Number arg0, android::icu::util::MeasureUnit arg1)
		: JObject(
			"android.icu.util.Measure",
			"(Ljava/lang/Number;Landroid/icu/util/MeasureUnit;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jboolean Measure::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::lang::Number Measure::getNumber()
	{
		return callObjectMethod(
			"getNumber",
			"()Ljava/lang/Number;"
		);
	}
	android::icu::util::MeasureUnit Measure::getUnit()
	{
		return callObjectMethod(
			"getUnit",
			"()Landroid/icu/util/MeasureUnit;"
		);
	}
	jint Measure::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString Measure::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::util

