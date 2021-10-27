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
	
	MethodHandles::MethodHandles(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject MethodHandles::arrayConstructor(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"arrayConstructor",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
	QAndroidJniObject MethodHandles::arrayElementGetter(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"arrayElementGetter",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
	QAndroidJniObject MethodHandles::arrayElementSetter(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"arrayElementSetter",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
	QAndroidJniObject MethodHandles::arrayElementVarHandle(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"arrayElementVarHandle",
			"(Ljava/lang/Class;)Ljava/lang/invoke/VarHandle;",
			arg0
		);
	}
	QAndroidJniObject MethodHandles::arrayLength(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"arrayLength",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
	QAndroidJniObject MethodHandles::byteArrayViewVarHandle(jclass arg0, java::nio::ByteOrder arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"byteArrayViewVarHandle",
			"(Ljava/lang/Class;Ljava/nio/ByteOrder;)Ljava/lang/invoke/VarHandle;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::byteBufferViewVarHandle(jclass arg0, java::nio::ByteOrder arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"byteBufferViewVarHandle",
			"(Ljava/lang/Class;Ljava/nio/ByteOrder;)Ljava/lang/invoke/VarHandle;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::catchException(java::lang::invoke::MethodHandle arg0, jclass arg1, java::lang::invoke::MethodHandle arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"catchException",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/Class;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jobject MethodHandles::classData(java::lang::invoke::MethodHandles_Lookup arg0, jstring arg1, jclass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"classData",
			"(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		).object<jobject>();
	}
	jobject MethodHandles::classData(java::lang::invoke::MethodHandles_Lookup arg0, const QString &arg1, jclass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"classData",
			"(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		).object<jobject>();
	}
	jobject MethodHandles::classDataAt(java::lang::invoke::MethodHandles_Lookup arg0, jstring arg1, jclass arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"classDataAt",
			"(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class;I)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		).object<jobject>();
	}
	jobject MethodHandles::classDataAt(java::lang::invoke::MethodHandles_Lookup arg0, const QString &arg1, jclass arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"classDataAt",
			"(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class;I)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		).object<jobject>();
	}
	QAndroidJniObject MethodHandles::collectArguments(java::lang::invoke::MethodHandle arg0, jint arg1, java::lang::invoke::MethodHandle arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"collectArguments",
			"(Ljava/lang/invoke/MethodHandle;ILjava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::constant(jclass arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"constant",
			"(Ljava/lang/Class;Ljava/lang/Object;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MethodHandles::countedLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"countedLoop",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::countedLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2, java::lang::invoke::MethodHandle arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"countedLoop",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::doWhileLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"doWhileLoop",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::dropArguments(java::lang::invoke::MethodHandle arg0, jint arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"dropArguments",
			"(Ljava/lang/invoke/MethodHandle;I[Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject MethodHandles::dropArguments(java::lang::invoke::MethodHandle arg0, jint arg1, __JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"dropArguments",
			"(Ljava/lang/invoke/MethodHandle;ILjava/util/List;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::dropArgumentsToMatch(java::lang::invoke::MethodHandle arg0, jint arg1, __JniBaseClass arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"dropArgumentsToMatch",
			"(Ljava/lang/invoke/MethodHandle;ILjava/util/List;I)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject MethodHandles::dropReturn(java::lang::invoke::MethodHandle arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"dropReturn",
			"(Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::empty(java::lang::invoke::MethodType arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"empty",
			"(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::exactInvoker(java::lang::invoke::MethodType arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"exactInvoker",
			"(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::explicitCastArguments(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodType arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"explicitCastArguments",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::filterArguments(java::lang::invoke::MethodHandle arg0, jint arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"filterArguments",
			"(Ljava/lang/invoke/MethodHandle;I[Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject MethodHandles::filterReturnValue(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"filterReturnValue",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::foldArguments(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"foldArguments",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::foldArguments(java::lang::invoke::MethodHandle arg0, jint arg1, java::lang::invoke::MethodHandle arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"foldArguments",
			"(Ljava/lang/invoke/MethodHandle;ILjava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::guardWithTest(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"guardWithTest",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::identity(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"identity",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
	QAndroidJniObject MethodHandles::insertArguments(java::lang::invoke::MethodHandle arg0, jint arg1, jobjectArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"insertArguments",
			"(Ljava/lang/invoke/MethodHandle;I[Ljava/lang/Object;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject MethodHandles::invoker(java::lang::invoke::MethodType arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"invoker",
			"(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::iteratedLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"iteratedLoop",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::lookup()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"lookup",
			"()Ljava/lang/invoke/MethodHandles$Lookup;"
		);
	}
	QAndroidJniObject MethodHandles::loop(jarray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"loop",
			"([[Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
	QAndroidJniObject MethodHandles::permuteArguments(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodType arg1, jintArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"permuteArguments",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;[I)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject MethodHandles::privateLookupIn(jclass arg0, java::lang::invoke::MethodHandles_Lookup arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"privateLookupIn",
			"(Ljava/lang/Class;Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/invoke/MethodHandles$Lookup;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::publicLookup()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"publicLookup",
			"()Ljava/lang/invoke/MethodHandles$Lookup;"
		);
	}
	QAndroidJniObject MethodHandles::reflectAs(jclass arg0, java::lang::invoke::MethodHandle arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"reflectAs",
			"(Ljava/lang/Class;Ljava/lang/invoke/MethodHandle;)Ljava/lang/reflect/Member;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::spreadInvoker(java::lang::invoke::MethodType arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"spreadInvoker",
			"(Ljava/lang/invoke/MethodType;I)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject MethodHandles::throwException(jclass arg0, jclass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"throwException",
			"(Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MethodHandles::tryFinally(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"tryFinally",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::varHandleExactInvoker(__JniBaseClass arg0, java::lang::invoke::MethodType arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"varHandleExactInvoker",
			"(Ljava/lang/invoke/VarHandle$AccessMode;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::varHandleInvoker(__JniBaseClass arg0, java::lang::invoke::MethodType arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"varHandleInvoker",
			"(Ljava/lang/invoke/VarHandle$AccessMode;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::whileLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"whileLoop",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::zero(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"zero",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
} // namespace java::lang::invoke

