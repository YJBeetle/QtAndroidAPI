#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../ClassLoader.hpp"
#include "../IndexOutOfBoundsException.hpp"
#include "../../util/Optional.hpp"
#include "./MethodType.hpp"

namespace java::lang::invoke
{
	// Fields
	
	MethodType::MethodType(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject MethodType::fromMethodDescriptorString(jstring arg0, java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"fromMethodDescriptorString",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodType::fromMethodDescriptorString(const QString &arg0, java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"fromMethodDescriptorString",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/invoke/MethodType;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
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
	QAndroidJniObject MethodType::methodType(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0
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
	QAndroidJniObject MethodType::methodType(jclass arg0, java::lang::invoke::MethodType arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MethodType::methodType(jclass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;Ljava/util/List;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1.__jniObject().object()
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
	QAndroidJniObject MethodType::appendParameterTypes(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"appendParameterTypes",
			"([Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0
		);
	}
	QAndroidJniObject MethodType::appendParameterTypes(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"appendParameterTypes",
			"(Ljava/util/List;)Ljava/lang/invoke/MethodType;",
			arg0.__jniObject().object()
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
	QAndroidJniObject MethodType::changeParameterType(jint arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"changeParameterType",
			"(ILjava/lang/invoke/TypeDescriptor$OfField;)Ljava/lang/invoke/TypeDescriptor$OfMethod;",
			arg0,
			arg1.__jniObject().object()
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
	QAndroidJniObject MethodType::changeReturnType(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"changeReturnType",
			"(Ljava/lang/invoke/TypeDescriptor$OfField;)Ljava/lang/invoke/TypeDescriptor$OfMethod;",
			arg0.__jniObject().object()
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
	QAndroidJniObject MethodType::dropParameterTypes(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"dropParameterTypes",
			"(II)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1
		);
	}
	jboolean MethodType::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject MethodType::erase()
	{
		return __thiz.callObjectMethod(
			"erase",
			"()Ljava/lang/invoke/MethodType;"
		);
	}
	QAndroidJniObject MethodType::generic()
	{
		return __thiz.callObjectMethod(
			"generic",
			"()Ljava/lang/invoke/MethodType;"
		);
	}
	jboolean MethodType::hasPrimitives()
	{
		return __thiz.callMethod<jboolean>(
			"hasPrimitives",
			"()Z"
		);
	}
	jboolean MethodType::hasWrappers()
	{
		return __thiz.callMethod<jboolean>(
			"hasWrappers",
			"()Z"
		);
	}
	jint MethodType::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
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
	QAndroidJniObject MethodType::insertParameterTypes(jint arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"insertParameterTypes",
			"(ILjava/util/List;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jclass MethodType::lastParameterType()
	{
		return __thiz.callObjectMethod(
			"lastParameterType",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jarray MethodType::parameterArray()
	{
		return __thiz.callObjectMethod(
			"parameterArray",
			"()[Ljava/lang/Class;"
		).object<jarray>();
	}
	jint MethodType::parameterCount()
	{
		return __thiz.callMethod<jint>(
			"parameterCount",
			"()I"
		);
	}
	QAndroidJniObject MethodType::parameterList()
	{
		return __thiz.callObjectMethod(
			"parameterList",
			"()Ljava/util/List;"
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
	jclass MethodType::returnType()
	{
		return __thiz.callObjectMethod(
			"returnType",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jstring MethodType::toMethodDescriptorString()
	{
		return __thiz.callObjectMethod(
			"toMethodDescriptorString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MethodType::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MethodType::unwrap()
	{
		return __thiz.callObjectMethod(
			"unwrap",
			"()Ljava/lang/invoke/MethodType;"
		);
	}
	QAndroidJniObject MethodType::wrap()
	{
		return __thiz.callObjectMethod(
			"wrap",
			"()Ljava/lang/invoke/MethodType;"
		);
	}
} // namespace java::lang::invoke

