#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../ClassLoader.hpp"
#include "../IndexOutOfBoundsException.hpp"
#include "../../util/Optional.hpp"
#include "./MethodType.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// QJniObject forward
	MethodType::MethodType(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::lang::invoke::MethodType MethodType::fromMethodDescriptorString(jstring arg0, java::lang::ClassLoader arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"fromMethodDescriptorString",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1.object()
		);
	}
	java::lang::invoke::MethodType MethodType::genericMethodType(jint arg0)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"genericMethodType",
			"(I)Ljava/lang/invoke/MethodType;",
			arg0
		);
	}
	java::lang::invoke::MethodType MethodType::genericMethodType(jint arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"genericMethodType",
			"(IZ)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1
		);
	}
	java::lang::invoke::MethodType MethodType::methodType(jclass arg0)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0
		);
	}
	java::lang::invoke::MethodType MethodType::methodType(jclass arg0, jarray arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1
		);
	}
	java::lang::invoke::MethodType MethodType::methodType(jclass arg0, jclass arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1
		);
	}
	java::lang::invoke::MethodType MethodType::methodType(jclass arg0, java::lang::invoke::MethodType arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1.object()
		);
	}
	java::lang::invoke::MethodType MethodType::methodType(jclass arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;Ljava/util/List;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1.object()
		);
	}
	java::lang::invoke::MethodType MethodType::methodType(jclass arg0, jclass arg1, jarray arg2)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1,
			arg2
		);
	}
	java::lang::invoke::MethodType MethodType::appendParameterTypes(jarray arg0)
	{
		return callObjectMethod(
			"appendParameterTypes",
			"([Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0
		);
	}
	java::lang::invoke::MethodType MethodType::appendParameterTypes(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"appendParameterTypes",
			"(Ljava/util/List;)Ljava/lang/invoke/MethodType;",
			arg0.object()
		);
	}
	java::lang::invoke::MethodType MethodType::changeParameterType(jint arg0, jclass arg1)
	{
		return callObjectMethod(
			"changeParameterType",
			"(ILjava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1
		);
	}
	__JniBaseClass MethodType::changeParameterType(jint arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"changeParameterType",
			"(ILjava/lang/invoke/TypeDescriptor$OfField;)Ljava/lang/invoke/TypeDescriptor$OfMethod;",
			arg0,
			arg1.object()
		);
	}
	java::lang::invoke::MethodType MethodType::changeReturnType(jclass arg0)
	{
		return callObjectMethod(
			"changeReturnType",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0
		);
	}
	__JniBaseClass MethodType::changeReturnType(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"changeReturnType",
			"(Ljava/lang/invoke/TypeDescriptor$OfField;)Ljava/lang/invoke/TypeDescriptor$OfMethod;",
			arg0.object()
		);
	}
	java::util::Optional MethodType::describeConstable()
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	jstring MethodType::descriptorString()
	{
		return callObjectMethod(
			"descriptorString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::lang::invoke::MethodType MethodType::dropParameterTypes(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"dropParameterTypes",
			"(II)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1
		);
	}
	jboolean MethodType::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	java::lang::invoke::MethodType MethodType::erase()
	{
		return callObjectMethod(
			"erase",
			"()Ljava/lang/invoke/MethodType;"
		);
	}
	java::lang::invoke::MethodType MethodType::generic()
	{
		return callObjectMethod(
			"generic",
			"()Ljava/lang/invoke/MethodType;"
		);
	}
	jboolean MethodType::hasPrimitives()
	{
		return callMethod<jboolean>(
			"hasPrimitives",
			"()Z"
		);
	}
	jboolean MethodType::hasWrappers()
	{
		return callMethod<jboolean>(
			"hasWrappers",
			"()Z"
		);
	}
	jint MethodType::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	java::lang::invoke::MethodType MethodType::insertParameterTypes(jint arg0, jarray arg1)
	{
		return callObjectMethod(
			"insertParameterTypes",
			"(I[Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1
		);
	}
	java::lang::invoke::MethodType MethodType::insertParameterTypes(jint arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"insertParameterTypes",
			"(ILjava/util/List;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1.object()
		);
	}
	jclass MethodType::lastParameterType()
	{
		return callObjectMethod(
			"lastParameterType",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jarray MethodType::parameterArray()
	{
		return callObjectMethod(
			"parameterArray",
			"()[Ljava/lang/Class;"
		).object<jarray>();
	}
	jint MethodType::parameterCount()
	{
		return callMethod<jint>(
			"parameterCount",
			"()I"
		);
	}
	__JniBaseClass MethodType::parameterList()
	{
		return callObjectMethod(
			"parameterList",
			"()Ljava/util/List;"
		);
	}
	jclass MethodType::parameterType(jint arg0)
	{
		return callObjectMethod(
			"parameterType",
			"(I)Ljava/lang/Class;",
			arg0
		).object<jclass>();
	}
	jclass MethodType::returnType()
	{
		return callObjectMethod(
			"returnType",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jstring MethodType::toMethodDescriptorString()
	{
		return callObjectMethod(
			"toMethodDescriptorString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MethodType::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::lang::invoke::MethodType MethodType::unwrap()
	{
		return callObjectMethod(
			"unwrap",
			"()Ljava/lang/invoke/MethodType;"
		);
	}
	java::lang::invoke::MethodType MethodType::wrap()
	{
		return callObjectMethod(
			"wrap",
			"()Ljava/lang/invoke/MethodType;"
		);
	}
} // namespace java::lang::invoke

