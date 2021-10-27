#include "./Permission.hpp"
#include "./PermissionCollection.hpp"

namespace java::security
{
	// Fields
	
	PermissionCollection::PermissionCollection(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PermissionCollection::PermissionCollection()
	{
		__thiz = QAndroidJniObject(
			"java.security.PermissionCollection",
			"()V"
		);
	}
	
	// Methods
	void PermissionCollection::add(java::security::Permission arg0)
	{
		__thiz.callMethod<void>(
			"add",
			"(Ljava/security/Permission;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PermissionCollection::elements()
	{
		return __thiz.callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	QAndroidJniObject PermissionCollection::elementsAsStream()
	{
		return __thiz.callObjectMethod(
			"elementsAsStream",
			"()Ljava/util/stream/Stream;"
		);
	}
	jboolean PermissionCollection::implies(java::security::Permission arg0)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean PermissionCollection::isReadOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	void PermissionCollection::setReadOnly()
	{
		__thiz.callMethod<void>(
			"setReadOnly",
			"()V"
		);
	}
	jstring PermissionCollection::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

