#include "./ObjectInputStream.hpp"
#include "./ObjectOutputStream.hpp"
#include "../nio/file/FileSystem.hpp"
#include "../security/Permission.hpp"
#include "../security/PermissionCollection.hpp"
#include "./FilePermission.hpp"

namespace java::io
{
	// Fields
	
	FilePermission::FilePermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FilePermission::FilePermission(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.FilePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	FilePermission::FilePermission(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.FilePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jboolean FilePermission::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring FilePermission::getActions()
	{
		return __thiz.callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint FilePermission::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean FilePermission::implies(java::security::Permission arg0)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FilePermission::newPermissionCollection()
	{
		return __thiz.callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
} // namespace java::io

