#pragma once

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
		QAndroidJniObject getCertificates();
		jbyteArray getEncoded();
		jbyteArray getEncoded(jstring arg0);
		jbyteArray getEncoded(const QString &arg0);
		QAndroidJniObject getEncodings();
		jstring getType();
		jint hashCode();
		jstring toString();
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
			arg0
		);
	}
	QAndroidJniObject CertPath::getCertificates()
	{
		return __thiz.callObjectMethod(
			"getCertificates",
			"()Ljava/util/List;"
		);
	}
	jbyteArray CertPath::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray CertPath::getEncoded(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	jbyteArray CertPath::getEncoded(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"(Ljava/lang/String;)[B",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jbyteArray>();
	}
	QAndroidJniObject CertPath::getEncodings()
	{
		return __thiz.callObjectMethod(
			"getEncodings",
			"()Ljava/util/Iterator;"
		);
	}
	jstring CertPath::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CertPath::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CertPath::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

