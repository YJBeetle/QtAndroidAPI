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
	
	// QAndroidJniObject forward
	MethodHandles_Lookup::MethodHandles_Lookup(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jclass MethodHandles_Lookup::accessClass(jclass arg0)
	{
		return callObjectMethod(
			"accessClass",
			"(Ljava/lang/Class;)Ljava/lang/Class;",
			arg0
		).object<jclass>();
	}
	java::lang::invoke::MethodHandle MethodHandles_Lookup::bind(jobject arg0, jstring arg1, java::lang::invoke::MethodType arg2)
	{
		return callObjectMethod(
			"bind",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jclass MethodHandles_Lookup::defineClass(jbyteArray arg0)
	{
		return callObjectMethod(
			"defineClass",
			"([B)Ljava/lang/Class;",
			arg0
		).object<jclass>();
	}
	java::lang::invoke::MethodHandles_Lookup MethodHandles_Lookup::defineHiddenClass(jbyteArray arg0, jboolean arg1, jarray arg2)
	{
		return callObjectMethod(
			"defineHiddenClass",
			"([BZ[Ljava/lang/invoke/MethodHandles$Lookup$ClassOption;)Ljava/lang/invoke/MethodHandles$Lookup;",
			arg0,
			arg1,
			arg2
		);
	}
	java::lang::invoke::MethodHandles_Lookup MethodHandles_Lookup::defineHiddenClassWithClassData(jbyteArray arg0, jobject arg1, jboolean arg2, jarray arg3)
	{
		return callObjectMethod(
			"defineHiddenClassWithClassData",
			"([BLjava/lang/Object;Z[Ljava/lang/invoke/MethodHandles$Lookup$ClassOption;)Ljava/lang/invoke/MethodHandles$Lookup;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	java::lang::invoke::MethodHandles_Lookup MethodHandles_Lookup::dropLookupMode(jint arg0)
	{
		return callObjectMethod(
			"dropLookupMode",
			"(I)Ljava/lang/invoke/MethodHandles$Lookup;",
			arg0
		);
	}
	jclass MethodHandles_Lookup::ensureInitialized(jclass arg0)
	{
		return callObjectMethod(
			"ensureInitialized",
			"(Ljava/lang/Class;)Ljava/lang/Class;",
			arg0
		).object<jclass>();
	}
	jclass MethodHandles_Lookup::findClass(jstring arg0)
	{
		return callObjectMethod(
			"findClass",
			"(Ljava/lang/String;)Ljava/lang/Class;",
			arg0
		).object<jclass>();
	}
	java::lang::invoke::MethodHandle MethodHandles_Lookup::findConstructor(jclass arg0, java::lang::invoke::MethodType arg1)
	{
		return callObjectMethod(
			"findConstructor",
			"(Ljava/lang/Class;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles_Lookup::findGetter(jclass arg0, jstring arg1, jclass arg2)
	{
		return callObjectMethod(
			"findGetter",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2
		);
	}
	java::lang::invoke::MethodHandle MethodHandles_Lookup::findSetter(jclass arg0, jstring arg1, jclass arg2)
	{
		return callObjectMethod(
			"findSetter",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2
		);
	}
	java::lang::invoke::MethodHandle MethodHandles_Lookup::findSpecial(jclass arg0, jstring arg1, java::lang::invoke::MethodType arg2, jclass arg3)
	{
		return callObjectMethod(
			"findSpecial",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2.object(),
			arg3
		);
	}
	java::lang::invoke::MethodHandle MethodHandles_Lookup::findStatic(jclass arg0, jstring arg1, java::lang::invoke::MethodType arg2)
	{
		return callObjectMethod(
			"findStatic",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles_Lookup::findStaticGetter(jclass arg0, jstring arg1, jclass arg2)
	{
		return callObjectMethod(
			"findStaticGetter",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2
		);
	}
	java::lang::invoke::MethodHandle MethodHandles_Lookup::findStaticSetter(jclass arg0, jstring arg1, jclass arg2)
	{
		return callObjectMethod(
			"findStaticSetter",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2
		);
	}
	__JniBaseClass MethodHandles_Lookup::findStaticVarHandle(jclass arg0, jstring arg1, jclass arg2)
	{
		return callObjectMethod(
			"findStaticVarHandle",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/VarHandle;",
			arg0,
			arg1,
			arg2
		);
	}
	__JniBaseClass MethodHandles_Lookup::findVarHandle(jclass arg0, jstring arg1, jclass arg2)
	{
		return callObjectMethod(
			"findVarHandle",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/VarHandle;",
			arg0,
			arg1,
			arg2
		);
	}
	java::lang::invoke::MethodHandle MethodHandles_Lookup::findVirtual(jclass arg0, jstring arg1, java::lang::invoke::MethodType arg2)
	{
		return callObjectMethod(
			"findVirtual",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean MethodHandles_Lookup::hasFullPrivilegeAccess()
	{
		return callMethod<jboolean>(
			"hasFullPrivilegeAccess",
			"()Z"
		);
	}
	jboolean MethodHandles_Lookup::hasPrivateAccess()
	{
		return callMethod<jboolean>(
			"hasPrivateAccess",
			"()Z"
		);
	}
	java::lang::invoke::MethodHandles_Lookup MethodHandles_Lookup::in(jclass arg0)
	{
		return callObjectMethod(
			"in",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandles$Lookup;",
			arg0
		);
	}
	jclass MethodHandles_Lookup::lookupClass()
	{
		return callObjectMethod(
			"lookupClass",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jint MethodHandles_Lookup::lookupModes()
	{
		return callMethod<jint>(
			"lookupModes",
			"()I"
		);
	}
	jclass MethodHandles_Lookup::previousLookupClass()
	{
		return callObjectMethod(
			"previousLookupClass",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	__JniBaseClass MethodHandles_Lookup::revealDirect(java::lang::invoke::MethodHandle arg0)
	{
		return callObjectMethod(
			"revealDirect",
			"(Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandleInfo;",
			arg0.object()
		);
	}
	jstring MethodHandles_Lookup::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::lang::invoke::MethodHandle MethodHandles_Lookup::unreflect(java::lang::reflect::Method arg0)
	{
		return callObjectMethod(
			"unreflect",
			"(Ljava/lang/reflect/Method;)Ljava/lang/invoke/MethodHandle;",
			arg0.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles_Lookup::unreflectConstructor(java::lang::reflect::Constructor arg0)
	{
		return callObjectMethod(
			"unreflectConstructor",
			"(Ljava/lang/reflect/Constructor;)Ljava/lang/invoke/MethodHandle;",
			arg0.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles_Lookup::unreflectGetter(java::lang::reflect::Field arg0)
	{
		return callObjectMethod(
			"unreflectGetter",
			"(Ljava/lang/reflect/Field;)Ljava/lang/invoke/MethodHandle;",
			arg0.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles_Lookup::unreflectSetter(java::lang::reflect::Field arg0)
	{
		return callObjectMethod(
			"unreflectSetter",
			"(Ljava/lang/reflect/Field;)Ljava/lang/invoke/MethodHandle;",
			arg0.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles_Lookup::unreflectSpecial(java::lang::reflect::Method arg0, jclass arg1)
	{
		return callObjectMethod(
			"unreflectSpecial",
			"(Ljava/lang/reflect/Method;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass MethodHandles_Lookup::unreflectVarHandle(java::lang::reflect::Field arg0)
	{
		return callObjectMethod(
			"unreflectVarHandle",
			"(Ljava/lang/reflect/Field;)Ljava/lang/invoke/VarHandle;",
			arg0.object()
		);
	}
} // namespace java::lang::invoke

