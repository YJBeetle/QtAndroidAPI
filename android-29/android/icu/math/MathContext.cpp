#include "./MathContext.hpp"

namespace android::icu::math
{
	// Fields
	QAndroidJniObject MathContext::DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.math.MathContext",
			"DEFAULT",
			"Landroid/icu/math/MathContext;"
		);
	}
	jint MathContext::ENGINEERING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.MathContext",
			"ENGINEERING"
		);
	}
	jint MathContext::PLAIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.MathContext",
			"PLAIN"
		);
	}
	jint MathContext::ROUND_CEILING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_CEILING"
		);
	}
	jint MathContext::ROUND_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_DOWN"
		);
	}
	jint MathContext::ROUND_FLOOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_FLOOR"
		);
	}
	jint MathContext::ROUND_HALF_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_HALF_DOWN"
		);
	}
	jint MathContext::ROUND_HALF_EVEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_HALF_EVEN"
		);
	}
	jint MathContext::ROUND_HALF_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_HALF_UP"
		);
	}
	jint MathContext::ROUND_UNNECESSARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_UNNECESSARY"
		);
	}
	jint MathContext::ROUND_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_UP"
		);
	}
	jint MathContext::SCIENTIFIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.MathContext",
			"SCIENTIFIC"
		);
	}
	
	MathContext::MathContext(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MathContext::MathContext(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.MathContext",
			"(I)V",
			arg0
		);
	}
	MathContext::MathContext(jint &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.MathContext",
			"(II)V",
			arg0,
			arg1
		);
	}
	MathContext::MathContext(jint &arg0, jint &arg1, jboolean &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.MathContext",
			"(IIZ)V",
			arg0,
			arg1,
			arg2
		);
	}
	MathContext::MathContext(jint &arg0, jint &arg1, jboolean &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.MathContext",
			"(IIZI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	jint MathContext::getDigits()
	{
		return __thiz.callMethod<jint>(
			"getDigits",
			"()I"
		);
	}
	jint MathContext::getForm()
	{
		return __thiz.callMethod<jint>(
			"getForm",
			"()I"
		);
	}
	jboolean MathContext::getLostDigits()
	{
		return __thiz.callMethod<jboolean>(
			"getLostDigits",
			"()Z"
		);
	}
	jint MathContext::getRoundingMode()
	{
		return __thiz.callMethod<jint>(
			"getRoundingMode",
			"()I"
		);
	}
	jstring MathContext::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::math

