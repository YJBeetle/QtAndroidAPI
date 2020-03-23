#pragma once

#ifndef JAVA_SECURITY_SPEC_MGF1PARAMETERSPEC
#define JAVA_SECURITY_SPEC_MGF1PARAMETERSPEC

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::security::spec
{
	class MGF1ParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject SHA1();
		static QAndroidJniObject SHA224();
		static QAndroidJniObject SHA256();
		static QAndroidJniObject SHA384();
		static QAndroidJniObject SHA512();
		static QAndroidJniObject SHA512_224();
		static QAndroidJniObject SHA512_256();
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
		QAndroidJniObject getDigestAlgorithm();
	};
} // namespace __jni_impl::java::security::spec


namespace __jni_impl::java::security::spec
{
	// Fields
	QAndroidJniObject MGF1ParameterSpec::SHA1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA1",
			"Ljava/security/spec/MGF1ParameterSpec;");
	}
	QAndroidJniObject MGF1ParameterSpec::SHA224()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA224",
			"Ljava/security/spec/MGF1ParameterSpec;");
	}
	QAndroidJniObject MGF1ParameterSpec::SHA256()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA256",
			"Ljava/security/spec/MGF1ParameterSpec;");
	}
	QAndroidJniObject MGF1ParameterSpec::SHA384()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA384",
			"Ljava/security/spec/MGF1ParameterSpec;");
	}
	QAndroidJniObject MGF1ParameterSpec::SHA512()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA512",
			"Ljava/security/spec/MGF1ParameterSpec;");
	}
	QAndroidJniObject MGF1ParameterSpec::SHA512_224()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA512_224",
			"Ljava/security/spec/MGF1ParameterSpec;");
	}
	QAndroidJniObject MGF1ParameterSpec::SHA512_256()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA512_256",
			"Ljava/security/spec/MGF1ParameterSpec;");
	}
	
	// Constructors
	void MGF1ParameterSpec::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.MGF1ParameterSpec",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject MGF1ParameterSpec::getDigestAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getDigestAlgorithm",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class MGF1ParameterSpec : public __jni_impl::java::security::spec::MGF1ParameterSpec
	{
	public:
		MGF1ParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
		MGF1ParameterSpec(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security::spec

#endif // JAVA_SECURITY_SPEC_MGF1PARAMETERSPEC

