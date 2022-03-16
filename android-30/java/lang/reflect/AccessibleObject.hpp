#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AccessibleObject.def.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void AccessibleObject::setAccessible(JArray arg0, jboolean arg1)
	{
		callStaticMethod<void>(
			"java.lang.reflect.AccessibleObject",
			"setAccessible",
			"([Ljava/lang/reflect/AccessibleObject;Z)V",
			arg0.object<jarray>(),
			arg1
		);
	}
	inline jboolean AccessibleObject::canAccess(JObject arg0) const
	{
		return callMethod<jboolean>(
			"canAccess",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject AccessibleObject::getAnnotation(JClass arg0) const
	{
		return callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	inline JArray AccessibleObject::getAnnotations() const
	{
		return callObjectMethod(
			"getAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		);
	}
	inline JArray AccessibleObject::getAnnotationsByType(JClass arg0) const
	{
		return callObjectMethod(
			"getAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	inline JObject AccessibleObject::getDeclaredAnnotation(JClass arg0) const
	{
		return callObjectMethod(
			"getDeclaredAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	inline JArray AccessibleObject::getDeclaredAnnotations() const
	{
		return callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		);
	}
	inline JArray AccessibleObject::getDeclaredAnnotationsByType(JClass arg0) const
	{
		return callObjectMethod(
			"getDeclaredAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	inline jboolean AccessibleObject::isAccessible() const
	{
		return callMethod<jboolean>(
			"isAccessible",
			"()Z"
		);
	}
	inline jboolean AccessibleObject::isAnnotationPresent(JClass arg0) const
	{
		return callMethod<jboolean>(
			"isAnnotationPresent",
			"(Ljava/lang/Class;)Z",
			arg0.object<jclass>()
		);
	}
	inline void AccessibleObject::setAccessible(jboolean arg0) const
	{
		callMethod<void>(
			"setAccessible",
			"(Z)V",
			arg0
		);
	}
	inline jboolean AccessibleObject::trySetAccessible() const
	{
		return callMethod<jboolean>(
			"trySetAccessible",
			"()Z"
		);
	}
} // namespace java::lang::reflect

// Base class headers

