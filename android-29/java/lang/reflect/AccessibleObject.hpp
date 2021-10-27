#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::lang::reflect
{
	class AccessibleObject : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static void setAccessible(jarray arg0, jboolean arg1);
		jboolean canAccess(jobject arg0);
		QAndroidJniObject getAnnotation(jclass arg0);
		jarray getAnnotations();
		jarray getAnnotationsByType(jclass arg0);
		QAndroidJniObject getDeclaredAnnotation(jclass arg0);
		jarray getDeclaredAnnotations();
		jarray getDeclaredAnnotationsByType(jclass arg0);
		jboolean isAccessible();
		jboolean isAnnotationPresent(jclass arg0);
		void setAccessible(jboolean arg0);
		jboolean trySetAccessible();
	};
} // namespace __jni_impl::java::lang::reflect


namespace __jni_impl::java::lang::reflect
{
	// Fields
	
	// Constructors
	void AccessibleObject::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.AccessibleObject",
			"(V)V");
	}
	
	// Methods
	void AccessibleObject::setAccessible(jarray arg0, jboolean arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.reflect.AccessibleObject",
			"setAccessible",
			"([Ljava/lang/reflect/AccessibleObject;Z)V",
			arg0,
			arg1
		);
	}
	jboolean AccessibleObject::canAccess(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"canAccess",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject AccessibleObject::getAnnotation(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0
		);
	}
	jarray AccessibleObject::getAnnotations()
	{
		return __thiz.callObjectMethod(
			"getAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		).object<jarray>();
	}
	jarray AccessibleObject::getAnnotationsByType(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0
		).object<jarray>();
	}
	QAndroidJniObject AccessibleObject::getDeclaredAnnotation(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getDeclaredAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0
		);
	}
	jarray AccessibleObject::getDeclaredAnnotations()
	{
		return __thiz.callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		).object<jarray>();
	}
	jarray AccessibleObject::getDeclaredAnnotationsByType(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getDeclaredAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0
		).object<jarray>();
	}
	jboolean AccessibleObject::isAccessible()
	{
		return __thiz.callMethod<jboolean>(
			"isAccessible",
			"()Z"
		);
	}
	jboolean AccessibleObject::isAnnotationPresent(jclass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAnnotationPresent",
			"(Ljava/lang/Class;)Z",
			arg0
		);
	}
	void AccessibleObject::setAccessible(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAccessible",
			"(Z)V",
			arg0
		);
	}
	jboolean AccessibleObject::trySetAccessible()
	{
		return __thiz.callMethod<jboolean>(
			"trySetAccessible",
			"()Z"
		);
	}
} // namespace __jni_impl::java::lang::reflect

namespace java::lang::reflect
{
	class AccessibleObject : public __jni_impl::java::lang::reflect::AccessibleObject
	{
	public:
		AccessibleObject(QAndroidJniObject obj) { __thiz = obj; }
		AccessibleObject()
		{
			__constructor();
		}
	};
} // namespace java::lang::reflect

