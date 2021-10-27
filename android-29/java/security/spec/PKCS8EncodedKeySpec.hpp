#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./EncodedKeySpec.hpp"


namespace __jni_impl::java::security::spec
{
	class PKCS8EncodedKeySpec : public __jni_impl::java::security::spec::EncodedKeySpec
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jbyteArray arg0);
		void __constructor(jbyteArray arg0, jstring arg1);
		void __constructor(jbyteArray arg0, const QString &arg1);
		
		// Methods
		jbyteArray getEncoded();
		jstring getFormat();
	};
} // namespace __jni_impl::java::security::spec


namespace __jni_impl::java::security::spec
{
	// Fields
	
	// Constructors
	void PKCS8EncodedKeySpec::__constructor(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.PKCS8EncodedKeySpec",
			"([B)V",
			arg0
		);
	}
	void PKCS8EncodedKeySpec::__constructor(jbyteArray arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.PKCS8EncodedKeySpec",
			"([BLjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void PKCS8EncodedKeySpec::__constructor(jbyteArray arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.PKCS8EncodedKeySpec",
			"([BLjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jbyteArray PKCS8EncodedKeySpec::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jstring PKCS8EncodedKeySpec::getFormat()
	{
		return __thiz.callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class PKCS8EncodedKeySpec : public __jni_impl::java::security::spec::PKCS8EncodedKeySpec
	{
	public:
		PKCS8EncodedKeySpec(QAndroidJniObject obj) { __thiz = obj; }
		PKCS8EncodedKeySpec(jbyteArray arg0)
		{
			__constructor(
				arg0);
		}
		PKCS8EncodedKeySpec(jbyteArray arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security::spec

