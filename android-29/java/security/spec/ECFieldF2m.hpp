#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::math
{
	class BigInteger;
}

namespace __jni_impl::java::security::spec
{
	class ECFieldF2m : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(jint arg0, jintArray arg1);
		void __constructor(jint arg0, __jni_impl::java::math::BigInteger arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint getFieldSize();
		jint getM();
		jintArray getMidTermsOfReductionPolynomial();
		QAndroidJniObject getReductionPolynomial();
		jint hashCode();
	};
} // namespace __jni_impl::java::security::spec

#include "../../math/BigInteger.hpp"

namespace __jni_impl::java::security::spec
{
	// Fields
	
	// Constructors
	void ECFieldF2m::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.ECFieldF2m",
			"(I)V",
			arg0
		);
	}
	void ECFieldF2m::__constructor(jint arg0, jintArray arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.ECFieldF2m",
			"(I[I)V",
			arg0,
			arg1
		);
	}
	void ECFieldF2m::__constructor(jint arg0, __jni_impl::java::math::BigInteger arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.ECFieldF2m",
			"(ILjava/math/BigInteger;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jboolean ECFieldF2m::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ECFieldF2m::getFieldSize()
	{
		return __thiz.callMethod<jint>(
			"getFieldSize",
			"()I"
		);
	}
	jint ECFieldF2m::getM()
	{
		return __thiz.callMethod<jint>(
			"getM",
			"()I"
		);
	}
	jintArray ECFieldF2m::getMidTermsOfReductionPolynomial()
	{
		return __thiz.callObjectMethod(
			"getMidTermsOfReductionPolynomial",
			"()[I"
		).object<jintArray>();
	}
	QAndroidJniObject ECFieldF2m::getReductionPolynomial()
	{
		return __thiz.callObjectMethod(
			"getReductionPolynomial",
			"()Ljava/math/BigInteger;"
		);
	}
	jint ECFieldF2m::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class ECFieldF2m : public __jni_impl::java::security::spec::ECFieldF2m
	{
	public:
		ECFieldF2m(QAndroidJniObject obj) { __thiz = obj; }
		ECFieldF2m(jint arg0)
		{
			__constructor(
				arg0);
		}
		ECFieldF2m(jint arg0, jintArray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ECFieldF2m(jint arg0, __jni_impl::java::math::BigInteger arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security::spec

