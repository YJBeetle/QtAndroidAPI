#pragma once

#include "../../../JIntArray.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "./Array.def.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject Array::get(JObject arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.lang.reflect.Array",
			"get",
			"(Ljava/lang/Object;I)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline jboolean Array::getBoolean(JObject arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Array",
			"getBoolean",
			"(Ljava/lang/Object;I)Z",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline jbyte Array::getByte(JObject arg0, jint arg1)
	{
		return callStaticMethod<jbyte>(
			"java.lang.reflect.Array",
			"getByte",
			"(Ljava/lang/Object;I)B",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline jchar Array::getChar(JObject arg0, jint arg1)
	{
		return callStaticMethod<jchar>(
			"java.lang.reflect.Array",
			"getChar",
			"(Ljava/lang/Object;I)C",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline jdouble Array::getDouble(JObject arg0, jint arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.reflect.Array",
			"getDouble",
			"(Ljava/lang/Object;I)D",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline jfloat Array::getFloat(JObject arg0, jint arg1)
	{
		return callStaticMethod<jfloat>(
			"java.lang.reflect.Array",
			"getFloat",
			"(Ljava/lang/Object;I)F",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline jint Array::getInt(JObject arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.reflect.Array",
			"getInt",
			"(Ljava/lang/Object;I)I",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline jint Array::getLength(JObject arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.reflect.Array",
			"getLength",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jlong Array::getLong(JObject arg0, jint arg1)
	{
		return callStaticMethod<jlong>(
			"java.lang.reflect.Array",
			"getLong",
			"(Ljava/lang/Object;I)J",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline jshort Array::getShort(JObject arg0, jint arg1)
	{
		return callStaticMethod<jshort>(
			"java.lang.reflect.Array",
			"getShort",
			"(Ljava/lang/Object;I)S",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline JObject Array::newInstance(JClass arg0, JIntArray arg1)
	{
		return callStaticObjectMethod(
			"java.lang.reflect.Array",
			"newInstance",
			"(Ljava/lang/Class;[I)Ljava/lang/Object;",
			arg0.object<jclass>(),
			arg1.object<jintArray>()
		);
	}
	inline JObject Array::newInstance(JClass arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.lang.reflect.Array",
			"newInstance",
			"(Ljava/lang/Class;I)Ljava/lang/Object;",
			arg0.object<jclass>(),
			arg1
		);
	}
	inline void Array::set(JObject arg0, jint arg1, JObject arg2)
	{
		callStaticMethod<void>(
			"java.lang.reflect.Array",
			"set",
			"(Ljava/lang/Object;ILjava/lang/Object;)V",
			arg0.object<jobject>(),
			arg1,
			arg2.object<jobject>()
		);
	}
	inline void Array::setBoolean(JObject arg0, jint arg1, jboolean arg2)
	{
		callStaticMethod<void>(
			"java.lang.reflect.Array",
			"setBoolean",
			"(Ljava/lang/Object;IZ)V",
			arg0.object<jobject>(),
			arg1,
			arg2
		);
	}
	inline void Array::setByte(JObject arg0, jint arg1, jbyte arg2)
	{
		callStaticMethod<void>(
			"java.lang.reflect.Array",
			"setByte",
			"(Ljava/lang/Object;IB)V",
			arg0.object<jobject>(),
			arg1,
			arg2
		);
	}
	inline void Array::setChar(JObject arg0, jint arg1, jchar arg2)
	{
		callStaticMethod<void>(
			"java.lang.reflect.Array",
			"setChar",
			"(Ljava/lang/Object;IC)V",
			arg0.object<jobject>(),
			arg1,
			arg2
		);
	}
	inline void Array::setDouble(JObject arg0, jint arg1, jdouble arg2)
	{
		callStaticMethod<void>(
			"java.lang.reflect.Array",
			"setDouble",
			"(Ljava/lang/Object;ID)V",
			arg0.object<jobject>(),
			arg1,
			arg2
		);
	}
	inline void Array::setFloat(JObject arg0, jint arg1, jfloat arg2)
	{
		callStaticMethod<void>(
			"java.lang.reflect.Array",
			"setFloat",
			"(Ljava/lang/Object;IF)V",
			arg0.object<jobject>(),
			arg1,
			arg2
		);
	}
	inline void Array::setInt(JObject arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.lang.reflect.Array",
			"setInt",
			"(Ljava/lang/Object;II)V",
			arg0.object<jobject>(),
			arg1,
			arg2
		);
	}
	inline void Array::setLong(JObject arg0, jint arg1, jlong arg2)
	{
		callStaticMethod<void>(
			"java.lang.reflect.Array",
			"setLong",
			"(Ljava/lang/Object;IJ)V",
			arg0.object<jobject>(),
			arg1,
			arg2
		);
	}
	inline void Array::setShort(JObject arg0, jint arg1, jshort arg2)
	{
		callStaticMethod<void>(
			"java.lang.reflect.Array",
			"setShort",
			"(Ljava/lang/Object;IS)V",
			arg0.object<jobject>(),
			arg1,
			arg2
		);
	}
} // namespace java::lang::reflect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang::reflect;
#endif
