#include "./MeasureUnit.hpp"
#include "../../../java/lang/Number.hpp"
#include "./Measure.hpp"

namespace android::icu::util
{
	// Fields
	
	// QAndroidJniObject forward
	Measure::Measure(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Measure::Measure(java::lang::Number arg0, android::icu::util::MeasureUnit arg1)
		: JObject(
			"android.icu.util.Measure",
			"(Ljava/lang/Number;Landroid/icu/util/MeasureUnit;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jboolean Measure::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
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
	jstring Measure::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::util

