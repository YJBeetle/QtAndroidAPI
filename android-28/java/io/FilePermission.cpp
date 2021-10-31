#include "./ObjectInputStream.hpp"
#include "./ObjectOutputStream.hpp"
#include "../nio/file/FileSystem.hpp"
#include "../security/Permission.hpp"
#include "../security/PermissionCollection.hpp"
#include "./FilePermission.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	FilePermission::FilePermission(QJniObject obj) : java::security::Permission(obj) {}
	
	// Constructors
	FilePermission::FilePermission(jstring arg0, jstring arg1)
		: java::security::Permission(
			"java.io.FilePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean FilePermission::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring FilePermission::getActions()
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint FilePermission::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean FilePermission::implies(java::security::Permission arg0)
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
	java::security::PermissionCollection FilePermission::newPermissionCollection()
	{
		return callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
} // namespace java::io

