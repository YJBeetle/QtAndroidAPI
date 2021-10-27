#pragma once

#ifndef JAVA_MATH_MATHCONTEXT
#define JAVA_MATH_MATHCONTEXT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::math
{
	class RoundingMode;
}

namespace __jni_impl::java::math
{
	class MathContext : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject DECIMAL128();
		static QAndroidJniObject DECIMAL32();
		static QAndroidJniObject DECIMAL64();
		static QAndroidJniObject UNLIMITED();
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jint arg0, __jni_impl::java::math::RoundingMode arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint getPrecision();
		QAndroidJniObject getRoundingMode();
		jint hashCode();
		jstring toString();
	};
} // namespace __jni_impl::java::math

#include "../io/ObjectInputStream.hpp"
#include "RoundingMode.hpp"

namespace __jni_impl::java::math
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
	
	// Constructors
	void MathContext::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.math.MathContext",
			"(I)V",
			arg0
		);
	}
	void MathContext::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.math.MathContext",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MathContext::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.math.MathContext",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void MathContext::__constructor(jint arg0, __jni_impl::java::math::RoundingMode arg1)
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
} // namespace __jni_impl::java::math

namespace java::math
{
	class MathContext : public __jni_impl::java::math::MathContext
	{
	public:
		MathContext(QAndroidJniObject obj) { __thiz = obj; }
		MathContext(jint arg0)
		{
			__constructor(
				arg0);
		}
		MathContext(jstring arg0)
		{
			__constructor(
				arg0);
		}
		MathContext(jint arg0, __jni_impl::java::math::RoundingMode arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::math

#endif // JAVA_MATH_MATHCONTEXT

