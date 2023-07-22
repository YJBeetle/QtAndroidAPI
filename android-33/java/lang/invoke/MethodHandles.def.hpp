#pragma once

#include "../../../JObject.hpp"

class JIntArray;
class JArray;
class JObjectArray;
class JArray;
class JArray;
class JClass;
class JObject;
namespace java::lang
{
	class RuntimeException;
}
class JString;
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
namespace java::lang::invoke
{
	class VarHandle;
}
namespace java::lang::invoke
{
	class VarHandle_AccessMode;
}
namespace java::nio
{
	class ByteOrder;
}

namespace java::lang::invoke
{
	class MethodHandles : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MethodHandles(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MethodHandles(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::lang::invoke::MethodHandle arrayConstructor(JClass arg0);
		static java::lang::invoke::MethodHandle arrayElementGetter(JClass arg0);
		static java::lang::invoke::MethodHandle arrayElementSetter(JClass arg0);
		static java::lang::invoke::VarHandle arrayElementVarHandle(JClass arg0);
		static java::lang::invoke::MethodHandle arrayLength(JClass arg0);
		static java::lang::invoke::VarHandle byteArrayViewVarHandle(JClass arg0, java::nio::ByteOrder arg1);
		static java::lang::invoke::VarHandle byteBufferViewVarHandle(JClass arg0, java::nio::ByteOrder arg1);
		static java::lang::invoke::MethodHandle catchException(java::lang::invoke::MethodHandle arg0, JClass arg1, java::lang::invoke::MethodHandle arg2);
		static JObject classData(java::lang::invoke::MethodHandles_Lookup arg0, JString arg1, JClass arg2);
		static JObject classDataAt(java::lang::invoke::MethodHandles_Lookup arg0, JString arg1, JClass arg2, jint arg3);
		static java::lang::invoke::MethodHandle collectArguments(java::lang::invoke::MethodHandle arg0, jint arg1, java::lang::invoke::MethodHandle arg2);
		static java::lang::invoke::VarHandle collectCoordinates(java::lang::invoke::VarHandle arg0, jint arg1, java::lang::invoke::MethodHandle arg2);
		static java::lang::invoke::MethodHandle constant(JClass arg0, JObject arg1);
		static java::lang::invoke::MethodHandle countedLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2);
		static java::lang::invoke::MethodHandle countedLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2, java::lang::invoke::MethodHandle arg3);
		static java::lang::invoke::MethodHandle doWhileLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2);
		static java::lang::invoke::MethodHandle dropArguments(java::lang::invoke::MethodHandle arg0, jint arg1, JArray arg2);
		static java::lang::invoke::MethodHandle dropArguments(java::lang::invoke::MethodHandle arg0, jint arg1, JObject arg2);
		static java::lang::invoke::MethodHandle dropArgumentsToMatch(java::lang::invoke::MethodHandle arg0, jint arg1, JObject arg2, jint arg3);
		static java::lang::invoke::VarHandle dropCoordinates(java::lang::invoke::VarHandle arg0, jint arg1, JArray arg2);
		static java::lang::invoke::MethodHandle dropReturn(java::lang::invoke::MethodHandle arg0);
		static java::lang::invoke::MethodHandle empty(java::lang::invoke::MethodType arg0);
		static java::lang::invoke::MethodHandle exactInvoker(java::lang::invoke::MethodType arg0);
		static java::lang::invoke::MethodHandle explicitCastArguments(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodType arg1);
		static java::lang::invoke::MethodHandle filterArguments(java::lang::invoke::MethodHandle arg0, jint arg1, JArray arg2);
		static java::lang::invoke::VarHandle filterCoordinates(java::lang::invoke::VarHandle arg0, jint arg1, JArray arg2);
		static java::lang::invoke::MethodHandle filterReturnValue(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1);
		static java::lang::invoke::VarHandle filterValue(java::lang::invoke::VarHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2);
		static java::lang::invoke::MethodHandle foldArguments(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1);
		static java::lang::invoke::MethodHandle foldArguments(java::lang::invoke::MethodHandle arg0, jint arg1, java::lang::invoke::MethodHandle arg2);
		static java::lang::invoke::MethodHandle guardWithTest(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2);
		static java::lang::invoke::MethodHandle identity(JClass arg0);
		static java::lang::invoke::MethodHandle insertArguments(java::lang::invoke::MethodHandle arg0, jint arg1, JObjectArray arg2);
		static java::lang::invoke::VarHandle insertCoordinates(java::lang::invoke::VarHandle arg0, jint arg1, JObjectArray arg2);
		static java::lang::invoke::MethodHandle invoker(java::lang::invoke::MethodType arg0);
		static java::lang::invoke::MethodHandle iteratedLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2);
		static java::lang::invoke::MethodHandles_Lookup lookup();
		static java::lang::invoke::MethodHandle loop(JArray arg0);
		static java::lang::invoke::VarHandle memorySegmentViewVarHandle(JObject arg0);
		static java::lang::invoke::MethodHandle permuteArguments(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodType arg1, JIntArray arg2);
		static java::lang::invoke::VarHandle permuteCoordinates(java::lang::invoke::VarHandle arg0, JObject arg1, JIntArray arg2);
		static java::lang::invoke::MethodHandles_Lookup privateLookupIn(JClass arg0, java::lang::invoke::MethodHandles_Lookup arg1);
		static java::lang::invoke::MethodHandles_Lookup publicLookup();
		static JObject reflectAs(JClass arg0, java::lang::invoke::MethodHandle arg1);
		static java::lang::invoke::MethodHandle spreadInvoker(java::lang::invoke::MethodType arg0, jint arg1);
		static java::lang::invoke::MethodHandle tableSwitch(java::lang::invoke::MethodHandle arg0, JArray arg1);
		static java::lang::invoke::MethodHandle throwException(JClass arg0, JClass arg1);
		static java::lang::invoke::MethodHandle tryFinally(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1);
		static java::lang::invoke::MethodHandle varHandleExactInvoker(java::lang::invoke::VarHandle_AccessMode arg0, java::lang::invoke::MethodType arg1);
		static java::lang::invoke::MethodHandle varHandleInvoker(java::lang::invoke::VarHandle_AccessMode arg0, java::lang::invoke::MethodType arg1);
		static java::lang::invoke::MethodHandle whileLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2);
		static java::lang::invoke::MethodHandle zero(JClass arg0);
	};
} // namespace java::lang::invoke

