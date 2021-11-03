#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../../../JClass.hpp"
#include "../ClassLoader.hpp"
#include "../IndexOutOfBoundsException.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../util/Optional.hpp"
#include "./MethodType.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// QAndroidJniObject forward
	MethodType::MethodType(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::lang::invoke::MethodType MethodType::fromMethodDescriptorString(JString arg0, java::lang::ClassLoader arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"fromMethodDescriptorString",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/invoke/MethodType;",
			arg0.object<jstring>(),
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
	java::lang::invoke::MethodType MethodType::methodType(JClass arg0)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0.object<jclass>()
		);
	}
	java::lang::invoke::MethodType MethodType::methodType(JClass arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0.object<jclass>(),
			arg1.object<jarray>()
		);
	}
	java::lang::invoke::MethodType MethodType::methodType(JClass arg0, JClass arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0.object<jclass>(),
			arg1.object<jclass>()
		);
	}
	java::lang::invoke::MethodType MethodType::methodType(JClass arg0, java::lang::invoke::MethodType arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodType;",
			arg0.object<jclass>(),
			arg1.object()
		);
	}
	java::lang::invoke::MethodType MethodType::methodType(JClass arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;Ljava/util/List;)Ljava/lang/invoke/MethodType;",
			arg0.object<jclass>(),
			arg1.object()
		);
	}
	java::lang::invoke::MethodType MethodType::methodType(JClass arg0, JClass arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0.object<jclass>(),
			arg1.object<jclass>(),
			arg2.object<jarray>()
		);
	}
	java::lang::invoke::MethodType MethodType::appendParameterTypes(JArray arg0)
	{
		return callObjectMethod(
			"appendParameterTypes",
			"([Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0.object<jarray>()
		);
	}
	java::lang::invoke::MethodType MethodType::appendParameterTypes(JObject arg0)
	{
		return callObjectMethod(
			"appendParameterTypes",
			"(Ljava/util/List;)Ljava/lang/invoke/MethodType;",
			arg0.object()
		);
	}
	java::lang::invoke::MethodType MethodType::changeParameterType(jint arg0, JClass arg1)
	{
		return callObjectMethod(
			"changeParameterType",
			"(ILjava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1.object<jclass>()
		);
	}
	JObject MethodType::changeParameterType(jint arg0, JObject arg1)
	{
		return callObjectMethod(
			"changeParameterType",
			"(ILjava/lang/invoke/TypeDescriptor$OfField;)Ljava/lang/invoke/TypeDescriptor$OfMethod;",
			arg0,
			arg1.object()
		);
	}
	java::lang::invoke::MethodType MethodType::changeReturnType(JClass arg0)
	{
		return callObjectMethod(
			"changeReturnType",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0.object<jclass>()
		);
	}
	JObject MethodType::changeReturnType(JObject arg0)
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
	JString MethodType::descriptorString()
	{
		return callObjectMethod(
			"descriptorString",
			"()Ljava/lang/String;"
		);
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
	jboolean MethodType::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
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
	java::lang::invoke::MethodType MethodType::insertParameterTypes(jint arg0, JArray arg1)
	{
		return callObjectMethod(
			"insertParameterTypes",
			"(I[Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1.object<jarray>()
		);
	}
	java::lang::invoke::MethodType MethodType::insertParameterTypes(jint arg0, JObject arg1)
	{
		return callObjectMethod(
			"insertParameterTypes",
			"(ILjava/util/List;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1.object()
		);
	}
	JClass MethodType::lastParameterType()
	{
		return callObjectMethod(
			"lastParameterType",
			"()Ljava/lang/Class;"
		);
	}
	JArray MethodType::parameterArray()
	{
		return callObjectMethod(
			"parameterArray",
			"()[Ljava/lang/Class;"
		);
	}
	jint MethodType::parameterCount()
	{
		return callMethod<jint>(
			"parameterCount",
			"()I"
		);
	}
	JObject MethodType::parameterList()
	{
		return callObjectMethod(
			"parameterList",
			"()Ljava/util/List;"
		);
	}
	JClass MethodType::parameterType(jint arg0)
	{
		return callObjectMethod(
			"parameterType",
			"(I)Ljava/lang/Class;",
			arg0
		);
	}
	JClass MethodType::returnType()
	{
		return callObjectMethod(
			"returnType",
			"()Ljava/lang/Class;"
		);
	}
	JString MethodType::toMethodDescriptorString()
	{
		return callObjectMethod(
			"toMethodDescriptorString",
			"()Ljava/lang/String;"
		);
	}
	JString MethodType::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

