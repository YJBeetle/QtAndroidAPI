#pragma once

#include "../../../JString.hpp"
#include "./Modifier.def.hpp"

namespace java::lang::reflect
{
	// Fields
	inline jint Modifier::ABSTRACT()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"ABSTRACT"
		);
	}
	inline jint Modifier::FINAL()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"FINAL"
		);
	}
	inline jint Modifier::INTERFACE()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"INTERFACE"
		);
	}
	inline jint Modifier::NATIVE()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"NATIVE"
		);
	}
	inline jint Modifier::PRIVATE()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"PRIVATE"
		);
	}
	inline jint Modifier::PROTECTED()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"PROTECTED"
		);
	}
	inline jint Modifier::PUBLIC()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"PUBLIC"
		);
	}
	inline jint Modifier::STATIC()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"STATIC"
		);
	}
	inline jint Modifier::STRICT()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"STRICT"
		);
	}
	inline jint Modifier::SYNCHRONIZED()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"SYNCHRONIZED"
		);
	}
	inline jint Modifier::TRANSIENT()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"TRANSIENT"
		);
	}
	inline jint Modifier::VOLATILE()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"VOLATILE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint Modifier::classModifiers()
	{
		return callStaticMethod<jint>(
			"java.lang.reflect.Modifier",
			"classModifiers",
			"()I"
		);
	}
	inline jint Modifier::constructorModifiers()
	{
		return callStaticMethod<jint>(
			"java.lang.reflect.Modifier",
			"constructorModifiers",
			"()I"
		);
	}
	inline jint Modifier::fieldModifiers()
	{
		return callStaticMethod<jint>(
			"java.lang.reflect.Modifier",
			"fieldModifiers",
			"()I"
		);
	}
	inline jint Modifier::interfaceModifiers()
	{
		return callStaticMethod<jint>(
			"java.lang.reflect.Modifier",
			"interfaceModifiers",
			"()I"
		);
	}
	inline jboolean Modifier::isAbstract(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isAbstract",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Modifier::isFinal(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isFinal",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Modifier::isInterface(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isInterface",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Modifier::isNative(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isNative",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Modifier::isPrivate(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isPrivate",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Modifier::isProtected(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isProtected",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Modifier::isPublic(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isPublic",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Modifier::isStatic(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isStatic",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Modifier::isStrict(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isStrict",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Modifier::isSynchronized(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isSynchronized",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Modifier::isTransient(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isTransient",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Modifier::isVolatile(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isVolatile",
			"(I)Z",
			arg0
		);
	}
	inline jint Modifier::methodModifiers()
	{
		return callStaticMethod<jint>(
			"java.lang.reflect.Modifier",
			"methodModifiers",
			"()I"
		);
	}
	inline jint Modifier::parameterModifiers()
	{
		return callStaticMethod<jint>(
			"java.lang.reflect.Modifier",
			"parameterModifiers",
			"()I"
		);
	}
	inline JString Modifier::toString(jint arg0)
	{
		return callStaticObjectMethod(
			"java.lang.reflect.Modifier",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
} // namespace java::lang::reflect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang::reflect;
#endif
