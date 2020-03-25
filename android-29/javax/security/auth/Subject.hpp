#pragma once

#ifndef JAVAX_SECURITY_AUTH_SUBJECT
#define JAVAX_SECURITY_AUTH_SUBJECT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::security
{
	class AccessControlContext;
}

namespace __jni_impl::javax::security::auth
{
	class Subject : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jboolean arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		void setReadOnly();
		QAndroidJniObject getPrincipals(jclass arg0);
		QAndroidJniObject getPrincipals();
		jboolean isReadOnly();
		static QAndroidJniObject doAs(__jni_impl::javax::security::auth::Subject arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject doAsPrivileged(__jni_impl::javax::security::auth::Subject arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::AccessControlContext arg2);
		QAndroidJniObject getPublicCredentials();
		QAndroidJniObject getPublicCredentials(jclass arg0);
		QAndroidJniObject getPrivateCredentials();
		QAndroidJniObject getPrivateCredentials(jclass arg0);
		static QAndroidJniObject getSubject(__jni_impl::java::security::AccessControlContext arg0);
	};
} // namespace __jni_impl::javax::security::auth

#include "../../../java/io/ObjectInputStream.hpp"
#include "../../../java/io/ObjectOutputStream.hpp"
#include "../../../java/security/AccessControlContext.hpp"

namespace __jni_impl::javax::security::auth
{
	// Fields
	
	// Constructors
	void Subject::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.Subject",
			"()V");
	}
	void Subject::__constructor(jboolean arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.Subject",
			"(ZLjava/util/Set;Ljava/util/Set;Ljava/util/Set;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	
	// Methods
	jboolean Subject::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Subject::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint Subject::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	void Subject::setReadOnly()
	{
		__thiz.callMethod<void>(
			"setReadOnly",
			"()V");
	}
	QAndroidJniObject Subject::getPrincipals(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getPrincipals",
			"(Ljava/lang/Class;)Ljava/util/Set;",
			arg0);
	}
	QAndroidJniObject Subject::getPrincipals()
	{
		return __thiz.callObjectMethod(
			"getPrincipals",
			"()Ljava/util/Set;");
	}
	jboolean Subject::isReadOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isReadOnly",
			"()Z");
	}
	QAndroidJniObject Subject::doAs(__jni_impl::javax::security::auth::Subject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.security.auth.Subject",
			"doAs",
			"(Ljavax/security/auth/Subject;Ljava/security/PrivilegedAction;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject Subject::doAsPrivileged(__jni_impl::javax::security::auth::Subject arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::AccessControlContext arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.security.auth.Subject",
			"doAsPrivileged",
			"(Ljavax/security/auth/Subject;Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject Subject::getPublicCredentials()
	{
		return __thiz.callObjectMethod(
			"getPublicCredentials",
			"()Ljava/util/Set;");
	}
	QAndroidJniObject Subject::getPublicCredentials(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getPublicCredentials",
			"(Ljava/lang/Class;)Ljava/util/Set;",
			arg0);
	}
	QAndroidJniObject Subject::getPrivateCredentials()
	{
		return __thiz.callObjectMethod(
			"getPrivateCredentials",
			"()Ljava/util/Set;");
	}
	QAndroidJniObject Subject::getPrivateCredentials(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getPrivateCredentials",
			"(Ljava/lang/Class;)Ljava/util/Set;",
			arg0);
	}
	QAndroidJniObject Subject::getSubject(__jni_impl::java::security::AccessControlContext arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.security.auth.Subject",
			"getSubject",
			"(Ljava/security/AccessControlContext;)Ljavax/security/auth/Subject;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::javax::security::auth

namespace javax::security::auth
{
	class Subject : public __jni_impl::javax::security::auth::Subject
	{
	public:
		Subject(QAndroidJniObject obj) { __thiz = obj; }
		Subject()
		{
			__constructor();
		}
		Subject(jboolean arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace javax::security::auth

#endif // JAVAX_SECURITY_AUTH_SUBJECT

