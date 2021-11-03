#include "../../../JArray.hpp"
#include "../../../java/io/ObjectInputStream.hpp"
#include "../../../java/io/ObjectOutputStream.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/AccessControlContext.hpp"
#include "../../../java/util/LinkedList.hpp"
#include "./Subject.hpp"

namespace javax::security::auth
{
	// Fields
	
	// QJniObject forward
	Subject::Subject(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Subject::Subject()
		: JObject(
			"javax.security.auth.Subject",
			"()V"
		) {}
	Subject::Subject(jboolean arg0, JObject arg1, JObject arg2, JObject arg3)
		: JObject(
			"javax.security.auth.Subject",
			"(ZLjava/util/Set;Ljava/util/Set;Ljava/util/Set;)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	JObject Subject::doAs(javax::security::auth::Subject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"javax.security.auth.Subject",
			"doAs",
			"(Ljavax/security/auth/Subject;Ljava/security/PrivilegedAction;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Subject::doAsPrivileged(javax::security::auth::Subject arg0, JObject arg1, java::security::AccessControlContext arg2)
	{
		return callStaticObjectMethod(
			"javax.security.auth.Subject",
			"doAsPrivileged",
			"(Ljavax/security/auth/Subject;Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
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
	jboolean Subject::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject Subject::getPrincipals()
	{
		return callObjectMethod(
			"getPrincipals",
			"()Ljava/util/Set;"
		);
	}
	JObject Subject::getPrincipals(JClass arg0)
	{
		return callObjectMethod(
			"getPrincipals",
			"(Ljava/lang/Class;)Ljava/util/Set;",
			arg0.object<jclass>()
		);
	}
	JObject Subject::getPrivateCredentials()
	{
		return callObjectMethod(
			"getPrivateCredentials",
			"()Ljava/util/Set;"
		);
	}
	JObject Subject::getPrivateCredentials(JClass arg0)
	{
		return callObjectMethod(
			"getPrivateCredentials",
			"(Ljava/lang/Class;)Ljava/util/Set;",
			arg0.object<jclass>()
		);
	}
	JObject Subject::getPublicCredentials()
	{
		return callObjectMethod(
			"getPublicCredentials",
			"()Ljava/util/Set;"
		);
	}
	JObject Subject::getPublicCredentials(JClass arg0)
	{
		return callObjectMethod(
			"getPublicCredentials",
			"(Ljava/lang/Class;)Ljava/util/Set;",
			arg0.object<jclass>()
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
	JString Subject::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::security::auth

