#pragma once

#ifndef JAVAX_CRYPTO_SPEC_DHPUBLICKEYSPEC
#define JAVAX_CRYPTO_SPEC_DHPUBLICKEYSPEC

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::math
{
	class BigInteger;
}

namespace __jni_impl::javax::crypto::spec
{
	class DHPublicKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2);
		
		// Methods
		QAndroidJniObject getP();
		QAndroidJniObject getG();
		QAndroidJniObject getY();
	};
} // namespace __jni_impl::javax::crypto::spec

#include "../../../java/math/BigInteger.hpp"

namespace __jni_impl::javax::crypto::spec
{
	// Fields
	
	// Constructors
	void DHPublicKeySpec::__constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.DHPublicKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject DHPublicKeySpec::getP()
	{
		return __thiz.callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DHPublicKeySpec::getG()
	{
		return __thiz.callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DHPublicKeySpec::getY()
	{
		return __thiz.callObjectMethod(
			"getY",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace __jni_impl::javax::crypto::spec

namespace javax::crypto::spec
{
	class DHPublicKeySpec : public __jni_impl::javax::crypto::spec::DHPublicKeySpec
	{
	public:
		DHPublicKeySpec(QAndroidJniObject obj) { __thiz = obj; }
		DHPublicKeySpec(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace javax::crypto::spec

#endif // JAVAX_CRYPTO_SPEC_DHPUBLICKEYSPEC

