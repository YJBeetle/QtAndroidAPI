#pragma once

#ifndef JAVA_SECURITY_POLICY
#define JAVA_SECURITY_POLICY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class PermissionCollection;
}
namespace __jni_impl::java::util
{
	class WeakHashMap;
}
namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::java::security
{
	class ProtectionDomain;
}
namespace __jni_impl::java::security
{
	class Permission;
}
namespace __jni_impl::java::security
{
	class CodeSource;
}
namespace __jni_impl::java::security
{
	class NoSuchAlgorithmException;
}

namespace __jni_impl::java::security
{
	class Policy : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject UNSUPPORTED_EMPTY_COLLECTION();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::__JniBaseClass arg1, jstring arg2);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::__JniBaseClass arg1, const QString &arg2);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::Provider arg2);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::Provider arg2);
		jboolean implies(__jni_impl::java::security::ProtectionDomain arg0, __jni_impl::java::security::Permission arg1);
		QAndroidJniObject getPermissions(__jni_impl::java::security::CodeSource arg0);
		QAndroidJniObject getPermissions(__jni_impl::java::security::ProtectionDomain arg0);
		jstring getType();
		QAndroidJniObject getParameters();
		QAndroidJniObject getProvider();
		static QAndroidJniObject getPolicy();
		static void setPolicy(__jni_impl::java::security::Policy arg0);
		void refresh();
	};
} // namespace __jni_impl::java::security

#include "PermissionCollection.hpp"
#include "../util/WeakHashMap.hpp"
#include "Provider.hpp"
#include "ProtectionDomain.hpp"
#include "Permission.hpp"
#include "CodeSource.hpp"
#include "NoSuchAlgorithmException.hpp"

namespace __jni_impl::java::security
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
	
	// Constructors
	void Policy::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.Policy",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Policy::getInstance(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Policy",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Policy$Parameters;)Ljava/security/Policy;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Policy::getInstance(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Policy",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Policy$Parameters;)Ljava/security/Policy;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Policy::getInstance(jstring arg0, __jni_impl::__JniBaseClass arg1, jstring arg2)
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
	QAndroidJniObject Policy::getInstance(const QString &arg0, __jni_impl::__JniBaseClass arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Policy",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Policy$Parameters;Ljava/lang/String;)Ljava/security/Policy;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	QAndroidJniObject Policy::getInstance(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::Provider arg2)
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
	QAndroidJniObject Policy::getInstance(const QString &arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::Provider arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Policy",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Policy$Parameters;Ljava/security/Provider;)Ljava/security/Policy;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean Policy::implies(__jni_impl::java::security::ProtectionDomain arg0, __jni_impl::java::security::Permission arg1)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/ProtectionDomain;Ljava/security/Permission;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Policy::getPermissions(__jni_impl::java::security::CodeSource arg0)
	{
		return __thiz.callObjectMethod(
			"getPermissions",
			"(Ljava/security/CodeSource;)Ljava/security/PermissionCollection;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Policy::getPermissions(__jni_impl::java::security::ProtectionDomain arg0)
	{
		return __thiz.callObjectMethod(
			"getPermissions",
			"(Ljava/security/ProtectionDomain;)Ljava/security/PermissionCollection;",
			arg0.__jniObject().object()
		);
	}
	jstring Policy::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Policy::getParameters()
	{
		return __thiz.callObjectMethod(
			"getParameters",
			"()Ljava/security/Policy$Parameters;"
		);
	}
	QAndroidJniObject Policy::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
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
	void Policy::setPolicy(__jni_impl::java::security::Policy arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.security.Policy",
			"setPolicy",
			"(Ljava/security/Policy;)V",
			arg0.__jniObject().object()
		);
	}
	void Policy::refresh()
	{
		__thiz.callMethod<void>(
			"refresh",
			"()V"
		);
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class Policy : public __jni_impl::java::security::Policy
	{
	public:
		Policy(QAndroidJniObject obj) { __thiz = obj; }
		Policy()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_POLICY

