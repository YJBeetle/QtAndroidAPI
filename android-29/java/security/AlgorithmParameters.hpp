#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class AlgorithmParametersSpi;
}
namespace __jni_impl::java::security
{
	class Provider;
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
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(const QString &arg0, const QString &arg1);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1);
		jstring getAlgorithm();
		jbyteArray getEncoded();
		jbyteArray getEncoded(jstring arg0);
		jbyteArray getEncoded(const QString &arg0);
		QAndroidJniObject getParameterSpec(jclass arg0);
		QAndroidJniObject getProvider();
		void init(jbyteArray arg0);
		void init(__jni_impl::__JniBaseClass arg0);
		void init(jbyteArray arg0, jstring arg1);
		void init(jbyteArray arg0, const QString &arg1);
		jstring toString();
	};
} // namespace __jni_impl::java::security

#include "AlgorithmParametersSpi.hpp"
#include "Provider.hpp"

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
	QAndroidJniObject AlgorithmParameters::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AlgorithmParameters",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/AlgorithmParameters;",
			arg0
		);
	}
	QAndroidJniObject AlgorithmParameters::getInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AlgorithmParameters",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/AlgorithmParameters;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject AlgorithmParameters::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AlgorithmParameters",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/AlgorithmParameters;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject AlgorithmParameters::getInstance(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AlgorithmParameters",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/AlgorithmParameters;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject AlgorithmParameters::getInstance(jstring arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AlgorithmParameters",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/AlgorithmParameters;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AlgorithmParameters::getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AlgorithmParameters",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/AlgorithmParameters;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jstring AlgorithmParameters::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray AlgorithmParameters::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray AlgorithmParameters::getEncoded(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	jbyteArray AlgorithmParameters::getEncoded(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"(Ljava/lang/String;)[B",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jbyteArray>();
	}
	QAndroidJniObject AlgorithmParameters::getParameterSpec(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getParameterSpec",
			"(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;",
			arg0
		);
	}
	QAndroidJniObject AlgorithmParameters::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void AlgorithmParameters::init(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"([B)V",
			arg0
		);
	}
	void AlgorithmParameters::init(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.__jniObject().object()
		);
	}
	void AlgorithmParameters::init(jbyteArray arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"init",
			"([BLjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void AlgorithmParameters::init(jbyteArray arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"init",
			"([BLjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jstring AlgorithmParameters::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

