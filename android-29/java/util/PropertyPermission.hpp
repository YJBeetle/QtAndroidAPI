#pragma once

#ifndef JAVA_UTIL_PROPERTYPERMISSION
#define JAVA_UTIL_PROPERTYPERMISSION

#include "../../__JniBaseClass.hpp"
#include "../security/Permission.hpp"
#include "../security/BasicPermission.hpp"

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
	class Permission;
}
namespace __jni_impl::java::security
{
	class PermissionCollection;
}

namespace __jni_impl::java::util
{
	class PropertyPermission : public __jni_impl::java::security::BasicPermission
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jboolean implies(__jni_impl::java::security::Permission arg0);
		jstring getActions();
		QAndroidJniObject newPermissionCollection();
	};
} // namespace __jni_impl::java::util

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../security/Permission.hpp"
#include "../security/PermissionCollection.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void PropertyPermission::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.PropertyPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
	jboolean PropertyPermission::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PropertyPermission::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean PropertyPermission::implies(__jni_impl::java::security::Permission arg0)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring PropertyPermission::getActions()
	{
		return __thiz.callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject PropertyPermission::newPermissionCollection()
	{
		return __thiz.callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class PropertyPermission : public __jni_impl::java::util::PropertyPermission
	{
	public:
		PropertyPermission(QAndroidJniObject obj) { __thiz = obj; }
		PropertyPermission(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_PROPERTYPERMISSION

