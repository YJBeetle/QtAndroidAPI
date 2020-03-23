#pragma once

#ifndef JAVA_SECURITY_CODESOURCE
#define JAVA_SECURITY_CODESOURCE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class URL;
}
namespace __jni_impl::java::net
{
	class SocketPermission;
}
namespace __jni_impl::java::security::cert
{
	class CertificateFactory;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}

namespace __jni_impl::java::security
{
	class CodeSource : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::net::URL arg0, jarray arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject getLocation();
		QAndroidJniObject getCertificates();
		jboolean implies(__jni_impl::java::security::CodeSource arg0);
		QAndroidJniObject getCodeSigners();
	};
} // namespace __jni_impl::java::security

#include "../net/URL.hpp"
#include "../net/SocketPermission.hpp"
#include "cert/CertificateFactory.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void CodeSource::__constructor(__jni_impl::java::net::URL arg0, jarray arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.CodeSource",
			"(Ljava/net/URL;[Ljava/security/cert/Certificate;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	jboolean CodeSource::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject CodeSource::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint CodeSource::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject CodeSource::getLocation()
	{
		return __thiz.callObjectMethod(
			"getLocation",
			"()Ljava/net/URL;");
	}
	QAndroidJniObject CodeSource::getCertificates()
	{
		return __thiz.callObjectMethod(
			"getCertificates",
			"()[Ljava/security/cert/Certificate;");
	}
	jboolean CodeSource::implies(__jni_impl::java::security::CodeSource arg0)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/CodeSource;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject CodeSource::getCodeSigners()
	{
		return __thiz.callObjectMethod(
			"getCodeSigners",
			"()[Ljava/security/CodeSigner;");
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class CodeSource : public __jni_impl::java::security::CodeSource
	{
	public:
		CodeSource(QAndroidJniObject obj) { __thiz = obj; }
		CodeSource(__jni_impl::java::net::URL arg0, jarray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_CODESOURCE

