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
		jstring toString();
		jint hashCode();
		QAndroidJniObject getLocation();
		jarray getCertificates();
		jboolean implies(__jni_impl::java::security::CodeSource arg0);
		jarray getCodeSigners();
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
			arg1
		);
	}
	
	// Methods
	jboolean CodeSource::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring CodeSource::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CodeSource::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject CodeSource::getLocation()
	{
		return __thiz.callObjectMethod(
			"getLocation",
			"()Ljava/net/URL;"
		);
	}
	jarray CodeSource::getCertificates()
	{
		return __thiz.callObjectMethod(
			"getCertificates",
			"()[Ljava/security/cert/Certificate;"
		).object<jarray>();
	}
	jboolean CodeSource::implies(__jni_impl::java::security::CodeSource arg0)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/CodeSource;)Z",
			arg0.__jniObject().object()
		);
	}
	jarray CodeSource::getCodeSigners()
	{
		return __thiz.callObjectMethod(
			"getCodeSigners",
			"()[Ljava/security/CodeSigner;"
		).object<jarray>();
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

