#pragma once

#ifndef JAVA_SECURITY_CERT_CERTPATH
#define JAVA_SECURITY_CERT_CERTPATH

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::security::cert
{
	class CertPath : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject getCertificates();
		QAndroidJniObject getType();
		QAndroidJniObject getEncoded(jstring arg0);
		QAndroidJniObject getEncoded();
		QAndroidJniObject getEncodings();
	};
} // namespace __jni_impl::java::security::cert


namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void CertPath::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPath",
			"(V)V");
	}
	
	// Methods
	jboolean CertPath::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject CertPath::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint CertPath::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject CertPath::getCertificates()
	{
		return __thiz.callObjectMethod(
			"getCertificates",
			"()Ljava/util/List;");
	}
	QAndroidJniObject CertPath::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject CertPath::getEncoded(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"(Ljava/lang/String;)[B",
			arg0);
	}
	QAndroidJniObject CertPath::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B");
	}
	QAndroidJniObject CertPath::getEncodings()
	{
		return __thiz.callObjectMethod(
			"getEncodings",
			"()Ljava/util/Iterator;");
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CertPath : public __jni_impl::java::security::cert::CertPath
	{
	public:
		CertPath(QAndroidJniObject obj) { __thiz = obj; }
		CertPath()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_CERTPATH

