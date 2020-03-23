#pragma once

#ifndef JAVA_LANG_INVOKE_METHODHANDLES_LOOKUP
#define JAVA_LANG_INVOKE_METHODHANDLES_LOOKUP

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class ProtectionDomain;
}
namespace __jni_impl::java::util::concurrent
{
	class ConcurrentHashMap;
}
namespace __jni_impl::java::lang::invoke
{
	class MethodHandle;
}
namespace __jni_impl::java::lang::invoke
{
	class MethodType;
}
namespace __jni_impl::java::lang::reflect
{
	class Method;
}
namespace __jni_impl::java::lang::reflect
{
	class Field;
}
namespace __jni_impl::java::lang::reflect
{
	class Constructor;
}

namespace __jni_impl::java::lang::invoke
{
	class MethodHandles_Lookup : public __JniBaseClass
	{
	public:
		// Fields
		static jint PUBLIC();
		static jint PRIVATE();
		static jint PROTECTED();
		static jint PACKAGE();
		static jint MODULE();
		static jint UNCONDITIONAL();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject findClass(jstring arg0);
		QAndroidJniObject defineClass(jbyteArray arg0);
		QAndroidJniObject in(jclass arg0);
		QAndroidJniObject revealDirect(__jni_impl::java::lang::invoke::MethodHandle arg0);
		QAndroidJniObject lookupClass();
		QAndroidJniObject findVirtual(jclass arg0, jstring arg1, __jni_impl::java::lang::invoke::MethodType arg2);
		QAndroidJniObject findStatic(jclass arg0, jstring arg1, __jni_impl::java::lang::invoke::MethodType arg2);
		QAndroidJniObject unreflect(__jni_impl::java::lang::reflect::Method arg0);
		jint lookupModes();
		QAndroidJniObject accessClass(jclass arg0);
		QAndroidJniObject bind(jobject arg0, jstring arg1, __jni_impl::java::lang::invoke::MethodType arg2);
		jboolean hasPrivateAccess();
		QAndroidJniObject dropLookupMode(jint arg0);
		QAndroidJniObject findConstructor(jclass arg0, __jni_impl::java::lang::invoke::MethodType arg1);
		QAndroidJniObject findSpecial(jclass arg0, jstring arg1, __jni_impl::java::lang::invoke::MethodType arg2, jclass arg3);
		QAndroidJniObject findGetter(jclass arg0, jstring arg1, jclass arg2);
		QAndroidJniObject findSetter(jclass arg0, jstring arg1, jclass arg2);
		QAndroidJniObject findVarHandle(jclass arg0, jstring arg1, jclass arg2);
		QAndroidJniObject findStaticGetter(jclass arg0, jstring arg1, jclass arg2);
		QAndroidJniObject findStaticSetter(jclass arg0, jstring arg1, jclass arg2);
		QAndroidJniObject findStaticVarHandle(jclass arg0, jstring arg1, jclass arg2);
		QAndroidJniObject unreflectSpecial(__jni_impl::java::lang::reflect::Method arg0, jclass arg1);
		QAndroidJniObject unreflectConstructor(__jni_impl::java::lang::reflect::Constructor arg0);
		QAndroidJniObject unreflectGetter(__jni_impl::java::lang::reflect::Field arg0);
		QAndroidJniObject unreflectSetter(__jni_impl::java::lang::reflect::Field arg0);
		QAndroidJniObject unreflectVarHandle(__jni_impl::java::lang::reflect::Field arg0);
	};
} // namespace __jni_impl::java::lang::invoke

#include "../../security/ProtectionDomain.hpp"
#include "../../util/concurrent/ConcurrentHashMap.hpp"
#include "MethodHandle.hpp"
#include "MethodType.hpp"
#include "../reflect/Method.hpp"
#include "../reflect/Field.hpp"
#include "../reflect/Constructor.hpp"

