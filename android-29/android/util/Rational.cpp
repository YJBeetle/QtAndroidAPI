#include "./Rational.hpp"

namespace android::util
{
	// Fields
	QAndroidJniObject Rational::NEGATIVE_INFINITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Rational",
			"NEGATIVE_INFINITY",
			"Landroid/util/Rational;"
		);
	}
	QAndroidJniObject Rational::NaN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Rational",
			"NaN",
			"Landroid/util/Rational;"
		);
	}
	QAndroidJniObject Rational::POSITIVE_INFINITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Rational",
			"POSITIVE_INFINITY",
			"Landroid/util/Rational;"
		);
	}
	QAndroidJniObject Rational::ZERO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Rational",
			"ZERO",
			"Landroid/util/Rational;"
		);
	}
	
	Rational::Rational(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Rational::Rational(jint &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.Rational",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject Rational::parseRational(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Rational",
			"parseRational",
			"(Ljava/lang/String;)Landroid/util/Rational;",
			arg0
		);
	}
	QAndroidJniObject Rational::parseRational(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Rational",
			"parseRational",
			"(Ljava/lang/String;)Landroid/util/Rational;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint Rational::compareTo(android::util::Rational arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/util/Rational;)I",
			arg0.__jniObject().object()
		);
	}
	jint Rational::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jdouble Rational::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jboolean Rational::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat Rational::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint Rational::getDenominator()
	{
		return __thiz.callMethod<jint>(
			"getDenominator",
			"()I"
		);
	}
	jint Rational::getNumerator()
	{
		return __thiz.callMethod<jint>(
			"getNumerator",
			"()I"
		);
	}
	jint Rational::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Rational::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jboolean Rational::isFinite()
	{
		return __thiz.callMethod<jboolean>(
			"isFinite",
			"()Z"
		);
	}
	jboolean Rational::isInfinite()
	{
		return __thiz.callMethod<jboolean>(
			"isInfinite",
			"()Z"
		);
	}
	jboolean Rational::isNaN()
	{
		return __thiz.callMethod<jboolean>(
			"isNaN",
			"()Z"
		);
	}
	jboolean Rational::isZero()
	{
		return __thiz.callMethod<jboolean>(
			"isZero",
			"()Z"
		);
	}
	jlong Rational::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	jshort Rational::shortValue()
	{
		return __thiz.callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	jstring Rational::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::util

