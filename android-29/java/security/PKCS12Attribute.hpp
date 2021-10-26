#pragma once

#ifndef JAVA_SECURITY_PKCS12ATTRIBUTE
#define JAVA_SECURITY_PKCS12ATTRIBUTE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::regex
{
	class Pattern;
}

namespace __jni_impl::java::security
{
	class PKCS12Attribute : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		void __constructor(jbyteArray arg0);
		
		// Methods
		jstring getName();
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jstring getValue();
		jbyteArray getEncoded();
	};
} // namespace __jni_impl::java::security

#include "../util/regex/Pattern.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void PKCS12Attribute::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.PKCS12Attribute",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void PKCS12Attribute::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.PKCS12Attribute",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void PKCS12Attribute::__constructor(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.PKCS12Attribute",
			"([B)V",
			arg0
		);
	}
	
	// Methods
	jstring PKCS12Attribute::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean PKCS12Attribute::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring PKCS12Attribute::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PKCS12Attribute::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PKCS12Attribute::getValue()
	{
		return __thiz.callObjectMethod(
			"getValue",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray PKCS12Attribute::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class PKCS12Attribute : public __jni_impl::java::security::PKCS12Attribute
	{
	public:
		PKCS12Attribute(QAndroidJniObject obj) { __thiz = obj; }
		PKCS12Attribute(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PKCS12Attribute(jbyteArray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_PKCS12ATTRIBUTE

