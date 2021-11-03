#include "./ObjectInputStream.hpp"
#include "./ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../nio/file/FileSystem.hpp"
#include "../security/Permission.hpp"
#include "../security/PermissionCollection.hpp"
#include "./FilePermission.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	FilePermission::FilePermission(QAndroidJniObject obj) : java::security::Permission(obj) {}
	
	// Constructors
	FilePermission::FilePermission(JString arg0, JString arg1)
		: java::security::Permission(
			"java.io.FilePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	jboolean FilePermission::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString FilePermission::getActions() const
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		);
	}
	jint FilePermission::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean FilePermission::implies(java::security::Permission arg0) const
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
	java::security::PermissionCollection FilePermission::newPermissionCollection() const
	{
		return callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
} // namespace java::io

