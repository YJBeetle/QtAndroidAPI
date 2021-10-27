#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./Permission.hpp"
#include "./PermissionCollection.hpp"
#include "../util/concurrent/ConcurrentHashMap.hpp"
#include "./Permissions.hpp"

namespace java::security
{
	// Fields
	
	Permissions::Permissions(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Permissions::Permissions()
	{
		__thiz = QAndroidJniObject(
			"java.security.Permissions",
			"()V"
		);
	}
	
	// Methods
	void Permissions::add(java::security::Permission arg0)
	{
		__thiz.callMethod<void>(
			"add",
			"(Ljava/security/Permission;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Permissions::elements()
	{
		return __thiz.callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	jboolean Permissions::implies(java::security::Permission arg0)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace java::security

