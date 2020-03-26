#pragma once

#ifndef JAVA_LANG_INVOKE_METHODHANDLES
#define JAVA_LANG_INVOKE_METHODHANDLES

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class Permission;
}
namespace __jni_impl::java::lang::invoke
{
	class MethodHandles_Lookup;
}
namespace __jni_impl::java::lang::invoke
{
	class MethodHandle;
}
namespace __jni_impl::java::lang::invoke
{
	class MethodType;
}
namespace __jni_impl::java::lang
{
	class RuntimeException;
}
namespace __jni_impl::java::nio
{
	class ByteOrder;
}

namespace __jni_impl::java::lang::invoke
{
	class MethodHandles : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject lookup();
		static QAndroidJniObject throwException(jclass arg0, jclass arg1);
		static QAndroidJniObject empty(__jni_impl::java::lang::invoke::MethodType arg0);
		static QAndroidJniObject constant(jclass arg0, jobject arg1);
		static QAndroidJniObject identity(jclass arg0);
		static QAndroidJniObject spreadInvoker(__jni_impl::java::lang::invoke::MethodType arg0, jint arg1);
		static QAndroidJniObject arrayLength(jclass arg0);
		static QAndroidJniObject varHandleInvoker(__jni_impl::__JniBaseClass arg0, __jni_impl::java::lang::invoke::MethodType arg1);
		static QAndroidJniObject publicLookup();
		static QAndroidJniObject tryFinally(__jni_impl::java::lang::invoke::MethodHandle arg0, __jni_impl::java::lang::invoke::MethodHandle arg1);
		static QAndroidJniObject loop(jarray arg0);
		static QAndroidJniObject zero(jclass arg0);
		static QAndroidJniObject exactInvoker(__jni_impl::java::lang::invoke::MethodType arg0);
		static QAndroidJniObject foldArguments(__jni_impl::java::lang::invoke::MethodHandle arg0, jint arg1, __jni_impl::java::lang::invoke::MethodHandle arg2);
		static QAndroidJniObject foldArguments(__jni_impl::java::lang::invoke::MethodHandle arg0, __jni_impl::java::lang::invoke::MethodHandle arg1);
		static QAndroidJniObject invoker(__jni_impl::java::lang::invoke::MethodType arg0);
		static QAndroidJniObject reflectAs(jclass arg0, __jni_impl::java::lang::invoke::MethodHandle arg1);
		static QAndroidJniObject insertArguments(__jni_impl::java::lang::invoke::MethodHandle arg0, jint arg1, jobjectArray arg2);
		static QAndroidJniObject dropArguments(__jni_impl::java::lang::invoke::MethodHandle arg0, jint arg1, jarray arg2);
		static QAndroidJniObject dropArguments(__jni_impl::java::lang::invoke::MethodHandle arg0, jint arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject dropArgumentsToMatch(__jni_impl::java::lang::invoke::MethodHandle arg0, jint arg1, __jni_impl::__JniBaseClass arg2, jint arg3);
		static QAndroidJniObject countedLoop(__jni_impl::java::lang::invoke::MethodHandle arg0, __jni_impl::java::lang::invoke::MethodHandle arg1, __jni_impl::java::lang::invoke::MethodHandle arg2);
		static QAndroidJniObject countedLoop(__jni_impl::java::lang::invoke::MethodHandle arg0, __jni_impl::java::lang::invoke::MethodHandle arg1, __jni_impl::java::lang::invoke::MethodHandle arg2, __jni_impl::java::lang::invoke::MethodHandle arg3);
		static QAndroidJniObject permuteArguments(__jni_impl::java::lang::invoke::MethodHandle arg0, __jni_impl::java::lang::invoke::MethodType arg1, jintArray arg2);
		static QAndroidJniObject privateLookupIn(jclass arg0, __jni_impl::java::lang::invoke::MethodHandles_Lookup arg1);
		static QAndroidJniObject arrayConstructor(jclass arg0);
		static QAndroidJniObject arrayElementGetter(jclass arg0);
		static QAndroidJniObject arrayElementSetter(jclass arg0);
		static QAndroidJniObject arrayElementVarHandle(jclass arg0);
		static QAndroidJniObject byteArrayViewVarHandle(jclass arg0, __jni_impl::java::nio::ByteOrder arg1);
		static QAndroidJniObject byteBufferViewVarHandle(jclass arg0, __jni_impl::java::nio::ByteOrder arg1);
		static QAndroidJniObject varHandleExactInvoker(__jni_impl::__JniBaseClass arg0, __jni_impl::java::lang::invoke::MethodType arg1);
		static QAndroidJniObject explicitCastArguments(__jni_impl::java::lang::invoke::MethodHandle arg0, __jni_impl::java::lang::invoke::MethodType arg1);
		static QAndroidJniObject filterArguments(__jni_impl::java::lang::invoke::MethodHandle arg0, jint arg1, jarray arg2);
		static QAndroidJniObject collectArguments(__jni_impl::java::lang::invoke::MethodHandle arg0, jint arg1, __jni_impl::java::lang::invoke::MethodHandle arg2);
		static QAndroidJniObject filterReturnValue(__jni_impl::java::lang::invoke::MethodHandle arg0, __jni_impl::java::lang::invoke::MethodHandle arg1);
		static QAndroidJniObject guardWithTest(__jni_impl::java::lang::invoke::MethodHandle arg0, __jni_impl::java::lang::invoke::MethodHandle arg1, __jni_impl::java::lang::invoke::MethodHandle arg2);
		static QAndroidJniObject catchException(__jni_impl::java::lang::invoke::MethodHandle arg0, jclass arg1, __jni_impl::java::lang::invoke::MethodHandle arg2);
		static QAndroidJniObject whileLoop(__jni_impl::java::lang::invoke::MethodHandle arg0, __jni_impl::java::lang::invoke::MethodHandle arg1, __jni_impl::java::lang::invoke::MethodHandle arg2);
		static QAndroidJniObject doWhileLoop(__jni_impl::java::lang::invoke::MethodHandle arg0, __jni_impl::java::lang::invoke::MethodHandle arg1, __jni_impl::java::lang::invoke::MethodHandle arg2);
		static QAndroidJniObject iteratedLoop(__jni_impl::java::lang::invoke::MethodHandle arg0, __jni_impl::java::lang::invoke::MethodHandle arg1, __jni_impl::java::lang::invoke::MethodHandle arg2);
	};
} // namespace __jni_impl::java::lang::invoke

