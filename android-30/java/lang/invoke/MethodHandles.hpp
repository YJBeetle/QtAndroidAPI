#pragma once

#include "../../../JObject.hpp"

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
	class MethodHandles : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MethodHandles(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MethodHandles(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::lang::invoke::MethodHandle arrayConstructor(jclass arg0);
		static java::lang::invoke::MethodHandle arrayElementGetter(jclass arg0);
		static java::lang::invoke::MethodHandle arrayElementSetter(jclass arg0);
		static JObject arrayElementVarHandle(jclass arg0);
		static java::lang::invoke::MethodHandle arrayLength(jclass arg0);
		static JObject byteArrayViewVarHandle(jclass arg0, java::nio::ByteOrder arg1);
		static JObject byteBufferViewVarHandle(jclass arg0, java::nio::ByteOrder arg1);
		static java::lang::invoke::MethodHandle catchException(java::lang::invoke::MethodHandle arg0, jclass arg1, java::lang::invoke::MethodHandle arg2);
		static jobject classData(java::lang::invoke::MethodHandles_Lookup arg0, jstring arg1, jclass arg2);
		static jobject classDataAt(java::lang::invoke::MethodHandles_Lookup arg0, jstring arg1, jclass arg2, jint arg3);
		static java::lang::invoke::MethodHandle collectArguments(java::lang::invoke::MethodHandle arg0, jint arg1, java::lang::invoke::MethodHandle arg2);
		static java::lang::invoke::MethodHandle constant(jclass arg0, jobject arg1);
		static java::lang::invoke::MethodHandle countedLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2);
		static java::lang::invoke::MethodHandle countedLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2, java::lang::invoke::MethodHandle arg3);
		static java::lang::invoke::MethodHandle doWhileLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2);
		static java::lang::invoke::MethodHandle dropArguments(java::lang::invoke::MethodHandle arg0, jint arg1, jarray arg2);
		static java::lang::invoke::MethodHandle dropArguments(java::lang::invoke::MethodHandle arg0, jint arg1, JObject arg2);
		static java::lang::invoke::MethodHandle dropArgumentsToMatch(java::lang::invoke::MethodHandle arg0, jint arg1, JObject arg2, jint arg3);
		static java::lang::invoke::MethodHandle dropReturn(java::lang::invoke::MethodHandle arg0);
		static java::lang::invoke::MethodHandle empty(java::lang::invoke::MethodType arg0);
		static java::lang::invoke::MethodHandle exactInvoker(java::lang::invoke::MethodType arg0);
		static java::lang::invoke::MethodHandle explicitCastArguments(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodType arg1);
		static java::lang::invoke::MethodHandle filterArguments(java::lang::invoke::MethodHandle arg0, jint arg1, jarray arg2);
		static java::lang::invoke::MethodHandle filterReturnValue(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1);
		static java::lang::invoke::MethodHandle foldArguments(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1);
		static java::lang::invoke::MethodHandle foldArguments(java::lang::invoke::MethodHandle arg0, jint arg1, java::lang::invoke::MethodHandle arg2);
		static java::lang::invoke::MethodHandle guardWithTest(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2);
		static java::lang::invoke::MethodHandle identity(jclass arg0);
		static java::lang::invoke::MethodHandle insertArguments(java::lang::invoke::MethodHandle arg0, jint arg1, jobjectArray arg2);
		static java::lang::invoke::MethodHandle invoker(java::lang::invoke::MethodType arg0);
		static java::lang::invoke::MethodHandle iteratedLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2);
		static java::lang::invoke::MethodHandles_Lookup lookup();
		static java::lang::invoke::MethodHandle loop(jarray arg0);
		static java::lang::invoke::MethodHandle permuteArguments(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodType arg1, jintArray arg2);
		static java::lang::invoke::MethodHandles_Lookup privateLookupIn(jclass arg0, java::lang::invoke::MethodHandles_Lookup arg1);
		static java::lang::invoke::MethodHandles_Lookup publicLookup();
		static JObject reflectAs(jclass arg0, java::lang::invoke::MethodHandle arg1);
		static java::lang::invoke::MethodHandle spreadInvoker(java::lang::invoke::MethodType arg0, jint arg1);
		static java::lang::invoke::MethodHandle throwException(jclass arg0, jclass arg1);
		static java::lang::invoke::MethodHandle tryFinally(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1);
		static java::lang::invoke::MethodHandle varHandleExactInvoker(JObject arg0, java::lang::invoke::MethodType arg1);
		static java::lang::invoke::MethodHandle varHandleInvoker(JObject arg0, java::lang::invoke::MethodType arg1);
		static java::lang::invoke::MethodHandle whileLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2);
		static java::lang::invoke::MethodHandle zero(jclass arg0);
	};
} // namespace java::lang::invoke

