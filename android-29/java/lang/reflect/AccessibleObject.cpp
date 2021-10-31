#include "./AccessibleObject.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// QAndroidJniObject forward
	AccessibleObject::AccessibleObject(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
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
		return callMethod<jboolean>(
			"canAccess",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	__JniBaseClass AccessibleObject::getAnnotation(jclass arg0)
	{
		return callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0
		);
	}
	jarray AccessibleObject::getAnnotations()
	{
		return callObjectMethod(
			"getAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		).object<jarray>();
	}
	jarray AccessibleObject::getAnnotationsByType(jclass arg0)
	{
		return callObjectMethod(
			"getAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0
		).object<jarray>();
	}
	__JniBaseClass AccessibleObject::getDeclaredAnnotation(jclass arg0)
	{
		return callObjectMethod(
			"getDeclaredAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0
		);
	}
	jarray AccessibleObject::getDeclaredAnnotations()
	{
		return callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		).object<jarray>();
	}
	jarray AccessibleObject::getDeclaredAnnotationsByType(jclass arg0)
	{
		return callObjectMethod(
			"getDeclaredAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0
		).object<jarray>();
	}
	jboolean AccessibleObject::isAccessible()
	{
		return callMethod<jboolean>(
			"isAccessible",
			"()Z"
		);
	}
	jboolean AccessibleObject::isAnnotationPresent(jclass arg0)
	{
		return callMethod<jboolean>(
			"isAnnotationPresent",
			"(Ljava/lang/Class;)Z",
			arg0
		);
	}
	void AccessibleObject::setAccessible(jboolean arg0)
	{
		callMethod<void>(
			"setAccessible",
			"(Z)V",
			arg0
		);
	}
	jboolean AccessibleObject::trySetAccessible()
	{
		return callMethod<jboolean>(
			"trySetAccessible",
			"()Z"
		);
	}
} // namespace java::lang::reflect

