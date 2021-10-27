#include "../io/ObjectInputStream.hpp"
#include "./Permission.hpp"
#include "./PermissionCollection.hpp"
#include "./BasicPermission.hpp"

namespace java::security
{
	// Fields
	
	BasicPermission::BasicPermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BasicPermission::BasicPermission(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.BasicPermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	BasicPermission::BasicPermission(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.BasicPermission",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	BasicPermission::BasicPermission(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.BasicPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	BasicPermission::BasicPermission(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.BasicPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jboolean BasicPermission::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring BasicPermission::getActions()
	{
		return __thiz.callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint BasicPermission::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean BasicPermission::implies(java::security::Permission arg0)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BasicPermission::newPermissionCollection()
	{
		return __thiz.callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
} // namespace java::security

