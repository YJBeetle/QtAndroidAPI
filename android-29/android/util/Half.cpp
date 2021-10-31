#include "./Half.hpp"

namespace android::util
{
	// Fields
	jshort Half::EPSILON()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.util.Half",
			"EPSILON"
		);
	}
	jshort Half::LOWEST_VALUE()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.util.Half",
			"LOWEST_VALUE"
		);
	}
	jint Half::MAX_EXPONENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.Half",
			"MAX_EXPONENT"
		);
	}
	jshort Half::MAX_VALUE()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.util.Half",
			"MAX_VALUE"
		);
	}
	jint Half::MIN_EXPONENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.Half",
			"MIN_EXPONENT"
		);
	}
	jshort Half::MIN_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.util.Half",
			"MIN_NORMAL"
		);
	}
	jshort Half::MIN_VALUE()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.util.Half",
			"MIN_VALUE"
		);
	}
	jshort Half::NEGATIVE_INFINITY()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.util.Half",
			"NEGATIVE_INFINITY"
		);
	}
	jshort Half::NEGATIVE_ZERO()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.util.Half",
			"NEGATIVE_ZERO"
		);
	}
	jshort Half::NaN()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.util.Half",
			"NaN"
		);
	}
	jshort Half::POSITIVE_INFINITY()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.util.Half",
			"POSITIVE_INFINITY"
		);
	}
	jshort Half::POSITIVE_ZERO()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.util.Half",
			"POSITIVE_ZERO"
		);
	}
	jint Half::SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.Half",
			"SIZE"
		);
	}
	
	Half::Half(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Half::Half(jdouble arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.Half",
			"(D)V",
			arg0
		);
	}
	Half::Half(jfloat arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.Half",
			"(F)V",
			arg0
		);
	}
	Half::Half(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.Half",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	Half::Half(jshort arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.Half",
			"(S)V",
			arg0
		);
	}
	
	// Methods
	jshort Half::abs(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"abs",
			"(S)S",
			arg0
		);
	}
	jshort Half::ceil(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"ceil",
			"(S)S",
			arg0
		);
	}
	jint Half::compare(jshort arg0, jshort arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Half",
			"compare",
			"(SS)I",
			arg0,
			arg1
		);
	}
	jshort Half::copySign(jshort arg0, jshort arg1)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"copySign",
			"(SS)S",
			arg0,
			arg1
		);
	}
	jboolean Half::equals(jshort arg0, jshort arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.Half",
			"equals",
			"(SS)Z",
			arg0,
			arg1
		);
	}
	jshort Half::floor(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"floor",
			"(S)S",
			arg0
		);
	}
	jint Half::getExponent(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Half",
			"getExponent",
			"(S)I",
			arg0
		);
	}
	jint Half::getSign(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Half",
			"getSign",
			"(S)I",
			arg0
		);
	}
	jint Half::getSignificand(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Half",
			"getSignificand",
			"(S)I",
			arg0
		);
	}
	jboolean Half::greater(jshort arg0, jshort arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.Half",
			"greater",
			"(SS)Z",
			arg0,
			arg1
		);
	}
	jboolean Half::greaterEquals(jshort arg0, jshort arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.Half",
			"greaterEquals",
			"(SS)Z",
			arg0,
			arg1
		);
	}
	jint Half::halfToIntBits(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Half",
			"halfToIntBits",
			"(S)I",
			arg0
		);
	}
	jint Half::halfToRawIntBits(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Half",
			"halfToRawIntBits",
			"(S)I",
			arg0
		);
	}
	jshort Half::halfToShortBits(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"halfToShortBits",
			"(S)S",
			arg0
		);
	}
	jint Half::hashCode(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Half",
			"hashCode",
			"(S)I",
			arg0
		);
	}
	jshort Half::intBitsToHalf(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"intBitsToHalf",
			"(I)S",
			arg0
		);
	}
	jboolean Half::isInfinite(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.Half",
			"isInfinite",
			"(S)Z",
			arg0
		);
	}
	jboolean Half::isNaN(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.Half",
			"isNaN",
			"(S)Z",
			arg0
		);
	}
	jboolean Half::isNormalized(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.Half",
			"isNormalized",
			"(S)Z",
			arg0
		);
	}
	jboolean Half::less(jshort arg0, jshort arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.Half",
			"less",
			"(SS)Z",
			arg0,
			arg1
		);
	}
	jboolean Half::lessEquals(jshort arg0, jshort arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.Half",
			"lessEquals",
			"(SS)Z",
			arg0,
			arg1
		);
	}
	jshort Half::max(jshort arg0, jshort arg1)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"max",
			"(SS)S",
			arg0,
			arg1
		);
	}
	jshort Half::min(jshort arg0, jshort arg1)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"min",
			"(SS)S",
			arg0,
			arg1
		);
	}
	jshort Half::parseHalf(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"parseHalf",
			"(Ljava/lang/String;)S",
			arg0
		);
	}
	jshort Half::round(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"round",
			"(S)S",
			arg0
		);
	}
	jfloat Half::toFloat(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.util.Half",
			"toFloat",
			"(S)F",
			arg0
		);
	}
	jshort Half::toHalf(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"toHalf",
			"(F)S",
			arg0
		);
	}
	jstring Half::toHexString(jshort arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Half",
			"toHexString",
			"(S)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Half::toString(jshort arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Half",
			"toString",
			"(S)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jshort Half::trunc(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"trunc",
			"(S)S",
			arg0
		);
	}
	QAndroidJniObject Half::valueOf(jfloat arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Half",
			"valueOf",
			"(F)Landroid/util/Half;",
			arg0
		);
	}
	QAndroidJniObject Half::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Half",
			"valueOf",
			"(Ljava/lang/String;)Landroid/util/Half;",
			arg0
		);
	}
	QAndroidJniObject Half::valueOf(jshort arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Half",
			"valueOf",
			"(S)Landroid/util/Half;",
			arg0
		);
	}
	jbyte Half::byteValue()
	{
		return __thiz.callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	jint Half::compareTo(android::util::Half arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/util/Half;)I",
			arg0.__jniObject().object()
		);
	}
	jint Half::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jdouble Half::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jboolean Half::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat Half::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jshort Half::halfValue()
	{
		return __thiz.callMethod<jshort>(
			"halfValue",
			"()S"
		);
	}
	jint Half::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Half::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jboolean Half::isNaN()
	{
		return __thiz.callMethod<jboolean>(
			"isNaN",
			"()Z"
		);
	}
	jlong Half::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	jshort Half::shortValue()
	{
		return __thiz.callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	jstring Half::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::util

