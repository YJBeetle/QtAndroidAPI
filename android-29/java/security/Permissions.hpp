#pragma once

#ifndef JAVA_SECURITY_PERMISSIONS
#define JAVA_SECURITY_PERMISSIONS

#include "../../__JniBaseClass.hpp"
#include "PermissionCollection.hpp"

namespace __jni_impl::java::util::concurrent
{
	class ConcurrentHashMap;
}
namespace __jni_impl::java::security
{
	class PermissionCollection;
}
namespace __jni_impl::java::security
{
	class Permission;
}
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
	class Permissions : public __jni_impl::java::security::PermissionCollection
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void add(__jni_impl::java::security::Permission arg0);
		QAndroidJniObject elements();
		jboolean implies(__jni_impl::java::security::Permission arg0);
	};
} // namespace __jni_impl::java::security

#include "../util/concurrent/ConcurrentHashMap.hpp"
#include "PermissionCollection.hpp"
#include "Permission.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void Permissions::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.Permissions",
			"()V"
		);
	}
	
	// Methods
	void Permissions::add(__jni_impl::java::security::Permission arg0)
	{
		__thiz.callMethod<void>(
			"add",
			"(Ljava/security/Permission;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Permissions::elements()
	{
		return __thiz.callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	jboolean Permissions::implies(__jni_impl::java::security::Permission arg0)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class Permissions : public __jni_impl::java::security::Permissions
	{
	public:
		Permissions(QAndroidJniObject obj) { __thiz = obj; }
		Permissions()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_PERMISSIONS

