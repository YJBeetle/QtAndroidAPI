#pragma once

#ifndef JAVAX_CRYPTO_SPEC_SECRETKEYSPEC
#define JAVAX_CRYPTO_SPEC_SECRETKEYSPEC

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::crypto::spec
{
	class SecretKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jbyteArray arg0, jstring arg1);
		void __constructor(jbyteArray arg0, jint arg1, jint arg2, jstring arg3);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jbyteArray getEncoded();
		jstring getFormat();
		jstring getAlgorithm();
	};
} // namespace __jni_impl::javax::crypto::spec


namespace __jni_impl::javax::crypto::spec
{
	// Fields
	
	// Constructors
	void SecretKeySpec::__constructor(jbyteArray arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.SecretKeySpec",
			"([BLjava/lang/String;)V",
			arg0,
			arg1);
	}
	void SecretKeySpec::__constructor(jbyteArray arg0, jint arg1, jint arg2, jstring arg3)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.SecretKeySpec",
			"([BIILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	
	// Methods
	jboolean SecretKeySpec::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint SecretKeySpec::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jbyteArray SecretKeySpec::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jstring SecretKeySpec::getFormat()
	{
		return __thiz.callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SecretKeySpec::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::javax::crypto::spec

namespace javax::crypto::spec
{
	class SecretKeySpec : public __jni_impl::javax::crypto::spec::SecretKeySpec
	{
	public:
		SecretKeySpec(QAndroidJniObject obj) { __thiz = obj; }
		SecretKeySpec(jbyteArray arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SecretKeySpec(jbyteArray arg0, jint arg1, jint arg2, jstring arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace javax::crypto::spec

#endif // JAVAX_CRYPTO_SPEC_SECRETKEYSPEC

