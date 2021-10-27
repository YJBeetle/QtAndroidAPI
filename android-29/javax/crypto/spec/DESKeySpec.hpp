#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::crypto::spec
{
	class DESKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		static jint DES_KEY_LEN();
		
		// Constructors
		void __constructor(jbyteArray arg0);
		void __constructor(jbyteArray arg0, jint arg1);
		
		// Methods
		static jboolean isParityAdjusted(jbyteArray arg0, jint arg1);
		static jboolean isWeak(jbyteArray arg0, jint arg1);
		jbyteArray getKey();
	};
} // namespace __jni_impl::javax::crypto::spec


namespace __jni_impl::javax::crypto::spec
{
	// Fields
	jint DESKeySpec::DES_KEY_LEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.crypto.spec.DESKeySpec",
			"DES_KEY_LEN"
		);
	}
	
	// Constructors
	void DESKeySpec::__constructor(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.DESKeySpec",
			"([B)V",
			arg0
		);
	}
	void DESKeySpec::__constructor(jbyteArray arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.DESKeySpec",
			"([BI)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean DESKeySpec::isParityAdjusted(jbyteArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"javax.crypto.spec.DESKeySpec",
			"isParityAdjusted",
			"([BI)Z",
			arg0,
			arg1
		);
	}
	jboolean DESKeySpec::isWeak(jbyteArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"javax.crypto.spec.DESKeySpec",
			"isWeak",
			"([BI)Z",
			arg0,
			arg1
		);
	}
	jbyteArray DESKeySpec::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace __jni_impl::javax::crypto::spec

namespace javax::crypto::spec
{
	class DESKeySpec : public __jni_impl::javax::crypto::spec::DESKeySpec
	{
	public:
		DESKeySpec(QAndroidJniObject obj) { __thiz = obj; }
		DESKeySpec(jbyteArray arg0)
		{
			__constructor(
				arg0);
		}
		DESKeySpec(jbyteArray arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace javax::crypto::spec

