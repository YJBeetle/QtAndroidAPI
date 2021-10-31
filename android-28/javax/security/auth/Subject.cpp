#include "../../../java/io/ObjectInputStream.hpp"
#include "../../../java/io/ObjectOutputStream.hpp"
#include "../../../java/security/AccessControlContext.hpp"
#include "../../../java/util/LinkedList.hpp"
#include "./Subject.hpp"

namespace javax::security::auth
{
	// Fields
	
	// QJniObject forward
	Subject::Subject(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Subject::Subject()
		: __JniBaseClass(
			"javax.security.auth.Subject",
			"()V"
		) {}
	Subject::Subject(jboolean arg0, __JniBaseClass arg1, __JniBaseClass arg2, __JniBaseClass arg3)
		: __JniBaseClass(
			"javax.security.auth.Subject",
			"(ZLjava/util/Set;Ljava/util/Set;Ljava/util/Set;)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	jobject Subject::doAs(javax::security::auth::Subject arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"javax.security.auth.Subject",
			"doAs",
			"(Ljavax/security/auth/Subject;Ljava/security/PrivilegedAction;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object()
		).object<jobject>();
	}
	jobject Subject::doAsPrivileged(javax::security::auth::Subject arg0, __JniBaseClass arg1, java::security::AccessControlContext arg2)
	{
		return callStaticObjectMethod(
			"javax.security.auth.Subject",
			"doAsPrivileged",
			"(Ljavax/security/auth/Subject;Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		).object<jobject>();
	}
	javax::security::auth::Subject Subject::getSubject(java::security::AccessControlContext arg0)
	{
		return callStaticObjectMethod(
			"javax.security.auth.Subject",
			"getSubject",
			"(Ljava/security/AccessControlContext;)Ljavax/security/auth/Subject;",
			arg0.object()
		);
	}
	jboolean Subject::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	__JniBaseClass Subject::getPrincipals()
	{
		return callObjectMethod(
			"getPrincipals",
			"()Ljava/util/Set;"
		);
	}
	__JniBaseClass Subject::getPrincipals(jclass arg0)
	{
		return callObjectMethod(
			"getPrincipals",
			"(Ljava/lang/Class;)Ljava/util/Set;",
			arg0
		);
	}
	__JniBaseClass Subject::getPrivateCredentials()
	{
		return callObjectMethod(
			"getPrivateCredentials",
			"()Ljava/util/Set;"
		);
	}
	__JniBaseClass Subject::getPrivateCredentials(jclass arg0)
	{
		return callObjectMethod(
			"getPrivateCredentials",
			"(Ljava/lang/Class;)Ljava/util/Set;",
			arg0
		);
	}
	__JniBaseClass Subject::getPublicCredentials()
	{
		return callObjectMethod(
			"getPublicCredentials",
			"()Ljava/util/Set;"
		);
	}
	__JniBaseClass Subject::getPublicCredentials(jclass arg0)
	{
		return callObjectMethod(
			"getPublicCredentials",
			"(Ljava/lang/Class;)Ljava/util/Set;",
			arg0
		);
	}
	jint Subject::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Subject::isReadOnly()
	{
		return callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	void Subject::setReadOnly()
	{
		callMethod<void>(
			"setReadOnly",
			"()V"
		);
	}
	jstring Subject::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace javax::security::auth

