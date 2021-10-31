#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::lang
{
	class RuntimeException;
}
namespace java::lang::invoke
{
	class MethodHandle;
}
namespace java::lang::invoke
{
	class MethodHandles_Lookup;
}
namespace java::lang::invoke
{
	class MethodType;
}
namespace java::nio
{
	class ByteOrder;
}
namespace java::security
{
	class Permission;
}

namespace java::lang::invoke
{
	class MethodHandles : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MethodHandles(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MethodHandles(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject arrayConstructor(jclass arg0);
		static QAndroidJniObject arrayElementGetter(jclass arg0);
		static QAndroidJniObject arrayElementSetter(jclass arg0);
		static QAndroidJniObject arrayElementVarHandle(jclass arg0);
		static QAndroidJniObject arrayLength(jclass arg0);
		static QAndroidJniObject byteArrayViewVarHandle(jclass arg0, java::nio::ByteOrder arg1);
		static QAndroidJniObject byteBufferViewVarHandle(jclass arg0, java::nio::ByteOrder arg1);
		static QAndroidJniObject catchException(java::lang::invoke::MethodHandle arg0, jclass arg1, java::lang::invoke::MethodHandle arg2);
		static jobject classData(java::lang::invoke::MethodHandles_Lookup arg0, jstring arg1, jclass arg2);
		static jobject classDataAt(java::lang::invoke::MethodHandles_Lookup arg0, jstring arg1, jclass arg2, jint arg3);
		static QAndroidJniObject collectArguments(java::lang::invoke::MethodHandle arg0, jint arg1, java::lang::invoke::MethodHandle arg2);
		static QAndroidJniObject constant(jclass arg0, jobject arg1);
		static QAndroidJniObject countedLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2);
		static QAndroidJniObject countedLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2, java::lang::invoke::MethodHandle arg3);
		static QAndroidJniObject doWhileLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2);
		static QAndroidJniObject dropArguments(java::lang::invoke::MethodHandle arg0, jint arg1, jarray arg2);
		static QAndroidJniObject dropArguments(java::lang::invoke::MethodHandle arg0, jint arg1, __JniBaseClass arg2);
		static QAndroidJniObject dropArgumentsToMatch(java::lang::invoke::MethodHandle arg0, jint arg1, __JniBaseClass arg2, jint arg3);
		static QAndroidJniObject dropReturn(java::lang::invoke::MethodHandle arg0);
		static QAndroidJniObject empty(java::lang::invoke::MethodType arg0);
		static QAndroidJniObject exactInvoker(java::lang::invoke::MethodType arg0);
		static QAndroidJniObject explicitCastArguments(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodType arg1);
		static QAndroidJniObject filterArguments(java::lang::invoke::MethodHandle arg0, jint arg1, jarray arg2);
		static QAndroidJniObject filterReturnValue(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1);
		static QAndroidJniObject foldArguments(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1);
		static QAndroidJniObject foldArguments(java::lang::invoke::MethodHandle arg0, jint arg1, java::lang::invoke::MethodHandle arg2);
		static QAndroidJniObject guardWithTest(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2);
		static QAndroidJniObject identity(jclass arg0);
		static QAndroidJniObject insertArguments(java::lang::invoke::MethodHandle arg0, jint arg1, jobjectArray arg2);
		static QAndroidJniObject invoker(java::lang::invoke::MethodType arg0);
		static QAndroidJniObject iteratedLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2);
		static QAndroidJniObject lookup();
		static QAndroidJniObject loop(jarray arg0);
		static QAndroidJniObject permuteArguments(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodType arg1, jintArray arg2);
		static QAndroidJniObject privateLookupIn(jclass arg0, java::lang::invoke::MethodHandles_Lookup arg1);
		static QAndroidJniObject publicLookup();
		static QAndroidJniObject reflectAs(jclass arg0, java::lang::invoke::MethodHandle arg1);
		static QAndroidJniObject spreadInvoker(java::lang::invoke::MethodType arg0, jint arg1);
		static QAndroidJniObject throwException(jclass arg0, jclass arg1);
		static QAndroidJniObject tryFinally(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1);
		static QAndroidJniObject varHandleExactInvoker(__JniBaseClass arg0, java::lang::invoke::MethodType arg1);
		static QAndroidJniObject varHandleInvoker(__JniBaseClass arg0, java::lang::invoke::MethodType arg1);
		static QAndroidJniObject whileLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2);
		static QAndroidJniObject zero(jclass arg0);
	};
} // namespace java::lang::invoke

