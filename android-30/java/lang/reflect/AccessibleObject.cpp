#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AccessibleObject.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// QAndroidJniObject forward
	AccessibleObject::AccessibleObject(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void AccessibleObject::setAccessible(JArray arg0, jboolean arg1)
	{
		callStaticMethod<void>(
			"java.lang.reflect.AccessibleObject",
			"setAccessible",
			"([Ljava/lang/reflect/AccessibleObject;Z)V",
			arg0.object<jarray>(),
			arg1
		);
	}
	jboolean AccessibleObject::canAccess(JObject arg0)
	{
		return callMethod<jboolean>(
			"canAccess",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject AccessibleObject::getAnnotation(JClass arg0)
	{
		return callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	JArray AccessibleObject::getAnnotations()
	{
		return callObjectMethod(
			"getAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		);
	}
	JArray AccessibleObject::getAnnotationsByType(JClass arg0)
	{
		return callObjectMethod(
			"getAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	JObject AccessibleObject::getDeclaredAnnotation(JClass arg0)
	{
		return callObjectMethod(
			"getDeclaredAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	JArray AccessibleObject::getDeclaredAnnotations()
	{
		return callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		);
	}
	JArray AccessibleObject::getDeclaredAnnotationsByType(JClass arg0)
	{
		return callObjectMethod(
			"getDeclaredAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	jboolean AccessibleObject::isAccessible()
	{
		return callMethod<jboolean>(
			"isAccessible",
			"()Z"
		);
	}
	jboolean AccessibleObject::isAnnotationPresent(JClass arg0)
	{
		return callMethod<jboolean>(
			"isAnnotationPresent",
			"(Ljava/lang/Class;)Z",
			arg0.object<jclass>()
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

