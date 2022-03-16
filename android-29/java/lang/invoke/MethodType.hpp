#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../io/ObjectInputStream.def.hpp"
#include "../../io/ObjectOutputStream.def.hpp"
#include "../../../JClass.hpp"
#include "../ClassLoader.def.hpp"
#include "../IndexOutOfBoundsException.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../util/Optional.def.hpp"
#include "./MethodType.def.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::lang::invoke::MethodType MethodType::fromMethodDescriptorString(JString arg0, java::lang::ClassLoader arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"fromMethodDescriptorString",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/invoke/MethodType;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline java::lang::invoke::MethodType MethodType::genericMethodType(jint arg0)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"genericMethodType",
			"(I)Ljava/lang/invoke/MethodType;",
			arg0
		);
	}
	inline java::lang::invoke::MethodType MethodType::genericMethodType(jint arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"genericMethodType",
			"(IZ)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1
		);
	}
	inline java::lang::invoke::MethodType MethodType::methodType(JClass arg0)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0.object<jclass>()
		);
	}
	inline java::lang::invoke::MethodType MethodType::methodType(JClass arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0.object<jclass>(),
			arg1.object<jarray>()
		);
	}
	inline java::lang::invoke::MethodType MethodType::methodType(JClass arg0, JClass arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0.object<jclass>(),
			arg1.object<jclass>()
		);
	}
	inline java::lang::invoke::MethodType MethodType::methodType(JClass arg0, java::lang::invoke::MethodType arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodType;",
			arg0.object<jclass>(),
			arg1.object()
		);
	}
	inline java::lang::invoke::MethodType MethodType::methodType(JClass arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodType",
			"methodType",
			"(Ljava/lang/Class;Ljava/util/List;)Ljava/lang/invoke/MethodType;",
			arg0.object<jclass>(),
			arg1.object()
		);
	}
	inline java::lang::invoke::MethodType MethodType::methodType(JClass arg0, JClass arg1, JArray arg2)
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
	inline java::lang::invoke::MethodType MethodType::appendParameterTypes(JArray arg0) const
	{
		return callObjectMethod(
			"appendParameterTypes",
			"([Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0.object<jarray>()
		);
	}
	inline java::lang::invoke::MethodType MethodType::appendParameterTypes(JObject arg0) const
	{
		return callObjectMethod(
			"appendParameterTypes",
			"(Ljava/util/List;)Ljava/lang/invoke/MethodType;",
			arg0.object()
		);
	}
	inline java::lang::invoke::MethodType MethodType::changeParameterType(jint arg0, JClass arg1) const
	{
		return callObjectMethod(
			"changeParameterType",
			"(ILjava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1.object<jclass>()
		);
	}
	inline JObject MethodType::changeParameterType(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"changeParameterType",
			"(ILjava/lang/invoke/TypeDescriptor$OfField;)Ljava/lang/invoke/TypeDescriptor$OfMethod;",
			arg0,
			arg1.object()
		);
	}
	inline java::lang::invoke::MethodType MethodType::changeReturnType(JClass arg0) const
	{
		return callObjectMethod(
			"changeReturnType",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0.object<jclass>()
		);
	}
	inline JObject MethodType::changeReturnType(JObject arg0) const
	{
		return callObjectMethod(
			"changeReturnType",
			"(Ljava/lang/invoke/TypeDescriptor$OfField;)Ljava/lang/invoke/TypeDescriptor$OfMethod;",
			arg0.object()
		);
	}
	inline java::util::Optional MethodType::describeConstable() const
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	inline JString MethodType::descriptorString() const
	{
		return callObjectMethod(
			"descriptorString",
			"()Ljava/lang/String;"
		);
	}
	inline java::lang::invoke::MethodType MethodType::dropParameterTypes(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"dropParameterTypes",
			"(II)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1
		);
	}
	inline jboolean MethodType::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::lang::invoke::MethodType MethodType::erase() const
	{
		return callObjectMethod(
			"erase",
			"()Ljava/lang/invoke/MethodType;"
		);
	}
	inline java::lang::invoke::MethodType MethodType::generic() const
	{
		return callObjectMethod(
			"generic",
			"()Ljava/lang/invoke/MethodType;"
		);
	}
	inline jboolean MethodType::hasPrimitives() const
	{
		return callMethod<jboolean>(
			"hasPrimitives",
			"()Z"
		);
	}
	inline jboolean MethodType::hasWrappers() const
	{
		return callMethod<jboolean>(
			"hasWrappers",
			"()Z"
		);
	}
	inline jint MethodType::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline java::lang::invoke::MethodType MethodType::insertParameterTypes(jint arg0, JArray arg1) const
	{
		return callObjectMethod(
			"insertParameterTypes",
			"(I[Ljava/lang/Class;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1.object<jarray>()
		);
	}
	inline java::lang::invoke::MethodType MethodType::insertParameterTypes(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"insertParameterTypes",
			"(ILjava/util/List;)Ljava/lang/invoke/MethodType;",
			arg0,
			arg1.object()
		);
	}
	inline JClass MethodType::lastParameterType() const
	{
		return callObjectMethod(
			"lastParameterType",
			"()Ljava/lang/Class;"
		);
	}
	inline JArray MethodType::parameterArray() const
	{
		return callObjectMethod(
			"parameterArray",
			"()[Ljava/lang/Class;"
		);
	}
	inline jint MethodType::parameterCount() const
	{
		return callMethod<jint>(
			"parameterCount",
			"()I"
		);
	}
	inline JObject MethodType::parameterList() const
	{
		return callObjectMethod(
			"parameterList",
			"()Ljava/util/List;"
		);
	}
	inline JClass MethodType::parameterType(jint arg0) const
	{
		return callObjectMethod(
			"parameterType",
			"(I)Ljava/lang/Class;",
			arg0
		);
	}
	inline JClass MethodType::returnType() const
	{
		return callObjectMethod(
			"returnType",
			"()Ljava/lang/Class;"
		);
	}
	inline JString MethodType::toMethodDescriptorString() const
	{
		return callObjectMethod(
			"toMethodDescriptorString",
			"()Ljava/lang/String;"
		);
	}
	inline JString MethodType::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline java::lang::invoke::MethodType MethodType::unwrap() const
	{
		return callObjectMethod(
			"unwrap",
			"()Ljava/lang/invoke/MethodType;"
		);
	}
	inline java::lang::invoke::MethodType MethodType::wrap() const
	{
		return callObjectMethod(
			"wrap",
			"()Ljava/lang/invoke/MethodType;"
		);
	}
} // namespace java::lang::invoke

// Base class headers

