#include "../../../java/math/BigDecimal.hpp"
#include "./Scale.hpp"

namespace android::icu::number
{
	// Fields
	
	// QAndroidJniObject forward
	Scale::Scale(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::number::Scale Scale::byBigDecimal(java::math::BigDecimal arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.Scale",
			"byBigDecimal",
			"(Ljava/math/BigDecimal;)Landroid/icu/number/Scale;",
			arg0.object()
		);
	}
	android::icu::number::Scale Scale::byDouble(jdouble arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.Scale",
			"byDouble",
			"(D)Landroid/icu/number/Scale;",
			arg0
		);
	}
	android::icu::number::Scale Scale::byDoubleAndPowerOfTen(jdouble arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.number.Scale",
			"byDoubleAndPowerOfTen",
			"(DI)Landroid/icu/number/Scale;",
			arg0,
			arg1
		);
	}
	android::icu::number::Scale Scale::none()
	{
		return callStaticObjectMethod(
			"android.icu.number.Scale",
			"none",
			"()Landroid/icu/number/Scale;"
		);
	}
	android::icu::number::Scale Scale::powerOfTen(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.Scale",
			"powerOfTen",
			"(I)Landroid/icu/number/Scale;",
			arg0
		);
	}
} // namespace android::icu::number