namespace __jni_impl::java::lang::invoke
{
	// Fields
	jint MethodHandles_Lookup::PUBLIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.invoke.MethodHandles$Lookup",
			"PUBLIC");
	}
	jint MethodHandles_Lookup::PRIVATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.invoke.MethodHandles$Lookup",
			"PRIVATE");
	}
	jint MethodHandles_Lookup::PROTECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.invoke.MethodHandles$Lookup",
			"PROTECTED");
	}
	jint MethodHandles_Lookup::PACKAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.invoke.MethodHandles$Lookup",
			"PACKAGE");
	}
	jint MethodHandles_Lookup::MODULE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.invoke.MethodHandles$Lookup",
			"MODULE");
	}
	jint MethodHandles_Lookup::UNCONDITIONAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.invoke.MethodHandles$Lookup",
			"UNCONDITIONAL");
	}
	
	// Constructors
	void MethodHandles_Lookup::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.MethodHandles$Lookup",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MethodHandles_Lookup::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject MethodHandles_Lookup::findClass(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"findClass",
			"(Ljava/lang/String;)Ljava/lang/Class;",
			arg0);
	}
	QAndroidJniObject MethodHandles_Lookup::defineClass(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"defineClass",
			"([B)Ljava/lang/Class;",
			arg0);
	}
	QAndroidJniObject MethodHandles_Lookup::in(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"in",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandles$Lookup;",
			arg0);
	}
	QAndroidJniObject MethodHandles_Lookup::revealDirect(__jni_impl::java::lang::invoke::MethodHandle arg0)
	{
		return __thiz.callObjectMethod(
			"revealDirect",
			"(Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandleInfo;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MethodHandles_Lookup::lookupClass()
	{
		return __thiz.callObjectMethod(
			"lookupClass",
			"()Ljava/lang/Class;");
	}
	QAndroidJniObject MethodHandles_Lookup::findVirtual(jclass arg0, jstring arg1, __jni_impl::java::lang::invoke::MethodType arg2)
	{
		return __thiz.callObjectMethod(
			"findVirtual",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject MethodHandles_Lookup::findStatic(jclass arg0, jstring arg1, __jni_impl::java::lang::invoke::MethodType arg2)
	{
		return __thiz.callObjectMethod(
			"findStatic",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject MethodHandles_Lookup::unreflect(__jni_impl::java::lang::reflect::Method arg0)
	{
		return __thiz.callObjectMethod(
			"unreflect",
			"(Ljava/lang/reflect/Method;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object());
	}
	jint MethodHandles_Lookup::lookupModes()
	{
		return __thiz.callMethod<jint>(
			"lookupModes",
			"()I");
	}
	QAndroidJniObject MethodHandles_Lookup::accessClass(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"accessClass",
			"(Ljava/lang/Class;)Ljava/lang/Class;",
			arg0);
	}
	QAndroidJniObject MethodHandles_Lookup::bind(jobject arg0, jstring arg1, __jni_impl::java::lang::invoke::MethodType arg2)
	{
		return __thiz.callObjectMethod(
			"bind",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	jboolean MethodHandles_Lookup::hasPrivateAccess()
	{
		return __thiz.callMethod<jboolean>(
			"hasPrivateAccess",
			"()Z");
	}
	QAndroidJniObject MethodHandles_Lookup::dropLookupMode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"dropLookupMode",
			"(I)Ljava/lang/invoke/MethodHandles$Lookup;",
			arg0);
	}
	QAndroidJniObject MethodHandles_Lookup::findConstructor(jclass arg0, __jni_impl::java::lang::invoke::MethodType arg1)
	{
		return __thiz.callObjectMethod(
			"findConstructor",
			"(Ljava/lang/Class;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject MethodHandles_Lookup::findSpecial(jclass arg0, jstring arg1, __jni_impl::java::lang::invoke::MethodType arg2, jclass arg3)
	{
		return __thiz.callObjectMethod(
			"findSpecial",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	QAndroidJniObject MethodHandles_Lookup::findGetter(jclass arg0, jstring arg1, jclass arg2)
	{
		return __thiz.callObjectMethod(
			"findGetter",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject MethodHandles_Lookup::findSetter(jclass arg0, jstring arg1, jclass arg2)
	{
		return __thiz.callObjectMethod(
			"findSetter",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject MethodHandles_Lookup::findVarHandle(jclass arg0, jstring arg1, jclass arg2)
	{
		return __thiz.callObjectMethod(
			"findVarHandle",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/VarHandle;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject MethodHandles_Lookup::findStaticGetter(jclass arg0, jstring arg1, jclass arg2)
	{
		return __thiz.callObjectMethod(
			"findStaticGetter",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject MethodHandles_Lookup::findStaticSetter(jclass arg0, jstring arg1, jclass arg2)
	{
		return __thiz.callObjectMethod(
			"findStaticSetter",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject MethodHandles_Lookup::findStaticVarHandle(jclass arg0, jstring arg1, jclass arg2)
	{
		return __thiz.callObjectMethod(
			"findStaticVarHandle",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/VarHandle;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject MethodHandles_Lookup::unreflectSpecial(__jni_impl::java::lang::reflect::Method arg0, jclass arg1)
	{
		return __thiz.callObjectMethod(
			"unreflectSpecial",
			"(Ljava/lang/reflect/Method;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject MethodHandles_Lookup::unreflectConstructor(__jni_impl::java::lang::reflect::Constructor arg0)
	{
		return __thiz.callObjectMethod(
			"unreflectConstructor",
			"(Ljava/lang/reflect/Constructor;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MethodHandles_Lookup::unreflectGetter(__jni_impl::java::lang::reflect::Field arg0)
	{
		return __thiz.callObjectMethod(
			"unreflectGetter",
			"(Ljava/lang/reflect/Field;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MethodHandles_Lookup::unreflectSetter(__jni_impl::java::lang::reflect::Field arg0)
	{
		return __thiz.callObjectMethod(
			"unreflectSetter",
			"(Ljava/lang/reflect/Field;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MethodHandles_Lookup::unreflectVarHandle(__jni_impl::java::lang::reflect::Field arg0)
	{
		return __thiz.callObjectMethod(
			"unreflectVarHandle",
			"(Ljava/lang/reflect/Field;)Ljava/lang/invoke/VarHandle;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::java::lang::invoke

namespace java::lang::invoke
{
	class MethodHandles_Lookup : public __jni_impl::java::lang::invoke::MethodHandles_Lookup
	{
	public:
		MethodHandles_Lookup(QAndroidJniObject obj) { __thiz = obj; }
		MethodHandles_Lookup()
		{
			__constructor();
		}
	};
} // namespace java::lang::invoke

#endif // JAVA_LANG_INVOKE_METHODHANDLES_LOOKUP

