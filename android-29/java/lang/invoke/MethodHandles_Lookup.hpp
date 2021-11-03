#pragma once

#include "../../../JObject.hpp"

namespace java::lang
{
	class IllegalAccessException;
}
namespace java::lang::invoke
{
	class MethodHandle;
}
namespace java::lang::invoke
{
	class MethodType;
}
namespace java::lang::reflect
{
	class Constructor;
}
namespace java::lang::reflect
{
	class Field;
}
namespace java::lang::reflect
{
	class Method;
}
namespace java::security
{
	class ProtectionDomain;
}
namespace java::util::concurrent
{
	class ConcurrentHashMap;
}

namespace java::lang::invoke
{
	class MethodHandles_Lookup : public JObject
	{
	public:
		// Fields
		static jint MODULE();
		static jint ORIGINAL();
		static jint PACKAGE();
		static jint PRIVATE();
		static jint PROTECTED();
		static jint PUBLIC();
		static jint UNCONDITIONAL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MethodHandles_Lookup(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MethodHandles_Lookup(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jclass accessClass(jclass arg0);
		java::lang::invoke::MethodHandle bind(jobject arg0, jstring arg1, java::lang::invoke::MethodType arg2);
		jclass defineClass(jbyteArray arg0);
		java::lang::invoke::MethodHandles_Lookup defineHiddenClass(jbyteArray arg0, jboolean arg1, jarray arg2);
		java::lang::invoke::MethodHandles_Lookup defineHiddenClassWithClassData(jbyteArray arg0, jobject arg1, jboolean arg2, jarray arg3);
		java::lang::invoke::MethodHandles_Lookup dropLookupMode(jint arg0);
		jclass ensureInitialized(jclass arg0);
		jclass findClass(jstring arg0);
		java::lang::invoke::MethodHandle findConstructor(jclass arg0, java::lang::invoke::MethodType arg1);
		java::lang::invoke::MethodHandle findGetter(jclass arg0, jstring arg1, jclass arg2);
		java::lang::invoke::MethodHandle findSetter(jclass arg0, jstring arg1, jclass arg2);
		java::lang::invoke::MethodHandle findSpecial(jclass arg0, jstring arg1, java::lang::invoke::MethodType arg2, jclass arg3);
		java::lang::invoke::MethodHandle findStatic(jclass arg0, jstring arg1, java::lang::invoke::MethodType arg2);
		java::lang::invoke::MethodHandle findStaticGetter(jclass arg0, jstring arg1, jclass arg2);
		java::lang::invoke::MethodHandle findStaticSetter(jclass arg0, jstring arg1, jclass arg2);
		JObject findStaticVarHandle(jclass arg0, jstring arg1, jclass arg2);
		JObject findVarHandle(jclass arg0, jstring arg1, jclass arg2);
		java::lang::invoke::MethodHandle findVirtual(jclass arg0, jstring arg1, java::lang::invoke::MethodType arg2);
		jboolean hasFullPrivilegeAccess();
		jboolean hasPrivateAccess();
		java::lang::invoke::MethodHandles_Lookup in(jclass arg0);
		jclass lookupClass();
		jint lookupModes();
		jclass previousLookupClass();
		JObject revealDirect(java::lang::invoke::MethodHandle arg0);
		jstring toString();
		java::lang::invoke::MethodHandle unreflect(java::lang::reflect::Method arg0);
		java::lang::invoke::MethodHandle unreflectConstructor(java::lang::reflect::Constructor arg0);
		java::lang::invoke::MethodHandle unreflectGetter(java::lang::reflect::Field arg0);
		java::lang::invoke::MethodHandle unreflectSetter(java::lang::reflect::Field arg0);
		java::lang::invoke::MethodHandle unreflectSpecial(java::lang::reflect::Method arg0, jclass arg1);
		JObject unreflectVarHandle(java::lang::reflect::Field arg0);
	};
} // namespace java::lang::invoke

