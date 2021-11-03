#include "../io/ObjectInputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Timestamp.hpp"
#include "./cert/CertPath.hpp"
#include "./CodeSigner.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	CodeSigner::CodeSigner(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	CodeSigner::CodeSigner(java::security::cert::CertPath arg0, java::security::Timestamp arg1)
		: JObject(
			"java.security.CodeSigner",
			"(Ljava/security/cert/CertPath;Ljava/security/Timestamp;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jboolean CodeSigner::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::security::cert::CertPath CodeSigner::getSignerCertPath()
	{
		return callObjectMethod(
			"getSignerCertPath",
			"()Ljava/security/cert/CertPath;"
		);
	}
	java::security::Timestamp CodeSigner::getTimestamp()
	{
		return callObjectMethod(
			"getTimestamp",
			"()Ljava/security/Timestamp;"
		);
	}
	jint CodeSigner::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CodeSigner::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

