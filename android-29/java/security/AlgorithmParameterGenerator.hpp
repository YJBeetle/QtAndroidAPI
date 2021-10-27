#pragma once

#ifndef JAVA_SECURITY_ALGORITHMPARAMETERGENERATOR
#define JAVA_SECURITY_ALGORITHMPARAMETERGENERATOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class AlgorithmParameterGeneratorSpi;
}
namespace __jni_impl::java::security
{
	class AlgorithmParameters;
}
namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::java::security
{
	class SecureRandom;
}

namespace __jni_impl::java::security
{
	class AlgorithmParameterGenerator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(const QString &arg0, const QString &arg1);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1);
		QAndroidJniObject generateParameters();
		jstring getAlgorithm();
		QAndroidJniObject getProvider();
		void init(jint arg0);
		void init(__jni_impl::__JniBaseClass arg0);
		void init(jint arg0, __jni_impl::java::security::SecureRandom arg1);
		void init(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::SecureRandom arg1);
	};
} // namespace __jni_impl::java::security

#include "AlgorithmParameterGeneratorSpi.hpp"
#include "AlgorithmParameters.hpp"
#include "Provider.hpp"
#include "SecureRandom.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void AlgorithmParameterGenerator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.AlgorithmParameterGenerator",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AlgorithmParameterGenerator::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AlgorithmParameterGenerator",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/AlgorithmParameterGenerator;",
			arg0
		);
	}
	QAndroidJniObject AlgorithmParameterGenerator::getInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AlgorithmParameterGenerator",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/AlgorithmParameterGenerator;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject AlgorithmParameterGenerator::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AlgorithmParameterGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/AlgorithmParameterGenerator;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject AlgorithmParameterGenerator::getInstance(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AlgorithmParameterGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/AlgorithmParameterGenerator;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject AlgorithmParameterGenerator::getInstance(jstring arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AlgorithmParameterGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/AlgorithmParameterGenerator;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AlgorithmParameterGenerator::getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AlgorithmParameterGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/AlgorithmParameterGenerator;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AlgorithmParameterGenerator::generateParameters()
	{
		return __thiz.callObjectMethod(
			"generateParameters",
			"()Ljava/security/AlgorithmParameters;"
		);
	}
	jstring AlgorithmParameterGenerator::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject AlgorithmParameterGenerator::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void AlgorithmParameterGenerator::init(jint arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"(I)V",
			arg0
		);
	}
	void AlgorithmParameterGenerator::init(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.__jniObject().object()
		);
	}
	void AlgorithmParameterGenerator::init(jint arg0, __jni_impl::java::security::SecureRandom arg1)
	{
		__thiz.callMethod<void>(
			"init",
			"(ILjava/security/SecureRandom;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AlgorithmParameterGenerator::init(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::SecureRandom arg1)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class AlgorithmParameterGenerator : public __jni_impl::java::security::AlgorithmParameterGenerator
	{
	public:
		AlgorithmParameterGenerator(QAndroidJniObject obj) { __thiz = obj; }
		AlgorithmParameterGenerator()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_ALGORITHMPARAMETERGENERATOR

