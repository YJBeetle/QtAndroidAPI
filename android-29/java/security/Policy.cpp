#include "./CodeSource.hpp"
#include "./NoSuchAlgorithmException.hpp"
#include "./Permission.hpp"
#include "./PermissionCollection.hpp"
#include "./ProtectionDomain.hpp"
#include "./Provider.hpp"
#include "../util/WeakHashMap.hpp"
#include "./Policy.hpp"

namespace java::security
{
	// Fields
	QAndroidJniObject Policy::UNSUPPORTED_EMPTY_COLLECTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.Policy",
			"UNSUPPORTED_EMPTY_COLLECTION",
			"Ljava/security/PermissionCollection;"
		);
	}
	
	Policy::Policy(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Policy::Policy()
	{
		__thiz = QAndroidJniObject(
			"java.security.Policy",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Policy::getInstance(jstring arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Policy",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Policy$Parameters;)Ljava/security/Policy;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Policy::getInstance(jstring arg0, __JniBaseClass arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Policy",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Policy$Parameters;Ljava/lang/String;)Ljava/security/Policy;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject Policy::getInstance(jstring arg0, __JniBaseClass arg1, java::security::Provider arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Policy",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Policy$Parameters;Ljava/security/Provider;)Ljava/security/Policy;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Policy::getPolicy()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Policy",
			"getPolicy",
			"()Ljava/security/Policy;"
		);
	}
	void Policy::setPolicy(java::security::Policy arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.security.Policy",
			"setPolicy",
			"(Ljava/security/Policy;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Policy::getParameters()
	{
		return __thiz.callObjectMethod(
			"getParameters",
			"()Ljava/security/Policy$Parameters;"
		);
	}
	QAndroidJniObject Policy::getPermissions(java::security::CodeSource arg0)
	{
		return __thiz.callObjectMethod(
			"getPermissions",
			"(Ljava/security/CodeSource;)Ljava/security/PermissionCollection;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Policy::getPermissions(java::security::ProtectionDomain arg0)
	{
		return __thiz.callObjectMethod(
			"getPermissions",
			"(Ljava/security/ProtectionDomain;)Ljava/security/PermissionCollection;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Policy::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	jstring Policy::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Policy::implies(java::security::ProtectionDomain arg0, java::security::Permission arg1)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/ProtectionDomain;Ljava/security/Permission;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Policy::refresh()
	{
		__thiz.callMethod<void>(
			"refresh",
			"()V"
		);
	}
} // namespace java::security