#include "../../security/Permission.hpp"
#include "MethodHandles_Lookup.hpp"
#include "MethodHandle.hpp"
#include "MethodType.hpp"
#include "../RuntimeException.hpp"
#include "../../nio/ByteOrder.hpp"

namespace __jni_impl::java::lang::invoke
{
	// Fields
	
	// Constructors
	void MethodHandles::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.MethodHandles",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MethodHandles::lookup()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"lookup",
			"()Ljava/lang/invoke/MethodHandles$Lookup;"
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
	QAndroidJniObject MethodHandles::empty(__jni_impl::java::lang::invoke::MethodType arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"empty",
			"(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object()
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
	QAndroidJniObject MethodHandles::identity(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"identity",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
	QAndroidJniObject MethodHandles::spreadInvoker(__jni_impl::java::lang::invoke::MethodType arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"spreadInvoker",
			"(Ljava/lang/invoke/MethodType;I)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1
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
	QAndroidJniObject MethodHandles::varHandleInvoker(__jni_impl::__JniBaseClass arg0, __jni_impl::java::lang::invoke::MethodType arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"varHandleInvoker",
			"(Ljava/lang/invoke/VarHandle$AccessMode;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
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
	QAndroidJniObject MethodHandles::tryFinally(__jni_impl::java::lang::invoke::MethodHandle arg0, __jni_impl::java::lang::invoke::MethodHandle arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"tryFinally",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
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
	QAndroidJniObject MethodHandles::zero(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"zero",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
	QAndroidJniObject MethodHandles::exactInvoker(__jni_impl::java::lang::invoke::MethodType arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"exactInvoker",
			"(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::foldArguments(__jni_impl::java::lang::invoke::MethodHandle arg0, jint arg1, __jni_impl::java::lang::invoke::MethodHandle arg2)
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
	QAndroidJniObject MethodHandles::foldArguments(__jni_impl::java::lang::invoke::MethodHandle arg0, __jni_impl::java::lang::invoke::MethodHandle arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"foldArguments",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::invoker(__jni_impl::java::lang::invoke::MethodType arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"invoker",
			"(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::reflectAs(jclass arg0, __jni_impl::java::lang::invoke::MethodHandle arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"reflectAs",
			"(Ljava/lang/Class;Ljava/lang/invoke/MethodHandle;)Ljava/lang/reflect/Member;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::insertArguments(__jni_impl::java::lang::invoke::MethodHandle arg0, jint arg1, jobjectArray arg2)
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
	QAndroidJniObject MethodHandles::dropArguments(__jni_impl::java::lang::invoke::MethodHandle arg0, jint arg1, jarray arg2)
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
	QAndroidJniObject MethodHandles::dropArguments(__jni_impl::java::lang::invoke::MethodHandle arg0, jint arg1, __jni_impl::__JniBaseClass arg2)
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
	QAndroidJniObject MethodHandles::dropArgumentsToMatch(__jni_impl::java::lang::invoke::MethodHandle arg0, jint arg1, __jni_impl::__JniBaseClass arg2, jint arg3)
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
	QAndroidJniObject MethodHandles::countedLoop(__jni_impl::java::lang::invoke::MethodHandle arg0, __jni_impl::java::lang::invoke::MethodHandle arg1, __jni_impl::java::lang::invoke::MethodHandle arg2)
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
	QAndroidJniObject MethodHandles::countedLoop(__jni_impl::java::lang::invoke::MethodHandle arg0, __jni_impl::java::lang::invoke::MethodHandle arg1, __jni_impl::java::lang::invoke::MethodHandle arg2, __jni_impl::java::lang::invoke::MethodHandle arg3)
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
	QAndroidJniObject MethodHandles::permuteArguments(__jni_impl::java::lang::invoke::MethodHandle arg0, __jni_impl::java::lang::invoke::MethodType arg1, jintArray arg2)
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
	QAndroidJniObject MethodHandles::privateLookupIn(jclass arg0, __jni_impl::java::lang::invoke::MethodHandles_Lookup arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"privateLookupIn",
			"(Ljava/lang/Class;Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/invoke/MethodHandles$Lookup;",
			arg0,
			arg1.__jniObject().object()
		);
	}
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
	QAndroidJniObject MethodHandles::byteArrayViewVarHandle(jclass arg0, __jni_impl::java::nio::ByteOrder arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"byteArrayViewVarHandle",
			"(Ljava/lang/Class;Ljava/nio/ByteOrder;)Ljava/lang/invoke/VarHandle;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::byteBufferViewVarHandle(jclass arg0, __jni_impl::java::nio::ByteOrder arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"byteBufferViewVarHandle",
			"(Ljava/lang/Class;Ljava/nio/ByteOrder;)Ljava/lang/invoke/VarHandle;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::varHandleExactInvoker(__jni_impl::__JniBaseClass arg0, __jni_impl::java::lang::invoke::MethodType arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"varHandleExactInvoker",
			"(Ljava/lang/invoke/VarHandle$AccessMode;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::explicitCastArguments(__jni_impl::java::lang::invoke::MethodHandle arg0, __jni_impl::java::lang::invoke::MethodType arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"explicitCastArguments",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::filterArguments(__jni_impl::java::lang::invoke::MethodHandle arg0, jint arg1, jarray arg2)
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
	QAndroidJniObject MethodHandles::collectArguments(__jni_impl::java::lang::invoke::MethodHandle arg0, jint arg1, __jni_impl::java::lang::invoke::MethodHandle arg2)
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
	QAndroidJniObject MethodHandles::filterReturnValue(__jni_impl::java::lang::invoke::MethodHandle arg0, __jni_impl::java::lang::invoke::MethodHandle arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"filterReturnValue",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodHandles::guardWithTest(__jni_impl::java::lang::invoke::MethodHandle arg0, __jni_impl::java::lang::invoke::MethodHandle arg1, __jni_impl::java::lang::invoke::MethodHandle arg2)
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
	QAndroidJniObject MethodHandles::catchException(__jni_impl::java::lang::invoke::MethodHandle arg0, jclass arg1, __jni_impl::java::lang::invoke::MethodHandle arg2)
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
	QAndroidJniObject MethodHandles::whileLoop(__jni_impl::java::lang::invoke::MethodHandle arg0, __jni_impl::java::lang::invoke::MethodHandle arg1, __jni_impl::java::lang::invoke::MethodHandle arg2)
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
	QAndroidJniObject MethodHandles::doWhileLoop(__jni_impl::java::lang::invoke::MethodHandle arg0, __jni_impl::java::lang::invoke::MethodHandle arg1, __jni_impl::java::lang::invoke::MethodHandle arg2)
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
	QAndroidJniObject MethodHandles::iteratedLoop(__jni_impl::java::lang::invoke::MethodHandle arg0, __jni_impl::java::lang::invoke::MethodHandle arg1, __jni_impl::java::lang::invoke::MethodHandle arg2)
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
} // namespace __jni_impl::java::lang::invoke

namespace java::lang::invoke
{
	class MethodHandles : public __jni_impl::java::lang::invoke::MethodHandles
	{
	public:
		MethodHandles(QAndroidJniObject obj) { __thiz = obj; }
		MethodHandles()
		{
			__constructor();
		}
	};
} // namespace java::lang::invoke

#endif // JAVA_LANG_INVOKE_METHODHANDLES

