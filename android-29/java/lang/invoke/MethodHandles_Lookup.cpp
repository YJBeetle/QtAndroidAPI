#include "../../../JByteArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JClass.hpp"
#include "../IllegalAccessException.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
		return getStaticField<jint>(
			"java.lang.invoke.MethodHandles$Lookup",
			"MODULE"
		);
	}
	jint MethodHandles_Lookup::ORIGINAL()
	{
		return getStaticField<jint>(
			"java.lang.invoke.MethodHandles$Lookup",
			"ORIGINAL"
		);
	}
	jint MethodHandles_Lookup::PACKAGE()
	{
		return getStaticField<jint>(
			"java.lang.invoke.MethodHandles$Lookup",
			"PACKAGE"
		);
	}
	jint MethodHandles_Lookup::PRIVATE()
	{
		return getStaticField<jint>(
			"java.lang.invoke.MethodHandles$Lookup",
			"PRIVATE"
		);
	}
	jint MethodHandles_Lookup::PROTECTED()
	{
		return getStaticField<jint>(
			"java.lang.invoke.MethodHandles$Lookup",
			"PROTECTED"
		);
	}
	jint MethodHandles_Lookup::PUBLIC()
	{
		return getStaticField<jint>(
			"java.lang.invoke.MethodHandles$Lookup",
			"PUBLIC"
		);
	}
	jint MethodHandles_Lookup::UNCONDITIONAL()
	{
		return getStaticField<jint>(
			"java.lang.invoke.MethodHandles$Lookup",
			"UNCONDITIONAL"
		);
	}
	
	// QAndroidJniObject forward
	MethodHandles_Lookup::MethodHandles_Lookup(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JClass MethodHandles_Lookup::accessClass(JClass arg0)
	{
		return callObjectMethod(
			"accessClass",
			"(Ljava/lang/Class;)Ljava/lang/Class;",
			arg0.object<jclass>()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles_Lookup::bind(JObject arg0, JString arg1, java::lang::invoke::MethodType arg2)
	{
		return callObjectMethod(
			"bind",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jobject>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	JClass MethodHandles_Lookup::defineClass(JByteArray arg0)
	{
		return callObjectMethod(
			"defineClass",
			"([B)Ljava/lang/Class;",
			arg0.object<jbyteArray>()
		);
	}
	java::lang::invoke::MethodHandles_Lookup MethodHandles_Lookup::defineHiddenClass(JByteArray arg0, jboolean arg1, JArray arg2)
	{
		return callObjectMethod(
			"defineHiddenClass",
			"([BZ[Ljava/lang/invoke/MethodHandles$Lookup$ClassOption;)Ljava/lang/invoke/MethodHandles$Lookup;",
			arg0.object<jbyteArray>(),
			arg1,
			arg2.object<jarray>()
		);
	}
	java::lang::invoke::MethodHandles_Lookup MethodHandles_Lookup::defineHiddenClassWithClassData(JByteArray arg0, JObject arg1, jboolean arg2, JArray arg3)
	{
		return callObjectMethod(
			"defineHiddenClassWithClassData",
			"([BLjava/lang/Object;Z[Ljava/lang/invoke/MethodHandles$Lookup$ClassOption;)Ljava/lang/invoke/MethodHandles$Lookup;",
			arg0.object<jbyteArray>(),
			arg1.object<jobject>(),
			arg2,
			arg3.object<jarray>()
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
	JClass MethodHandles_Lookup::ensureInitialized(JClass arg0)
	{
		return callObjectMethod(
			"ensureInitialized",
			"(Ljava/lang/Class;)Ljava/lang/Class;",
			arg0.object<jclass>()
		);
	}
	JClass MethodHandles_Lookup::findClass(JString arg0)
	{
		return callObjectMethod(
			"findClass",
			"(Ljava/lang/String;)Ljava/lang/Class;",
			arg0.object<jstring>()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles_Lookup::findConstructor(JClass arg0, java::lang::invoke::MethodType arg1)
	{
		return callObjectMethod(
			"findConstructor",
			"(Ljava/lang/Class;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jclass>(),
			arg1.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles_Lookup::findGetter(JClass arg0, JString arg1, JClass arg2)
	{
		return callObjectMethod(
			"findGetter",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jclass>(),
			arg1.object<jstring>(),
			arg2.object<jclass>()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles_Lookup::findSetter(JClass arg0, JString arg1, JClass arg2)
	{
		return callObjectMethod(
			"findSetter",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jclass>(),
			arg1.object<jstring>(),
			arg2.object<jclass>()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles_Lookup::findSpecial(JClass arg0, JString arg1, java::lang::invoke::MethodType arg2, JClass arg3)
	{
		return callObjectMethod(
			"findSpecial",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jclass>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object<jclass>()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles_Lookup::findStatic(JClass arg0, JString arg1, java::lang::invoke::MethodType arg2)
	{
		return callObjectMethod(
			"findStatic",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jclass>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles_Lookup::findStaticGetter(JClass arg0, JString arg1, JClass arg2)
	{
		return callObjectMethod(
			"findStaticGetter",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jclass>(),
			arg1.object<jstring>(),
			arg2.object<jclass>()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles_Lookup::findStaticSetter(JClass arg0, JString arg1, JClass arg2)
	{
		return callObjectMethod(
			"findStaticSetter",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jclass>(),
			arg1.object<jstring>(),
			arg2.object<jclass>()
		);
	}
	JObject MethodHandles_Lookup::findStaticVarHandle(JClass arg0, JString arg1, JClass arg2)
	{
		return callObjectMethod(
			"findStaticVarHandle",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/VarHandle;",
			arg0.object<jclass>(),
			arg1.object<jstring>(),
			arg2.object<jclass>()
		);
	}
	JObject MethodHandles_Lookup::findVarHandle(JClass arg0, JString arg1, JClass arg2)
	{
		return callObjectMethod(
			"findVarHandle",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/invoke/VarHandle;",
			arg0.object<jclass>(),
			arg1.object<jstring>(),
			arg2.object<jclass>()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles_Lookup::findVirtual(JClass arg0, JString arg1, java::lang::invoke::MethodType arg2)
	{
		return callObjectMethod(
			"findVirtual",
			"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jclass>(),
			arg1.object<jstring>(),
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
	java::lang::invoke::MethodHandles_Lookup MethodHandles_Lookup::in(JClass arg0)
	{
		return callObjectMethod(
			"in",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandles$Lookup;",
			arg0.object<jclass>()
		);
	}
	JClass MethodHandles_Lookup::lookupClass()
	{
		return callObjectMethod(
			"lookupClass",
			"()Ljava/lang/Class;"
		);
	}
	jint MethodHandles_Lookup::lookupModes()
	{
		return callMethod<jint>(
			"lookupModes",
			"()I"
		);
	}
	JClass MethodHandles_Lookup::previousLookupClass()
	{
		return callObjectMethod(
			"previousLookupClass",
			"()Ljava/lang/Class;"
		);
	}
	JObject MethodHandles_Lookup::revealDirect(java::lang::invoke::MethodHandle arg0)
	{
		return callObjectMethod(
			"revealDirect",
			"(Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandleInfo;",
			arg0.object()
		);
	}
	JString MethodHandles_Lookup::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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
	java::lang::invoke::MethodHandle MethodHandles_Lookup::unreflectSpecial(java::lang::reflect::Method arg0, JClass arg1)
	{
		return callObjectMethod(
			"unreflectSpecial",
			"(Ljava/lang/reflect/Method;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object<jclass>()
		);
	}
	JObject MethodHandles_Lookup::unreflectVarHandle(java::lang::reflect::Field arg0)
	{
		return callObjectMethod(
			"unreflectVarHandle",
			"(Ljava/lang/reflect/Field;)Ljava/lang/invoke/VarHandle;",
			arg0.object()
		);
	}
} // namespace java::lang::invoke

