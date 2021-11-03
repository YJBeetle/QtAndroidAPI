#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../java/io/ObjectInputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/Permission.hpp"
#include "../../../java/security/PermissionCollection.hpp"
#include "./PrivateCredentialPermission.hpp"

namespace javax::security::auth
{
	// Fields
	
	// QAndroidJniObject forward
	PrivateCredentialPermission::PrivateCredentialPermission(QAndroidJniObject obj) : java::security::Permission(obj) {}
	
	// Constructors
	PrivateCredentialPermission::PrivateCredentialPermission(JString arg0, JString arg1)
		: java::security::Permission(
			"javax.security.auth.PrivateCredentialPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	jboolean PrivateCredentialPermission::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString PrivateCredentialPermission::getActions()
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		);
	}
	JString PrivateCredentialPermission::getCredentialClass()
	{
		return callObjectMethod(
			"getCredentialClass",
			"()Ljava/lang/String;"
		);
	}
	JArray PrivateCredentialPermission::getPrincipals()
	{
		return callObjectMethod(
			"getPrincipals",
			"()[[Ljava/lang/String;"
		);
	}
	jint PrivateCredentialPermission::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean PrivateCredentialPermission::implies(java::security::Permission arg0)
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
	java::security::PermissionCollection PrivateCredentialPermission::newPermissionCollection()
	{
		return callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
} // namespace javax::security::auth

