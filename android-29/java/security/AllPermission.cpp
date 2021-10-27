#include "./Permission.hpp"
#include "./PermissionCollection.hpp"
#include "./AllPermission.hpp"

namespace java::security
{
	// Fields
	
	AllPermission::AllPermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AllPermission::AllPermission()
	{
		__thiz = QAndroidJniObject(
			"java.security.AllPermission",
			"()V"
		);
	}
	AllPermission::AllPermission(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.AllPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	AllPermission::AllPermission(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.AllPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jboolean AllPermission::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring AllPermission::getActions()
	{
		return __thiz.callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AllPermission::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AllPermission::implies(java::security::Permission arg0)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AllPermission::newPermissionCollection()
	{
		return __thiz.callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
} // namespace java::security

