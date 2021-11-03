#include "./Modifier.hpp"

namespace java::lang::reflect
{
	// Fields
	jint Modifier::ABSTRACT()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"ABSTRACT"
		);
	}
	jint Modifier::FINAL()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"FINAL"
		);
	}
	jint Modifier::INTERFACE()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"INTERFACE"
		);
	}
	jint Modifier::NATIVE()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"NATIVE"
		);
	}
	jint Modifier::PRIVATE()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"PRIVATE"
		);
	}
	jint Modifier::PROTECTED()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"PROTECTED"
		);
	}
	jint Modifier::PUBLIC()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"PUBLIC"
		);
	}
	jint Modifier::STATIC()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"STATIC"
		);
	}
	jint Modifier::STRICT()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"STRICT"
		);
	}
	jint Modifier::SYNCHRONIZED()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"SYNCHRONIZED"
		);
	}
	jint Modifier::TRANSIENT()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"TRANSIENT"
		);
	}
	jint Modifier::VOLATILE()
	{
		return getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"VOLATILE"
		);
	}
	
	// QAndroidJniObject forward
	Modifier::Modifier(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Modifier::classModifiers()
	{
		return callStaticMethod<jint>(
			"java.lang.reflect.Modifier",
			"classModifiers",
			"()I"
		);
	}
	jint Modifier::constructorModifiers()
	{
		return callStaticMethod<jint>(
			"java.lang.reflect.Modifier",
			"constructorModifiers",
			"()I"
		);
	}
	jint Modifier::fieldModifiers()
	{
		return callStaticMethod<jint>(
			"java.lang.reflect.Modifier",
			"fieldModifiers",
			"()I"
		);
	}
	jint Modifier::interfaceModifiers()
	{
		return callStaticMethod<jint>(
			"java.lang.reflect.Modifier",
			"interfaceModifiers",
			"()I"
		);
	}
	jboolean Modifier::isAbstract(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isAbstract",
			"(I)Z",
			arg0
		);
	}
	jboolean Modifier::isFinal(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isFinal",
			"(I)Z",
			arg0
		);
	}
	jboolean Modifier::isInterface(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isInterface",
			"(I)Z",
			arg0
		);
	}
	jboolean Modifier::isNative(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isNative",
			"(I)Z",
			arg0
		);
	}
	jboolean Modifier::isPrivate(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isPrivate",
			"(I)Z",
			arg0
		);
	}
	jboolean Modifier::isProtected(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isProtected",
			"(I)Z",
			arg0
		);
	}
	jboolean Modifier::isPublic(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isPublic",
			"(I)Z",
			arg0
		);
	}
	jboolean Modifier::isStatic(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isStatic",
			"(I)Z",
			arg0
		);
	}
	jboolean Modifier::isStrict(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isStrict",
			"(I)Z",
			arg0
		);
	}
	jboolean Modifier::isSynchronized(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isSynchronized",
			"(I)Z",
			arg0
		);
	}
	jboolean Modifier::isTransient(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isTransient",
			"(I)Z",
			arg0
		);
	}
	jboolean Modifier::isVolatile(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isVolatile",
			"(I)Z",
			arg0
		);
	}
	jint Modifier::methodModifiers()
	{
		return callStaticMethod<jint>(
			"java.lang.reflect.Modifier",
			"methodModifiers",
			"()I"
		);
	}
	jint Modifier::parameterModifiers()
	{
		return callStaticMethod<jint>(
			"java.lang.reflect.Modifier",
			"parameterModifiers",
			"()I"
		);
	}
	jstring Modifier::toString(jint arg0)
	{
		return callStaticObjectMethod(
			"java.lang.reflect.Modifier",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace java::lang::reflect

