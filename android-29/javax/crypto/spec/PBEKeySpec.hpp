#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::crypto::spec
{
	class PBEKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jcharArray arg0);
		void __constructor(jcharArray arg0, jbyteArray arg1, jint arg2);
		void __constructor(jcharArray arg0, jbyteArray arg1, jint arg2, jint arg3);
		
		// Methods
		void clearPassword();
		jint getIterationCount();
		jint getKeyLength();
		jcharArray getPassword();
		jbyteArray getSalt();
	};
} // namespace __jni_impl::javax::crypto::spec


namespace __jni_impl::javax::crypto::spec
{
	// Fields
	
	// Constructors
	void PBEKeySpec::__constructor(jcharArray arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.PBEKeySpec",
			"([C)V",
			arg0
		);
	}
	void PBEKeySpec::__constructor(jcharArray arg0, jbyteArray arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.PBEKeySpec",
			"([C[BI)V",
			arg0,
			arg1,
			arg2
		);
	}
	void PBEKeySpec::__constructor(jcharArray arg0, jbyteArray arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.PBEKeySpec",
			"([C[BII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	void PBEKeySpec::clearPassword()
	{
		__thiz.callMethod<void>(
			"clearPassword",
			"()V"
		);
	}
	jint PBEKeySpec::getIterationCount()
	{
		return __thiz.callMethod<jint>(
			"getIterationCount",
			"()I"
		);
	}
	jint PBEKeySpec::getKeyLength()
	{
		return __thiz.callMethod<jint>(
			"getKeyLength",
			"()I"
		);
	}
	jcharArray PBEKeySpec::getPassword()
	{
		return __thiz.callObjectMethod(
			"getPassword",
			"()[C"
		).object<jcharArray>();
	}
	jbyteArray PBEKeySpec::getSalt()
	{
		return __thiz.callObjectMethod(
			"getSalt",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace __jni_impl::javax::crypto::spec

namespace javax::crypto::spec
{
	class PBEKeySpec : public __jni_impl::javax::crypto::spec::PBEKeySpec
	{
	public:
		PBEKeySpec(QAndroidJniObject obj) { __thiz = obj; }
		PBEKeySpec(jcharArray arg0)
		{
			__constructor(
				arg0);
		}
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
	};
} // namespace javax::crypto::spec

