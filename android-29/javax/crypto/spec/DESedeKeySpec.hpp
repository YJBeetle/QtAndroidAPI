#pragma once

#ifndef JAVAX_CRYPTO_SPEC_DESEDEKEYSPEC
#define JAVAX_CRYPTO_SPEC_DESEDEKEYSPEC

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::crypto::spec
{
	class DESedeKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		static jint DES_EDE_KEY_LEN();
		
		// Constructors
		void __constructor(jbyteArray arg0);
		void __constructor(jbyteArray arg0, jint arg1);
		
		// Methods
		QAndroidJniObject getKey();
		static jboolean isParityAdjusted(jbyteArray arg0, jint arg1);
	};
} // namespace __jni_impl::javax::crypto::spec


namespace __jni_impl::javax::crypto::spec
{
	// Fields
	jint DESedeKeySpec::DES_EDE_KEY_LEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.crypto.spec.DESedeKeySpec",
			"DES_EDE_KEY_LEN");
	}
	
	// Constructors
	void DESedeKeySpec::__constructor(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.DESedeKeySpec",
			"([B)V",
			arg0);
	}
	void DESedeKeySpec::__constructor(jbyteArray arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.DESedeKeySpec",
			"([BI)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject DESedeKeySpec::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()[B");
	}
	jboolean DESedeKeySpec::isParityAdjusted(jbyteArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"javax.crypto.spec.DESedeKeySpec",
			"isParityAdjusted",
			"([BI)Z",
			arg0,
			arg1);
	}
} // namespace __jni_impl::javax::crypto::spec

namespace javax::crypto::spec
{
	class DESedeKeySpec : public __jni_impl::javax::crypto::spec::DESedeKeySpec
	{
	public:
		DESedeKeySpec(QAndroidJniObject obj) { __thiz = obj; }
		DESedeKeySpec(jbyteArray arg0)
		{
			__constructor(
				arg0);
		}
		DESedeKeySpec(jbyteArray arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace javax::crypto::spec

#endif // JAVAX_CRYPTO_SPEC_DESEDEKEYSPEC

