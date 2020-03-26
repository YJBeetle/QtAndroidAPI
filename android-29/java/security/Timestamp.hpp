#pragma once

#ifndef JAVA_SECURITY_TIMESTAMP
#define JAVA_SECURITY_TIMESTAMP

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::java::security::cert
{
	class CertPath;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}

namespace __jni_impl::java::security
{
	class Timestamp : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::util::Date arg0, __jni_impl::java::security::cert::CertPath arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		QAndroidJniObject getSignerCertPath();
		QAndroidJniObject getTimestamp();
	};
} // namespace __jni_impl::java::security

#include "../util/Date.hpp"
#include "cert/CertPath.hpp"
#include "../io/ObjectInputStream.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void Timestamp::__constructor(__jni_impl::java::util::Date arg0, __jni_impl::java::security::cert::CertPath arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.Timestamp",
			"(Ljava/util/Date;Ljava/security/cert/CertPath;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	jboolean Timestamp::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Timestamp::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Timestamp::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject Timestamp::getSignerCertPath()
	{
		return __thiz.callObjectMethod(
			"getSignerCertPath",
			"()Ljava/security/cert/CertPath;"
		);
	}
	QAndroidJniObject Timestamp::getTimestamp()
	{
		return __thiz.callObjectMethod(
			"getTimestamp",
			"()Ljava/util/Date;"
		);
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class Timestamp : public __jni_impl::java::security::Timestamp
	{
	public:
		Timestamp(QAndroidJniObject obj) { __thiz = obj; }
		Timestamp(__jni_impl::java::util::Date arg0, __jni_impl::java::security::cert::CertPath arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_TIMESTAMP

