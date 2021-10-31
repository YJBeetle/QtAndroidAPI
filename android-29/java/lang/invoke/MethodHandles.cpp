#include "../RuntimeException.hpp"
#include "./MethodHandle.hpp"
#include "./MethodHandles_Lookup.hpp"
#include "./MethodType.hpp"
#include "../../nio/ByteOrder.hpp"
#include "../../security/Permission.hpp"
#include "./MethodHandles.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// QAndroidJniObject forward
	MethodHandles::MethodHandles(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::lang::invoke::MethodHandle MethodHandles::arrayConstructor(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"arrayConstructor",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::arrayElementGetter(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"arrayElementGetter",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::arrayElementSetter(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"arrayElementSetter",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
	__JniBaseClass MethodHandles::arrayElementVarHandle(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"arrayElementVarHandle",
			"(Ljava/lang/Class;)Ljava/lang/invoke/VarHandle;",
			arg0
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::arrayLength(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"arrayLength",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
	__JniBaseClass MethodHandles::byteArrayViewVarHandle(jclass arg0, java::nio::ByteOrder arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"byteArrayViewVarHandle",
			"(Ljava/lang/Class;Ljava/nio/ByteOrder;)Ljava/lang/invoke/VarHandle;",
			arg0,
			arg1.object()
		);
	}
	__JniBaseClass MethodHandles::byteBufferViewVarHandle(jclass arg0, java::nio::ByteOrder arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"byteBufferViewVarHandle",
			"(Ljava/lang/Class;Ljava/nio/ByteOrder;)Ljava/lang/invoke/VarHandle;",
			arg0,
			arg1.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::catchException(java::lang::invoke::MethodHandle arg0, jclass arg1, java::lang::invoke::MethodHandle arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"catchException",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/Class;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jobject MethodHandles::classData(java::lang::invoke::MethodHandles_Lookup arg0, jstring arg1, jclass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"classData",
			"(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;",
			arg0.object(),
			arg1,
			arg2
		).object<jobject>();
	}
	jobject MethodHandles::classDataAt(java::lang::invoke::MethodHandles_Lookup arg0, jstring arg1, jclass arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"classDataAt",
			"(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class;I)Ljava/lang/Object;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		).object<jobject>();
	}
	java::lang::invoke::MethodHandle MethodHandles::collectArguments(java::lang::invoke::MethodHandle arg0, jint arg1, java::lang::invoke::MethodHandle arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"collectArguments",
			"(Ljava/lang/invoke/MethodHandle;ILjava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::constant(jclass arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"constant",
			"(Ljava/lang/Class;Ljava/lang/Object;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::countedLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"countedLoop",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::countedLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2, java::lang::invoke::MethodHandle arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"countedLoop",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::doWhileLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"doWhileLoop",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::dropArguments(java::lang::invoke::MethodHandle arg0, jint arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"dropArguments",
			"(Ljava/lang/invoke/MethodHandle;I[Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::dropArguments(java::lang::invoke::MethodHandle arg0, jint arg1, __JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"dropArguments",
			"(Ljava/lang/invoke/MethodHandle;ILjava/util/List;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::dropArgumentsToMatch(java::lang::invoke::MethodHandle arg0, jint arg1, __JniBaseClass arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"dropArgumentsToMatch",
			"(Ljava/lang/invoke/MethodHandle;ILjava/util/List;I)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::dropReturn(java::lang::invoke::MethodHandle arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"dropReturn",
			"(Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::empty(java::lang::invoke::MethodType arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"empty",
			"(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::exactInvoker(java::lang::invoke::MethodType arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"exactInvoker",
			"(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::explicitCastArguments(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodType arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"explicitCastArguments",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::filterArguments(java::lang::invoke::MethodHandle arg0, jint arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"filterArguments",
			"(Ljava/lang/invoke/MethodHandle;I[Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::filterReturnValue(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"filterReturnValue",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::foldArguments(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"foldArguments",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::foldArguments(java::lang::invoke::MethodHandle arg0, jint arg1, java::lang::invoke::MethodHandle arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"foldArguments",
			"(Ljava/lang/invoke/MethodHandle;ILjava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::guardWithTest(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"guardWithTest",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::identity(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"identity",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::insertArguments(java::lang::invoke::MethodHandle arg0, jint arg1, jobjectArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"insertArguments",
			"(Ljava/lang/invoke/MethodHandle;I[Ljava/lang/Object;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::invoker(java::lang::invoke::MethodType arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"invoker",
			"(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::iteratedLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"iteratedLoop",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::invoke::MethodHandles_Lookup MethodHandles::lookup()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"lookup",
			"()Ljava/lang/invoke/MethodHandles$Lookup;"
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::loop(jarray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"loop",
			"([[Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::permuteArguments(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodType arg1, jintArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"permuteArguments",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;[I)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	java::lang::invoke::MethodHandles_Lookup MethodHandles::privateLookupIn(jclass arg0, java::lang::invoke::MethodHandles_Lookup arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"privateLookupIn",
			"(Ljava/lang/Class;Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/invoke/MethodHandles$Lookup;",
			arg0,
			arg1.object()
		);
	}
	java::lang::invoke::MethodHandles_Lookup MethodHandles::publicLookup()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"publicLookup",
			"()Ljava/lang/invoke/MethodHandles$Lookup;"
		);
	}
	__JniBaseClass MethodHandles::reflectAs(jclass arg0, java::lang::invoke::MethodHandle arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"reflectAs",
			"(Ljava/lang/Class;Ljava/lang/invoke/MethodHandle;)Ljava/lang/reflect/Member;",
			arg0,
			arg1.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::spreadInvoker(java::lang::invoke::MethodType arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"spreadInvoker",
			"(Ljava/lang/invoke/MethodType;I)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::throwException(jclass arg0, jclass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"throwException",
			"(Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::tryFinally(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"tryFinally",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::varHandleExactInvoker(__JniBaseClass arg0, java::lang::invoke::MethodType arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"varHandleExactInvoker",
			"(Ljava/lang/invoke/VarHandle$AccessMode;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::varHandleInvoker(__JniBaseClass arg0, java::lang::invoke::MethodType arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"varHandleInvoker",
			"(Ljava/lang/invoke/VarHandle$AccessMode;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::whileLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"whileLoop",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandles::zero(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"zero",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
} // namespace java::lang::invoke

