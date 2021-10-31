#include "./Identity.hpp"
#include "./IdentityScope.hpp"

namespace java::security
{
	// Fields
	
	IdentityScope::IdentityScope(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IdentityScope::IdentityScope(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.IdentityScope",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	IdentityScope::IdentityScope(jstring arg0, java::security::IdentityScope &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.IdentityScope",
			"(Ljava/lang/String;Ljava/security/IdentityScope;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject IdentityScope::getSystemScope()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.IdentityScope",
			"getSystemScope",
			"()Ljava/security/IdentityScope;"
		);
	}
	void IdentityScope::addIdentity(java::security::Identity arg0)
	{
		__thiz.callMethod<void>(
			"addIdentity",
			"(Ljava/security/Identity;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject IdentityScope::getIdentity(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getIdentity",
			"(Ljava/lang/String;)Ljava/security/Identity;",
			arg0
		);
	}
	QAndroidJniObject IdentityScope::getIdentity(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getIdentity",
			"(Ljava/security/Principal;)Ljava/security/Identity;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject IdentityScope::identities()
	{
		return __thiz.callObjectMethod(
			"identities",
			"()Ljava/util/Enumeration;"
		);
	}
	void IdentityScope::removeIdentity(java::security::Identity arg0)
	{
		__thiz.callMethod<void>(
			"removeIdentity",
			"(Ljava/security/Identity;)V",
			arg0.__jniObject().object()
		);
	}
	jint IdentityScope::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	jstring IdentityScope::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

