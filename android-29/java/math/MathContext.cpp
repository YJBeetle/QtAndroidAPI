#include "../io/ObjectInputStream.hpp"
#include "./RoundingMode.hpp"
#include "./MathContext.hpp"

namespace java::math
{
	// Fields
	QAndroidJniObject MathContext::DECIMAL128()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.math.MathContext",
			"DECIMAL128",
			"Ljava/math/MathContext;"
		);
	}
	QAndroidJniObject MathContext::DECIMAL32()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.math.MathContext",
			"DECIMAL32",
			"Ljava/math/MathContext;"
		);
	}
	QAndroidJniObject MathContext::DECIMAL64()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.math.MathContext",
			"DECIMAL64",
			"Ljava/math/MathContext;"
		);
	}
	QAndroidJniObject MathContext::UNLIMITED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.math.MathContext",
			"UNLIMITED",
			"Ljava/math/MathContext;"
		);
	}
	
	MathContext::MathContext(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MathContext::MathContext(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.math.MathContext",
			"(I)V",
			arg0
		);
	}
	MathContext::MathContext(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.math.MathContext",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	MathContext::MathContext(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.math.MathContext",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	MathContext::MathContext(jint &arg0, java::math::RoundingMode &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.math.MathContext",
			"(ILjava/math/RoundingMode;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jboolean MathContext::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint MathContext::getPrecision()
	{
		return __thiz.callMethod<jint>(
			"getPrecision",
			"()I"
		);
	}
	QAndroidJniObject MathContext::getRoundingMode()
	{
		return __thiz.callObjectMethod(
			"getRoundingMode",
			"()Ljava/math/RoundingMode;"
		);
	}
	jint MathContext::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
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
} // namespace java::math

