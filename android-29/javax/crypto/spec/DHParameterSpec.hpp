#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::math
{
	class BigInteger;
}

namespace __jni_impl::javax::crypto::spec
{
	class DHParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1);
		void __constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, jint arg2);
		
		// Methods
		QAndroidJniObject getG();
		jint getL();
		QAndroidJniObject getP();
	};
} // namespace __jni_impl::javax::crypto::spec

#include "../../../java/math/BigInteger.hpp"

namespace __jni_impl::javax::crypto::spec
{
	// Fields
	
	// Constructors
	void DHParameterSpec::__constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.DHParameterSpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DHParameterSpec::__constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.DHParameterSpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject DHParameterSpec::getG()
	{
		return __thiz.callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	jint DHParameterSpec::getL()
	{
		return __thiz.callMethod<jint>(
			"getL",
			"()I"
		);
	}
	QAndroidJniObject DHParameterSpec::getP()
	{
		return __thiz.callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace __jni_impl::javax::crypto::spec

namespace javax::crypto::spec
{
	class DHParameterSpec : public __jni_impl::javax::crypto::spec::DHParameterSpec
	{
	public:
		DHParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
		DHParameterSpec(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DHParameterSpec(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace javax::crypto::spec

