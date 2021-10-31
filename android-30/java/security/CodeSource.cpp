#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../net/SocketPermission.hpp"
#include "../net/URL.hpp"
#include "./cert/CertificateFactory.hpp"
#include "./CodeSource.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	CodeSource::CodeSource(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CodeSource::CodeSource(java::net::URL arg0, jarray arg1)
		: __JniBaseClass(
			"java.security.CodeSource",
			"(Ljava/net/URL;[Ljava/security/CodeSigner;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jboolean CodeSource::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jarray CodeSource::getCertificates()
	{
		return callObjectMethod(
			"getCertificates",
			"()[Ljava/security/cert/Certificate;"
		).object<jarray>();
	}
	jarray CodeSource::getCodeSigners()
	{
		return callObjectMethod(
			"getCodeSigners",
			"()[Ljava/security/CodeSigner;"
		).object<jarray>();
	}
	java::net::URL CodeSource::getLocation()
	{
		return callObjectMethod(
			"getLocation",
			"()Ljava/net/URL;"
		);
	}
	jint CodeSource::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean CodeSource::implies(java::security::CodeSource arg0)
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/CodeSource;)Z",
			arg0.object()
		);
	}
	jstring CodeSource::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

