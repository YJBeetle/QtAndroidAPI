#include "./MeasureUnit.hpp"
#include "../../../java/lang/Number.hpp"
#include "./Measure.hpp"

namespace android::icu::util
{
	// Fields
	
	Measure::Measure(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Measure::Measure(java::lang::Number &arg0, android::icu::util::MeasureUnit &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.Measure",
			"(Ljava/lang/Number;Landroid/icu/util/MeasureUnit;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jboolean Measure::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Measure::getNumber()
	{
		return __thiz.callObjectMethod(
			"getNumber",
			"()Ljava/lang/Number;"
		);
	}
	QAndroidJniObject Measure::getUnit()
	{
		return __thiz.callObjectMethod(
			"getUnit",
			"()Landroid/icu/util/MeasureUnit;"
		);
	}
	jint Measure::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Measure::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::util

