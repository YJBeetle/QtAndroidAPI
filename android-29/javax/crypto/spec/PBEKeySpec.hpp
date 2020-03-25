#pragma once

#ifndef JAVAX_CRYPTO_SPEC_PBEKEYSPEC
#define JAVAX_CRYPTO_SPEC_PBEKEYSPEC

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::crypto::spec
{
	class PBEKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jcharArray arg0, jbyteArray arg1, jint arg2);
		void __constructor(jcharArray arg0, jbyteArray arg1, jint arg2, jint arg3);
		void __constructor(jcharArray arg0);
		
		// Methods
		QAndroidJniObject getSalt();
		jint getIterationCount();
		jint getKeyLength();
		QAndroidJniObject getPassword();
		void clearPassword();
	};
} // namespace __jni_impl::javax::crypto::spec


namespace __jni_impl::javax::crypto::spec
{
	// Fields
	
	// Constructors
	void PBEKeySpec::__constructor(jcharArray arg0, jbyteArray arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.PBEKeySpec",
			"([C[BI)V",
			arg0,
			arg1,
			arg2);
	}
	void PBEKeySpec::__constructor(jcharArray arg0, jbyteArray arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.PBEKeySpec",
			"([C[BII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void PBEKeySpec::__constructor(jcharArray arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.PBEKeySpec",
			"([C)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject PBEKeySpec::getSalt()
	{
		return __thiz.callObjectMethod(
			"getSalt",
			"()[B");
	}
	jint PBEKeySpec::getIterationCount()
	{
		return __thiz.callMethod<jint>(
			"getIterationCount",
			"()I");
	}
	jint PBEKeySpec::getKeyLength()
	{
		return __thiz.callMethod<jint>(
			"getKeyLength",
			"()I");
	}
	QAndroidJniObject PBEKeySpec::getPassword()
	{
		return __thiz.callObjectMethod(
			"getPassword",
			"()[C");
	}
	void PBEKeySpec::clearPassword()
	{
		__thiz.callMethod<void>(
			"clearPassword",
			"()V");
	}
} // namespace __jni_impl::javax::crypto::spec

namespace javax::crypto::spec
{
	class PBEKeySpec : public __jni_impl::javax::crypto::spec::PBEKeySpec
	{
	public:
		PBEKeySpec(QAndroidJniObject obj) { __thiz = obj; }
		PBEKeySpec(jcharArray arg0, jbyteArray arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		PBEKeySpec(jcharArray arg0, jbyteArray arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		PBEKeySpec(jcharArray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::crypto::spec

#endif // JAVAX_CRYPTO_SPEC_PBEKEYSPEC

