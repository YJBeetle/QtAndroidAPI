#pragma once

#ifndef JAVA_SECURITY_ALGORITHMPARAMETERS
#define JAVA_SECURITY_ALGORITHMPARAMETERS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::java::security
{
	class AlgorithmParametersSpi;
}

namespace __jni_impl::java::security
{
	class AlgorithmParameters : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(jstring arg0);
		void init(jbyteArray arg0);
		void init(jbyteArray arg0, jstring arg1);
		void init(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getEncoded();
		QAndroidJniObject getEncoded(jstring arg0);
		QAndroidJniObject getProvider();
		QAndroidJniObject getAlgorithm();
		QAndroidJniObject getParameterSpec(jclass arg0);
	};
} // namespace __jni_impl::java::security

#include "Provider.hpp"
#include "AlgorithmParametersSpi.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void AlgorithmParameters::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.AlgorithmParameters",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AlgorithmParameters::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject AlgorithmParameters::getInstance(jstring arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AlgorithmParameters",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/AlgorithmParameters;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject AlgorithmParameters::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AlgorithmParameters",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/AlgorithmParameters;",
			arg0,
			arg1);
	}
	QAndroidJniObject AlgorithmParameters::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AlgorithmParameters",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/AlgorithmParameters;",
			arg0);
	}
	void AlgorithmParameters::init(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"([B)V",
			arg0);
	}
	void AlgorithmParameters::init(jbyteArray arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"init",
			"([BLjava/lang/String;)V",
			arg0,
			arg1);
	}
	void AlgorithmParameters::init(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AlgorithmParameters::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B");
	}
	QAndroidJniObject AlgorithmParameters::getEncoded(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"(Ljava/lang/String;)[B",
			arg0);
	}
	QAndroidJniObject AlgorithmParameters::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;");
	}
	QAndroidJniObject AlgorithmParameters::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject AlgorithmParameters::getParameterSpec(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getParameterSpec",
			"(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;",
			arg0);
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class AlgorithmParameters : public __jni_impl::java::security::AlgorithmParameters
	{
	public:
		AlgorithmParameters(QAndroidJniObject obj) { __thiz = obj; }
		AlgorithmParameters()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_ALGORITHMPARAMETERS

