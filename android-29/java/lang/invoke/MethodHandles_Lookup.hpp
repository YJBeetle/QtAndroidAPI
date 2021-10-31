#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class MethodHandles_Lookup : public __JniBaseClass
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
		template<typename ...Ts> explicit MethodHandles_Lookup(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MethodHandles_Lookup(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jclass accessClass(jclass arg0);
		QAndroidJniObject bind(jobject arg0, jstring arg1, java::lang::invoke::MethodType arg2);
		jclass defineClass(jbyteArray arg0);
		QAndroidJniObject defineHiddenClass(jbyteArray arg0, jboolean arg1, jarray arg2);
		QAndroidJniObject defineHiddenClassWithClassData(jbyteArray arg0, jobject arg1, jboolean arg2, jarray arg3);
		QAndroidJniObject dropLookupMode(jint arg0);
		jclass ensureInitialized(jclass arg0);
		jclass findClass(jstring arg0);
		QAndroidJniObject findConstructor(jclass arg0, java::lang::invoke::MethodType arg1);
		QAndroidJniObject findGetter(jclass arg0, jstring arg1, jclass arg2);
		QAndroidJniObject findSetter(jclass arg0, jstring arg1, jclass arg2);
		QAndroidJniObject findSpecial(jclass arg0, jstring arg1, java::lang::invoke::MethodType arg2, jclass arg3);
		QAndroidJniObject findStatic(jclass arg0, jstring arg1, java::lang::invoke::MethodType arg2);
		QAndroidJniObject findStaticGetter(jclass arg0, jstring arg1, jclass arg2);
		QAndroidJniObject findStaticSetter(jclass arg0, jstring arg1, jclass arg2);
		QAndroidJniObject findStaticVarHandle(jclass arg0, jstring arg1, jclass arg2);
		QAndroidJniObject findVarHandle(jclass arg0, jstring arg1, jclass arg2);
		QAndroidJniObject findVirtual(jclass arg0, jstring arg1, java::lang::invoke::MethodType arg2);
		jboolean hasFullPrivilegeAccess();
		jboolean hasPrivateAccess();
		QAndroidJniObject in(jclass arg0);
		jclass lookupClass();
		jint lookupModes();
		jclass previousLookupClass();
		QAndroidJniObject revealDirect(java::lang::invoke::MethodHandle arg0);
		jstring toString();
		QAndroidJniObject unreflect(java::lang::reflect::Method arg0);
		QAndroidJniObject unreflectConstructor(java::lang::reflect::Constructor arg0);
		QAndroidJniObject unreflectGetter(java::lang::reflect::Field arg0);
		QAndroidJniObject unreflectSetter(java::lang::reflect::Field arg0);
		QAndroidJniObject unreflectSpecial(java::lang::reflect::Method arg0, jclass arg1);
		QAndroidJniObject unreflectVarHandle(java::lang::reflect::Field arg0);
	};
} // namespace java::lang::invoke

