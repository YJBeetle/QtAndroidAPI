#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../net/SocketPermission.hpp"
#include "../net/URL.hpp"
#include "./cert/CertificateFactory.hpp"
#include "./CodeSource.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	CodeSource::CodeSource(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	CodeSource::CodeSource(java::net::URL arg0, JArray arg1)
		: JObject(
			"java.security.CodeSource",
			"(Ljava/net/URL;[Ljava/security/CodeSigner;)V",
			arg0.object(),
			arg1.object<jarray>()
		) {}
	
	// Methods
	jboolean CodeSource::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JArray CodeSource::getCertificates() const
	{
		return callObjectMethod(
			"getCertificates",
			"()[Ljava/security/cert/Certificate;"
		);
	}
	JArray CodeSource::getCodeSigners() const
	{
		return callObjectMethod(
			"getCodeSigners",
			"()[Ljava/security/CodeSigner;"
		);
	}
	java::net::URL CodeSource::getLocation() const
	{
		return callObjectMethod(
			"getLocation",
			"()Ljava/net/URL;"
		);
	}
	jint CodeSource::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean CodeSource::implies(java::security::CodeSource arg0) const
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/CodeSource;)Z",
			arg0.object()
		);
	}
	JString CodeSource::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

