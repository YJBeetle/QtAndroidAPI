#pragma once

#ifndef JAVA_SECURITY_IDENTITYSCOPE
#define JAVA_SECURITY_IDENTITYSCOPE

#include "../../__JniBaseClass.hpp"
#include "Identity.hpp"

namespace __jni_impl::java::security
{
	class Identity;
}

namespace __jni_impl::java::security
{
	class IdentityScope : public __jni_impl::java::security::Identity
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, __jni_impl::java::security::IdentityScope arg1);
		
		// Methods
		jstring toString();
		jint size();
		QAndroidJniObject getIdentity(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getIdentity(jstring arg0);
		void addIdentity(__jni_impl::java::security::Identity arg0);
		static QAndroidJniObject getSystemScope();
		void removeIdentity(__jni_impl::java::security::Identity arg0);
		QAndroidJniObject identities();
	};
} // namespace __jni_impl::java::security

#include "Identity.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void IdentityScope::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.IdentityScope",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void IdentityScope::__constructor(jstring arg0, __jni_impl::java::security::IdentityScope arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.IdentityScope",
			"(Ljava/lang/String;Ljava/security/IdentityScope;)V",
			arg0,
			arg1.__jniObject().object());
	}
	
	// Methods
	jstring IdentityScope::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint IdentityScope::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject IdentityScope::getIdentity(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getIdentity",
			"(Ljava/security/PublicKey;)Ljava/security/Identity;",
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
	void IdentityScope::addIdentity(__jni_impl::java::security::Identity arg0)
	{
		__thiz.callMethod<void>(
			"addIdentity",
			"(Ljava/security/Identity;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject IdentityScope::getSystemScope()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.IdentityScope",
			"getSystemScope",
			"()Ljava/security/IdentityScope;"
		);
	}
	void IdentityScope::removeIdentity(__jni_impl::java::security::Identity arg0)
	{
		__thiz.callMethod<void>(
			"removeIdentity",
			"(Ljava/security/Identity;)V",
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
} // namespace __jni_impl::java::security

namespace java::security
{
	class IdentityScope : public __jni_impl::java::security::IdentityScope
	{
	public:
		IdentityScope(QAndroidJniObject obj) { __thiz = obj; }
		IdentityScope(jstring arg0)
		{
			__constructor(
				arg0);
		}
		IdentityScope(jstring arg0, __jni_impl::java::security::IdentityScope arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_IDENTITYSCOPE

