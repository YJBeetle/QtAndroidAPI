#pragma once

#include "../../JObjectArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Objects.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint Objects::checkFromIndexSize(jint arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"java.util.Objects",
			"checkFromIndexSize",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	inline jlong Objects::checkFromIndexSize(jlong arg0, jlong arg1, jlong arg2)
	{
		return callStaticMethod<jlong>(
			"java.util.Objects",
			"checkFromIndexSize",
			"(JJJ)J",
			arg0,
			arg1,
			arg2
		);
	}
	inline jint Objects::checkFromToIndex(jint arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"java.util.Objects",
			"checkFromToIndex",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	inline jlong Objects::checkFromToIndex(jlong arg0, jlong arg1, jlong arg2)
	{
		return callStaticMethod<jlong>(
			"java.util.Objects",
			"checkFromToIndex",
			"(JJJ)J",
			arg0,
			arg1,
			arg2
		);
	}
	inline jint Objects::checkIndex(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Objects",
			"checkIndex",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jlong Objects::checkIndex(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"java.util.Objects",
			"checkIndex",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jint Objects::compare(JObject arg0, JObject arg1, JObject arg2)
	{
		return callStaticMethod<jint>(
			"java.util.Objects",
			"compare",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/Comparator;)I",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object()
		);
	}
	inline jboolean Objects::deepEquals(JObject arg0, JObject arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Objects",
			"deepEquals",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline jboolean Objects::equals(JObject arg0, JObject arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Objects",
			"equals",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline jint Objects::hash(JObjectArray arg0)
	{
		return callStaticMethod<jint>(
			"java.util.Objects",
			"hash",
			"([Ljava/lang/Object;)I",
			arg0.object<jobjectArray>()
		);
	}
	inline jint Objects::hashCode(JObject arg0)
	{
		return callStaticMethod<jint>(
			"java.util.Objects",
			"hashCode",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jboolean Objects::isNull(JObject arg0)
	{
		return callStaticMethod<jboolean>(
			"java.util.Objects",
			"isNull",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean Objects::nonNull(JObject arg0)
	{
		return callStaticMethod<jboolean>(
			"java.util.Objects",
			"nonNull",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject Objects::requireNonNull(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Objects",
			"requireNonNull",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline JObject Objects::requireNonNull(JObject arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.util.Objects",
			"requireNonNull",
			"(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jstring>()
		);
	}
	inline JObject Objects::requireNonNull(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.Objects",
			"requireNonNull",
			"(Ljava/lang/Object;Ljava/util/function/Supplier;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline JObject Objects::requireNonNullElse(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.Objects",
			"requireNonNullElse",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline JObject Objects::requireNonNullElseGet(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.Objects",
			"requireNonNullElseGet",
			"(Ljava/lang/Object;Ljava/util/function/Supplier;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline JString Objects::toString(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Objects",
			"toString",
			"(Ljava/lang/Object;)Ljava/lang/String;",
			arg0.object<jobject>()
		);
	}
	inline JString Objects::toString(JObject arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.util.Objects",
			"toString",
			"(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jobject>(),
			arg1.object<jstring>()
		);
	}
} // namespace java::util

// Base class headers

