#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../net/SocketPermission.hpp"
#include "../net/URL.hpp"
#include "./cert/CertificateFactory.hpp"
#include "./CodeSource.hpp"

namespace java::security
{
	// Fields
	
	CodeSource::CodeSource(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CodeSource::CodeSource(java::net::URL arg0, jarray arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.CodeSource",
			"(Ljava/net/URL;[Ljava/security/CodeSigner;)V",
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
	jarray CodeSource::getCertificates()
	{
		return __thiz.callObjectMethod(
			"getCertificates",
			"()[Ljava/security/cert/Certificate;"
		).object<jarray>();
	}
	jarray CodeSource::getCodeSigners()
	{
		return __thiz.callObjectMethod(
			"getCodeSigners",
			"()[Ljava/security/CodeSigner;"
		).object<jarray>();
	}
	QAndroidJniObject CodeSource::getLocation()
	{
		return __thiz.callObjectMethod(
			"getLocation",
			"()Ljava/net/URL;"
		);
	}
	jint CodeSource::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean CodeSource::implies(java::security::CodeSource arg0)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/CodeSource;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring CodeSource::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

