#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AccessibleObject.def.hpp"
#include "./Field.def.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean Field::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject Field::get(JObject arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline JObject Field::getAnnotatedType() const
	{
		return callObjectMethod(
			"getAnnotatedType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	inline JObject Field::getAnnotation(JClass arg0) const
	{
		return callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	inline JArray Field::getAnnotationsByType(JClass arg0) const
	{
		return callObjectMethod(
			"getAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	inline jboolean Field::getBoolean(JObject arg0) const
	{
		return callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jbyte Field::getByte(JObject arg0) const
	{
		return callMethod<jbyte>(
			"getByte",
			"(Ljava/lang/Object;)B",
			arg0.object<jobject>()
		);
	}
	inline jchar Field::getChar(JObject arg0) const
	{
		return callMethod<jchar>(
			"getChar",
			"(Ljava/lang/Object;)C",
			arg0.object<jobject>()
		);
	}
	inline JArray Field::getDeclaredAnnotations() const
	{
		return callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		);
	}
	inline JClass Field::getDeclaringClass() const
	{
		return callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;"
		);
	}
	inline jdouble Field::getDouble(JObject arg0) const
	{
		return callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/Object;)D",
			arg0.object<jobject>()
		);
	}
	inline jfloat Field::getFloat(JObject arg0) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/Object;)F",
			arg0.object<jobject>()
		);
	}
	inline JObject Field::getGenericType() const
	{
		return callObjectMethod(
			"getGenericType",
			"()Ljava/lang/reflect/Type;"
		);
	}
	inline jint Field::getInt(JObject arg0) const
	{
		return callMethod<jint>(
			"getInt",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jlong Field::getLong(JObject arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/Object;)J",
			arg0.object<jobject>()
		);
	}
	inline jint Field::getModifiers() const
	{
		return callMethod<jint>(
			"getModifiers",
			"()I"
		);
	}
	inline JString Field::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jshort Field::getShort(JObject arg0) const
	{
		return callMethod<jshort>(
			"getShort",
			"(Ljava/lang/Object;)S",
			arg0.object<jobject>()
		);
	}
	inline JClass Field::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/Class;"
		);
	}
	inline jint Field::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean Field::isEnumConstant() const
	{
		return callMethod<jboolean>(
			"isEnumConstant",
			"()Z"
		);
	}
	inline jboolean Field::isSynthetic() const
	{
		return callMethod<jboolean>(
			"isSynthetic",
			"()Z"
		);
	}
	inline void Field::set(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline void Field::setAccessible(jboolean arg0) const
	{
		callMethod<void>(
			"setAccessible",
			"(Z)V",
			arg0
		);
	}
	inline void Field::setBoolean(JObject arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setBoolean",
			"(Ljava/lang/Object;Z)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline void Field::setByte(JObject arg0, jbyte arg1) const
	{
		callMethod<void>(
			"setByte",
			"(Ljava/lang/Object;B)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline void Field::setChar(JObject arg0, jchar arg1) const
	{
		callMethod<void>(
			"setChar",
			"(Ljava/lang/Object;C)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline void Field::setDouble(JObject arg0, jdouble arg1) const
	{
		callMethod<void>(
			"setDouble",
			"(Ljava/lang/Object;D)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline void Field::setFloat(JObject arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setFloat",
			"(Ljava/lang/Object;F)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline void Field::setInt(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"setInt",
			"(Ljava/lang/Object;I)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline void Field::setLong(JObject arg0, jlong arg1) const
	{
		callMethod<void>(
			"setLong",
			"(Ljava/lang/Object;J)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline void Field::setShort(JObject arg0, jshort arg1) const
	{
		callMethod<void>(
			"setShort",
			"(Ljava/lang/Object;S)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline JString Field::toGenericString() const
	{
		return callObjectMethod(
			"toGenericString",
			"()Ljava/lang/String;"
		);
	}
	inline JString Field::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang::reflect

// Base class headers
#include "./AccessibleObject.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang::reflect;
#endif
