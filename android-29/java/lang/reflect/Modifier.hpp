#pragma once

#ifndef JAVA_LANG_REFLECT_MODIFIER
#define JAVA_LANG_REFLECT_MODIFIER

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::lang::reflect
{
	class Modifier : public __JniBaseClass
	{
	public:
		// Fields
		static jint PUBLIC();
		static jint PRIVATE();
		static jint PROTECTED();
		static jint STATIC();
		static jint FINAL();
		static jint SYNCHRONIZED();
		static jint VOLATILE();
		static jint TRANSIENT();
		static jint NATIVE();
		static jint INTERFACE();
		static jint ABSTRACT();
		static jint STRICT();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring toString(jint arg0);
		static jboolean isInterface(jint arg0);
		static jint classModifiers();
		static jboolean isStatic(jint arg0);
		static jboolean isPublic(jint arg0);
		static jboolean isProtected(jint arg0);
		static jint methodModifiers();
		static jint constructorModifiers();
		static jboolean isFinal(jint arg0);
		static jboolean isAbstract(jint arg0);
		static jboolean isVolatile(jint arg0);
		static jboolean isPrivate(jint arg0);
		static jboolean isNative(jint arg0);
		static jboolean isSynchronized(jint arg0);
		static jboolean isTransient(jint arg0);
		static jboolean isStrict(jint arg0);
		static jint interfaceModifiers();
		static jint fieldModifiers();
		static jint parameterModifiers();
	};
} // namespace __jni_impl::java::lang::reflect


namespace __jni_impl::java::lang::reflect
{
	// Fields
	jint Modifier::PUBLIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"PUBLIC"
		);
	}
	jint Modifier::PRIVATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"PRIVATE"
		);
	}
	jint Modifier::PROTECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"PROTECTED"
		);
	}
	jint Modifier::STATIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"STATIC"
		);
	}
	jint Modifier::FINAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"FINAL"
		);
	}
	jint Modifier::SYNCHRONIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"SYNCHRONIZED"
		);
	}
	jint Modifier::VOLATILE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"VOLATILE"
		);
	}
	jint Modifier::TRANSIENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"TRANSIENT"
		);
	}
	jint Modifier::NATIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"NATIVE"
		);
	}
	jint Modifier::INTERFACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"INTERFACE"
		);
	}
	jint Modifier::ABSTRACT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"ABSTRACT"
		);
	}
	jint Modifier::STRICT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.reflect.Modifier",
			"STRICT"
		);
	}
	
	// Constructors
	void Modifier::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.Modifier",
			"()V");
	}
	
	// Methods
	jstring Modifier::toString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.reflect.Modifier",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean Modifier::isInterface(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isInterface",
			"(I)Z",
			arg0
		);
	}
	jint Modifier::classModifiers()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.reflect.Modifier",
			"classModifiers",
			"()I"
		);
	}
	jboolean Modifier::isStatic(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isStatic",
			"(I)Z",
			arg0
		);
	}
	jboolean Modifier::isPublic(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isPublic",
			"(I)Z",
			arg0
		);
	}
	jboolean Modifier::isProtected(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isProtected",
			"(I)Z",
			arg0
		);
	}
	jint Modifier::methodModifiers()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.reflect.Modifier",
			"methodModifiers",
			"()I"
		);
	}
	jint Modifier::constructorModifiers()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.reflect.Modifier",
			"constructorModifiers",
			"()I"
		);
	}
	jboolean Modifier::isFinal(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isFinal",
			"(I)Z",
			arg0
		);
	}
	jboolean Modifier::isAbstract(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isAbstract",
			"(I)Z",
			arg0
		);
	}
	jboolean Modifier::isVolatile(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isVolatile",
			"(I)Z",
			arg0
		);
	}
	jboolean Modifier::isPrivate(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isPrivate",
			"(I)Z",
			arg0
		);
	}
	jboolean Modifier::isNative(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isNative",
			"(I)Z",
			arg0
		);
	}
	jboolean Modifier::isSynchronized(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isSynchronized",
			"(I)Z",
			arg0
		);
	}
	jboolean Modifier::isTransient(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isTransient",
			"(I)Z",
			arg0
		);
	}
	jboolean Modifier::isStrict(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.reflect.Modifier",
			"isStrict",
			"(I)Z",
			arg0
		);
	}
	jint Modifier::interfaceModifiers()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.reflect.Modifier",
			"interfaceModifiers",
			"()I"
		);
	}
	jint Modifier::fieldModifiers()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.reflect.Modifier",
			"fieldModifiers",
			"()I"
		);
	}
	jint Modifier::parameterModifiers()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.reflect.Modifier",
			"parameterModifiers",
			"()I"
		);
	}
} // namespace __jni_impl::java::lang::reflect

namespace java::lang::reflect
{
	class Modifier : public __jni_impl::java::lang::reflect::Modifier
	{
	public:
		Modifier(QAndroidJniObject obj) { __thiz = obj; }
		Modifier()
		{
			__constructor();
		}
	};
} // namespace java::lang::reflect

#endif // JAVA_LANG_REFLECT_MODIFIER

