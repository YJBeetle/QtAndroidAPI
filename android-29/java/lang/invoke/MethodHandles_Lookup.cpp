#include "../IllegalAccessException.hpp"
#include "./MethodHandle.hpp"
#include "./MethodType.hpp"
#include "../reflect/Constructor.hpp"
#include "../reflect/Field.hpp"
#include "../reflect/Method.hpp"
#include "../../security/ProtectionDomain.hpp"
#include "../../util/concurrent/ConcurrentHashMap.hpp"
#include "./MethodHandles_Lookup.hpp"

namespace java::lang::invoke
{
	// Fields
	jint MethodHandles_Lookup::MODULE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.invoke.MethodHandles$Lookup",
			"MODULE"
		);
	}
	jint MethodHandles_Lookup::ORIGINAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.invoke.MethodHandles$Lookup",
			"ORIGINAL"
		);
	}
	jint MethodHandles_Lookup::PACKAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.invoke.MethodHandles$Lookup",
			"PACKAGE"
		);
	}
	jint MethodHandles_Lookup::PRIVATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.invoke.MethodHandles$Lookup",
			"PRIVATE"
		);
	}
	jint MethodHandles_Lookup::PROTECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.invoke.MethodHandles$Lookup",
			"PROTECTED"
		);
	}
	jint MethodHandles_Lookup::PUBLIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.invoke.MethodHandles$Lookup",
			"PUBLIC"
		);
	}
	jint MethodHandles_Lookup::UNCONDITIONAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.invoke.MethodHandles$Lookup",
			"UNCONDITIONAL"
		);
	}
	
	MethodHandles_Lookup::MethodHandles_Lookup(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jclass MethodHandles_Lookup::accessClass(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"accessClass",
			"(Ljava/lang/Class;)Ljava/lang/Class;",
			arg0
		).object<jclass>();
	}
	QAndroidJniObject MethodHandles_Lookup::bind(jobject arg0, jstring arg1, java::lang::invoke::MethodType arg2)
	{
		return __thiz.callObjectMethod(
			"bind",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jclass MethodHandles_Lookup::defineClass(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"defineClass",
			"([B)Ljava/lang/Class;",
			arg0
		).object<jclass>();
	}
	QAndroidJniObject MethodHandles_Lookup::defineHiddenClass(jbyteArray arg0, jboolean arg1, jarray arg2)
	{
		return __thiz.callObjectMethod(
			"defineHiddenClass",
			"([BZ[Ljava/lang/invoke/MethodHandles$Lookup$ClassOption;)Ljava/lang/invoke/MethodHandles$Lookup;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject MethodHandles_Lookup::defineHiddenClassWithClassData(jbyteArray arg0, jobject arg1, jboolean arg2, jarray arg3)
	{
		return __thiz.callObjectMethod(
			"defineHiddenClassWithClassData",
			"([BLjava/lang/Object;Z[Ljava/lang/invoke/MethodHandles$Lookup$ClassOption;)Ljava/lang/invoke/MethodHandles$Lookup;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject MethodHandles_Lookup::dropLookupMode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"dropLookupMode",
			"(I)Ljava/lang/invoke/MethodHandles$Lookup;",
			arg0
		);
	}
	jclass MethodHandles_Lookup::ensureInitialized(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"ensureInitialized",
			"(Ljava/lang/Class;)Ljava/lang/Class;",
			arg0
		).object<jclass>();
	}
	jclass MethodHandles_Lookup::findClass(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"findClass",
			"(Ljava/lang/String;)Ljava/lang/Class;",
			arg0
		).object<jclass>();
	}
	QAndroidJniObject MethodHandles_Lookup::findConstructor(jclass arg0, java::lang::invoke::MethodType arg1)
	{
		return __thiz.callObjectMethod(
			"findConstructor",
			"(Ljava/lang/Class;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles_Lookup::findGetter(jclass arg0, jstring arg1, jclass arg2)
	{
		return __thiz.callObjectMethod(
			"findGetter",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject MethodHandles_Lookup::findSetter(jclass arg0, jstring arg1, jclass arg2)
	{
		return __thiz.callObjectMethod(
			"findSetter",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject MethodHandles_Lookup::findSpecial(jclass arg0, jstring arg1, java::lang::invoke::MethodType arg2, jclass arg3)
	{
		return __thiz.callObjectMethod(
			"findSpecial",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject MethodHandles_Lookup::findStatic(jclass arg0, jstring arg1, java::lang::invoke::MethodType arg2)
	{
		return __thiz.callObjectMethod(
			"findStatic",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles_Lookup::findStaticGetter(jclass arg0, jstring arg1, jclass arg2)
	{
		return __thiz.callObjectMethod(
			"findStaticGetter",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject MethodHandles_Lookup::findStaticSetter(jclass arg0, jstring arg1, jclass arg2)
	{
		return __thiz.callObjectMethod(
			"findStaticSetter",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject MethodHandles_Lookup::findStaticVarHandle(jclass arg0, jstring arg1, jclass arg2)
	{
		return __thiz.callObjectMethod(
			"findStaticVarHandle",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/VarHandle;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject MethodHandles_Lookup::findVarHandle(jclass arg0, jstring arg1, jclass arg2)
	{
		return __thiz.callObjectMethod(
			"findVarHandle",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/VarHandle;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject MethodHandles_Lookup::findVirtual(jclass arg0, jstring arg1, java::lang::invoke::MethodType arg2)
	{
		return __thiz.callObjectMethod(
			"findVirtual",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean MethodHandles_Lookup::hasFullPrivilegeAccess()
	{
		return __thiz.callMethod<jboolean>(
			"hasFullPrivilegeAccess",
			"()Z"
		);
	}
	jboolean MethodHandles_Lookup::hasPrivateAccess()
	{
		return __thiz.callMethod<jboolean>(
			"hasPrivateAccess",
			"()Z"
		);
	}
	QAndroidJniObject MethodHandles_Lookup::in(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"in",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandles$Lookup;",
			arg0
		);
	}
	jclass MethodHandles_Lookup::lookupClass()
	{
		return __thiz.callObjectMethod(
			"lookupClass",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jint MethodHandles_Lookup::lookupModes()
	{
		return __thiz.callMethod<jint>(
			"lookupModes",
			"()I"
		);
	}
	jclass MethodHandles_Lookup::previousLookupClass()
	{
		return __thiz.callObjectMethod(
			"previousLookupClass",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	QAndroidJniObject MethodHandles_Lookup::revealDirect(java::lang::invoke::MethodHandle arg0)
	{
		return __thiz.callObjectMethod(
			"revealDirect",
			"(Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandleInfo;",
			arg0.__jniObject().object()
		);
	}
	jstring MethodHandles_Lookup::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MethodHandles_Lookup::unreflect(java::lang::reflect::Method arg0)
	{
		return __thiz.callObjectMethod(
			"unreflect",
			"(Ljava/lang/reflect/Method;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles_Lookup::unreflectConstructor(java::lang::reflect::Constructor arg0)
	{
		return __thiz.callObjectMethod(
			"unreflectConstructor",
			"(Ljava/lang/reflect/Constructor;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles_Lookup::unreflectGetter(java::lang::reflect::Field arg0)
	{
		return __thiz.callObjectMethod(
			"unreflectGetter",
			"(Ljava/lang/reflect/Field;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles_Lookup::unreflectSetter(java::lang::reflect::Field arg0)
	{
		return __thiz.callObjectMethod(
			"unreflectSetter",
			"(Ljava/lang/reflect/Field;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles_Lookup::unreflectSpecial(java::lang::reflect::Method arg0, jclass arg1)
	{
		return __thiz.callObjectMethod(
			"unreflectSpecial",
			"(Ljava/lang/reflect/Method;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject MethodHandles_Lookup::unreflectVarHandle(java::lang::reflect::Field arg0)
	{
		return __thiz.callObjectMethod(
			"unreflectVarHandle",
			"(Ljava/lang/reflect/Field;)Ljava/lang/invoke/VarHandle;",
			arg0.__jniObject().object()
		);
	}
} // namespace java::lang::invoke

