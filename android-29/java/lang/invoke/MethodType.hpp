#pragma once

#ifndef JAVA_LANG_INVOKE_METHODTYPE
#define JAVA_LANG_INVOKE_METHODTYPE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Optional;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::java::lang
{
	class IndexOutOfBoundsException;
}

namespace __jni_impl::java::lang::invoke
{
	class MethodType : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jclass returnType();
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		QAndroidJniObject describeConstable();
		jstring descriptorString();
		QAndroidJniObject wrap();
		jclass parameterType(jint arg0);
		QAndroidJniObject insertParameterTypes(jint arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject insertParameterTypes(jint arg0, jarray arg1);
		QAndroidJniObject changeReturnType(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject changeReturnType(jclass arg0);
		static QAndroidJniObject methodType(jclass arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject methodType(jclass arg0, jarray arg1);
		static QAndroidJniObject methodType(jclass arg0);
		static QAndroidJniObject methodType(jclass arg0, jclass arg1, jarray arg2);
		static QAndroidJniObject methodType(jclass arg0, jclass arg1);
		static QAndroidJniObject methodType(jclass arg0, __jni_impl::java::lang::invoke::MethodType arg1);
		QAndroidJniObject dropParameterTypes(jint arg0, jint arg1);
		QAndroidJniObject appendParameterTypes(jarray arg0);
		QAndroidJniObject appendParameterTypes(__jni_impl::__JniBaseClass arg0);
		jint parameterCount();
		static QAndroidJniObject genericMethodType(jint arg0, jboolean arg1);
		static QAndroidJniObject genericMethodType(jint arg0);
		jclass lastParameterType();
		QAndroidJniObject parameterList();
		QAndroidJniObject erase();
		jstring toMethodDescriptorString();
		jarray parameterArray();
		jboolean hasPrimitives();
		QAndroidJniObject unwrap();
		QAndroidJniObject changeParameterType(jint arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject changeParameterType(jint arg0, jclass arg1);
		jboolean hasWrappers();
		QAndroidJniObject generic();
		static QAndroidJniObject fromMethodDescriptorString(jstring arg0, __jni_impl::java::lang::ClassLoader arg1);
		static QAndroidJniObject fromMethodDescriptorString(const QString &arg0, __jni_impl::java::lang::ClassLoader arg1);
	};
} // namespace __jni_impl::java::lang::invoke

#include "../../util/Optional.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../ClassLoader.hpp"
#include "../IndexOutOfBoundsException.hpp"

namespace __jni_impl::java::lang::invoke
{
	// Fields
	
	// Constructors
	void MethodType::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.MethodType",
			"(V)V");
	}
	
	// Methods
	jclass MethodType::returnType()
	{
		return __thiz.callObjectMethod(
			"returnType",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jboolean MethodType::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring MethodType::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MethodType::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject MethodType::describeConstable()
	{
		return __thiz.callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	jstring MethodType::descriptorString()
	{
		return __thiz.callObjectMethod(
			"descriptorString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MethodType::wrap()
	{
		return __thiz.callObjectMethod(
			"wrap",
			"()Ljava/lang/invoke/MethodType;"
		);
	}
	jclass MethodType::parameterType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"parameterType",
			"(I)Ljava/lang/Class;",
			arg0
		).object<jclass>();
	}
	QAndroidJniObject MethodType::insertParameterTypes(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"insertParameterTypes",
			"(ILjava/util/List;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodType::insertParameterTypes(jint arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"insertParameterTypes",
			"(I[Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MethodType::changeReturnType(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"changeReturnType",
			"(Ljava/lang/invoke/TypeDescriptor$OfField;)Ljava/lang/invoke/TypeDescriptor$OfMethod;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MethodType::changeReturnType(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"changeReturnType",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0
		);
	}
	QAndroidJniObject MethodType::methodType(jclass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;Ljava/util/List;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodType::methodType(jclass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MethodType::methodType(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0
		);
	}
	QAndroidJniObject MethodType::methodType(jclass arg0, jclass arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject MethodType::methodType(jclass arg0, jclass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MethodType::methodType(jclass arg0, __jni_impl::java::lang::invoke::MethodType arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodType::dropParameterTypes(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"dropParameterTypes",
			"(II)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MethodType::appendParameterTypes(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"appendParameterTypes",
			"([Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0
		);
	}
	QAndroidJniObject MethodType::appendParameterTypes(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"appendParameterTypes",
			"(Ljava/util/List;)Ljava/lang/invoke/MethodType;",
			arg0.__jniObject().object()
		);
	}
	jint MethodType::parameterCount()
	{
		return __thiz.callMethod<jint>(
			"parameterCount",
			"()I"
		);
	}
	QAndroidJniObject MethodType::genericMethodType(jint arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"genericMethodType",
			"(IZ)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MethodType::genericMethodType(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"genericMethodType",
			"(I)Ljava/lang/invoke/MethodType;",
			arg0
		);
	}
	jclass MethodType::lastParameterType()
	{
		return __thiz.callObjectMethod(
			"lastParameterType",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	QAndroidJniObject MethodType::parameterList()
	{
		return __thiz.callObjectMethod(
			"parameterList",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject MethodType::erase()
	{
		return __thiz.callObjectMethod(
			"erase",
			"()Ljava/lang/invoke/MethodType;"
		);
	}
	jstring MethodType::toMethodDescriptorString()
	{
		return __thiz.callObjectMethod(
			"toMethodDescriptorString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray MethodType::parameterArray()
	{
		return __thiz.callObjectMethod(
			"parameterArray",
			"()[Ljava/lang/Class;"
		).object<jarray>();
	}
	jboolean MethodType::hasPrimitives()
	{
		return __thiz.callMethod<jboolean>(
			"hasPrimitives",
			"()Z"
		);
	}
	QAndroidJniObject MethodType::unwrap()
	{
		return __thiz.callObjectMethod(
			"unwrap",
			"()Ljava/lang/invoke/MethodType;"
		);
	}
	QAndroidJniObject MethodType::changeParameterType(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"changeParameterType",
			"(ILjava/lang/invoke/TypeDescriptor$OfField;)Ljava/lang/invoke/TypeDescriptor$OfMethod;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodType::changeParameterType(jint arg0, jclass arg1)
	{
		return __thiz.callObjectMethod(
			"changeParameterType",
			"(ILjava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1
		);
	}
	jboolean MethodType::hasWrappers()
	{
		return __thiz.callMethod<jboolean>(
			"hasWrappers",
			"()Z"
		);
	}
	QAndroidJniObject MethodType::generic()
	{
		return __thiz.callObjectMethod(
			"generic",
			"()Ljava/lang/invoke/MethodType;"
		);
	}
	QAndroidJniObject MethodType::fromMethodDescriptorString(jstring arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"fromMethodDescriptorString",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodType::fromMethodDescriptorString(const QString &arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"fromMethodDescriptorString",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/invoke/MethodType;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::lang::invoke

namespace java::lang::invoke
{
	class MethodType : public __jni_impl::java::lang::invoke::MethodType
	{
	public:
		MethodType(QAndroidJniObject obj) { __thiz = obj; }
		MethodType()
		{
			__constructor();
		}
	};
} // namespace java::lang::invoke

#endif // JAVA_LANG_INVOKE_METHODTYPE

