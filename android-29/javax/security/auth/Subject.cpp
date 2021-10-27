#include "../../../java/io/ObjectInputStream.hpp"
#include "../../../java/io/ObjectOutputStream.hpp"
#include "../../../java/security/AccessControlContext.hpp"
#include "../../../java/util/LinkedList.hpp"
#include "./Subject.hpp"

namespace javax::security::auth
{
	// Fields
	
	Subject::Subject(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Subject::Subject()
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.Subject",
			"()V"
		);
	}
	Subject::Subject(jboolean &arg0, __JniBaseClass &arg1, __JniBaseClass &arg2, __JniBaseClass &arg3)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.Subject",
			"(ZLjava/util/Set;Ljava/util/Set;Ljava/util/Set;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	jobject Subject::doAs(javax::security::auth::Subject arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.security.auth.Subject",
			"doAs",
			"(Ljavax/security/auth/Subject;Ljava/security/PrivilegedAction;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject Subject::doAsPrivileged(javax::security::auth::Subject arg0, __JniBaseClass arg1, java::security::AccessControlContext arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.security.auth.Subject",
			"doAsPrivileged",
			"(Ljavax/security/auth/Subject;Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject Subject::getSubject(java::security::AccessControlContext arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.security.auth.Subject",
			"getSubject",
			"(Ljava/security/AccessControlContext;)Ljavax/security/auth/Subject;",
			arg0.__jniObject().object()
		);
	}
	jboolean Subject::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Subject::getPrincipals()
	{
		return __thiz.callObjectMethod(
			"getPrincipals",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject Subject::getPrincipals(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getPrincipals",
			"(Ljava/lang/Class;)Ljava/util/Set;",
			arg0
		);
	}
	QAndroidJniObject Subject::getPrivateCredentials()
	{
		return __thiz.callObjectMethod(
			"getPrivateCredentials",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject Subject::getPrivateCredentials(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getPrivateCredentials",
			"(Ljava/lang/Class;)Ljava/util/Set;",
			arg0
		);
	}
	QAndroidJniObject Subject::getPublicCredentials()
	{
		return __thiz.callObjectMethod(
			"getPublicCredentials",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject Subject::getPublicCredentials(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getPublicCredentials",
			"(Ljava/lang/Class;)Ljava/util/Set;",
			arg0
		);
	}
	jint Subject::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Subject::isReadOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	void Subject::setReadOnly()
	{
		__thiz.callMethod<void>(
			"setReadOnly",
			"()V"
		);
	}
	jstring Subject::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace javax::security::auth

