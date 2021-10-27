#pragma once

#ifndef JAVAX_CRYPTO_SPEC_DHPRIVATEKEYSPEC
#define JAVAX_CRYPTO_SPEC_DHPRIVATEKEYSPEC

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::math
{
	class BigInteger;
}

namespace __jni_impl::javax::crypto::spec
{
	class DHPrivateKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2);
		
		// Methods
		QAndroidJniObject getG();
		QAndroidJniObject getP();
		QAndroidJniObject getX();
	};
} // namespace __jni_impl::javax::crypto::spec

#include "../../../java/math/BigInteger.hpp"

namespace __jni_impl::javax::crypto::spec
{
	// Fields
	
	// Constructors
	void DHPrivateKeySpec::__constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.DHPrivateKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject DHPrivateKeySpec::getG()
	{
		return __thiz.callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DHPrivateKeySpec::getP()
	{
		return __thiz.callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DHPrivateKeySpec::getX()
	{
		return __thiz.callObjectMethod(
			"getX",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace __jni_impl::javax::crypto::spec

namespace javax::crypto::spec
{
	class DHPrivateKeySpec : public __jni_impl::javax::crypto::spec::DHPrivateKeySpec
	{
	public:
		DHPrivateKeySpec(QAndroidJniObject obj) { __thiz = obj; }
		DHPrivateKeySpec(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace javax::crypto::spec

#endif // JAVAX_CRYPTO_SPEC_DHPRIVATEKEYSPEC

