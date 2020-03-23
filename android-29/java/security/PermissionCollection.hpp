#pragma once

#ifndef JAVA_SECURITY_PERMISSIONCOLLECTION
#define JAVA_SECURITY_PERMISSIONCOLLECTION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class Permission;
}

namespace __jni_impl::java::security
{
	class PermissionCollection : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void add(__jni_impl::java::security::Permission arg0);
		QAndroidJniObject toString();
		QAndroidJniObject elements();
		void setReadOnly();
		jboolean implies(__jni_impl::java::security::Permission arg0);
		jboolean isReadOnly();
		QAndroidJniObject elementsAsStream();
	};
} // namespace __jni_impl::java::security

#include "Permission.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void PermissionCollection::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.PermissionCollection",
			"()V");
	}
	
	// Methods
	void PermissionCollection::add(__jni_impl::java::security::Permission arg0)
	{
		__thiz.callMethod<void>(
			"add",
			"(Ljava/security/Permission;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject PermissionCollection::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject PermissionCollection::elements()
	{
		return __thiz.callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;");
	}
	void PermissionCollection::setReadOnly()
	{
		__thiz.callMethod<void>(
			"setReadOnly",
			"()V");
	}
	jboolean PermissionCollection::implies(__jni_impl::java::security::Permission arg0)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.__jniObject().object());
	}
	jboolean PermissionCollection::isReadOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isReadOnly",
			"()Z");
	}
	QAndroidJniObject PermissionCollection::elementsAsStream()
	{
		return __thiz.callObjectMethod(
			"elementsAsStream",
			"()Ljava/util/stream/Stream;");
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class PermissionCollection : public __jni_impl::java::security::PermissionCollection
	{
	public:
		PermissionCollection(QAndroidJniObject obj) { __thiz = obj; }
		PermissionCollection()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_PERMISSIONCOLLECTION

