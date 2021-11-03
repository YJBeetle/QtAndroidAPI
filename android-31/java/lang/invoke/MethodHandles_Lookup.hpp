#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JArray;
class JClass;
namespace java::lang
{
	class IllegalAccessException;
}
class JObject;
class JString;
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
		JClass accessClass(JClass arg0) const;
		java::lang::invoke::MethodHandle bind(JObject arg0, JString arg1, java::lang::invoke::MethodType arg2) const;
		JClass defineClass(JByteArray arg0) const;
		java::lang::invoke::MethodHandles_Lookup defineHiddenClass(JByteArray arg0, jboolean arg1, JArray arg2) const;
		java::lang::invoke::MethodHandles_Lookup defineHiddenClassWithClassData(JByteArray arg0, JObject arg1, jboolean arg2, JArray arg3) const;
		java::lang::invoke::MethodHandles_Lookup dropLookupMode(jint arg0) const;
		JClass ensureInitialized(JClass arg0) const;
		JClass findClass(JString arg0) const;
		java::lang::invoke::MethodHandle findConstructor(JClass arg0, java::lang::invoke::MethodType arg1) const;
		java::lang::invoke::MethodHandle findGetter(JClass arg0, JString arg1, JClass arg2) const;
		java::lang::invoke::MethodHandle findSetter(JClass arg0, JString arg1, JClass arg2) const;
		java::lang::invoke::MethodHandle findSpecial(JClass arg0, JString arg1, java::lang::invoke::MethodType arg2, JClass arg3) const;
		java::lang::invoke::MethodHandle findStatic(JClass arg0, JString arg1, java::lang::invoke::MethodType arg2) const;
		java::lang::invoke::MethodHandle findStaticGetter(JClass arg0, JString arg1, JClass arg2) const;
		java::lang::invoke::MethodHandle findStaticSetter(JClass arg0, JString arg1, JClass arg2) const;
		JObject findStaticVarHandle(JClass arg0, JString arg1, JClass arg2) const;
		JObject findVarHandle(JClass arg0, JString arg1, JClass arg2) const;
		java::lang::invoke::MethodHandle findVirtual(JClass arg0, JString arg1, java::lang::invoke::MethodType arg2) const;
		jboolean hasFullPrivilegeAccess() const;
		jboolean hasPrivateAccess() const;
		java::lang::invoke::MethodHandles_Lookup in(JClass arg0) const;
		JClass lookupClass() const;
		jint lookupModes() const;
		JClass previousLookupClass() const;
		JObject revealDirect(java::lang::invoke::MethodHandle arg0) const;
		JString toString() const;
		java::lang::invoke::MethodHandle unreflect(java::lang::reflect::Method arg0) const;
		java::lang::invoke::MethodHandle unreflectConstructor(java::lang::reflect::Constructor arg0) const;
		java::lang::invoke::MethodHandle unreflectGetter(java::lang::reflect::Field arg0) const;
		java::lang::invoke::MethodHandle unreflectSetter(java::lang::reflect::Field arg0) const;
		java::lang::invoke::MethodHandle unreflectSpecial(java::lang::reflect::Method arg0, JClass arg1) const;
		JObject unreflectVarHandle(java::lang::reflect::Field arg0) const;
	};
} // namespace java::lang::invoke

