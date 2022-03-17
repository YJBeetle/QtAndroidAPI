#pragma once

#include "../../../JArray.hpp"
#include "../../../java/io/ObjectInputStream.def.hpp"
#include "../../../java/io/ObjectOutputStream.def.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/AccessControlContext.def.hpp"
#include "../../../java/util/LinkedList.def.hpp"
#include "./Subject.def.hpp"

namespace javax::security::auth
{
	// Fields
	
	// Constructors
	inline Subject::Subject()
		: JObject(
			"javax.security.auth.Subject",
			"()V"
		) {}
	inline Subject::Subject(jboolean arg0, JObject arg1, JObject arg2, JObject arg3)
		: JObject(
			"javax.security.auth.Subject",
			"(ZLjava/util/Set;Ljava/util/Set;Ljava/util/Set;)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline JObject Subject::doAs(javax::security::auth::Subject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"javax.security.auth.Subject",
			"doAs",
			"(Ljavax/security/auth/Subject;Ljava/security/PrivilegedAction;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject Subject::doAsPrivileged(javax::security::auth::Subject arg0, JObject arg1, java::security::AccessControlContext arg2)
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
	inline javax::security::auth::Subject Subject::getSubject(java::security::AccessControlContext arg0)
	{
		return callStaticObjectMethod(
			"javax.security.auth.Subject",
			"getSubject",
			"(Ljava/security/AccessControlContext;)Ljavax/security/auth/Subject;",
			arg0.object()
		);
	}
	inline jboolean Subject::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject Subject::getPrincipals() const
	{
		return callObjectMethod(
			"getPrincipals",
			"()Ljava/util/Set;"
		);
	}
	inline JObject Subject::getPrincipals(JClass arg0) const
	{
		return callObjectMethod(
			"getPrincipals",
			"(Ljava/lang/Class;)Ljava/util/Set;",
			arg0.object<jclass>()
		);
	}
	inline JObject Subject::getPrivateCredentials() const
	{
		return callObjectMethod(
			"getPrivateCredentials",
			"()Ljava/util/Set;"
		);
	}
	inline JObject Subject::getPrivateCredentials(JClass arg0) const
	{
		return callObjectMethod(
			"getPrivateCredentials",
			"(Ljava/lang/Class;)Ljava/util/Set;",
			arg0.object<jclass>()
		);
	}
	inline JObject Subject::getPublicCredentials() const
	{
		return callObjectMethod(
			"getPublicCredentials",
			"()Ljava/util/Set;"
		);
	}
	inline JObject Subject::getPublicCredentials(JClass arg0) const
	{
		return callObjectMethod(
			"getPublicCredentials",
			"(Ljava/lang/Class;)Ljava/util/Set;",
			arg0.object<jclass>()
		);
	}
	inline jint Subject::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean Subject::isReadOnly() const
	{
		return callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	inline void Subject::setReadOnly() const
	{
		callMethod<void>(
			"setReadOnly",
			"()V"
		);
	}
	inline JString Subject::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::security::auth

// Base class headers

