#pragma once

#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "../../JDoubleArray.hpp"
#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JLongArray.hpp"
#include "../../JArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JShortArray.hpp"
#include "../../JBooleanArray.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuilder.def.hpp"
#include "./Arrays.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject Arrays::asList(JObjectArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"asList",
			"([Ljava/lang/Object;)Ljava/util/List;",
			arg0.object<jobjectArray>()
		);
	}
	inline jint Arrays::binarySearch(JByteArray arg0, jbyte arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([BB)I",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
	inline jint Arrays::binarySearch(JCharArray arg0, jchar arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([CC)I",
			arg0.object<jcharArray>(),
			arg1
		);
	}
	inline jint Arrays::binarySearch(JDoubleArray arg0, jdouble arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([DD)I",
			arg0.object<jdoubleArray>(),
			arg1
		);
	}
	inline jint Arrays::binarySearch(JFloatArray arg0, jfloat arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([FF)I",
			arg0.object<jfloatArray>(),
			arg1
		);
	}
	inline jint Arrays::binarySearch(JIntArray arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([II)I",
			arg0.object<jintArray>(),
			arg1
		);
	}
	inline jint Arrays::binarySearch(JLongArray arg0, jlong arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([JJ)I",
			arg0.object<jlongArray>(),
			arg1
		);
	}
	inline jint Arrays::binarySearch(JObjectArray arg0, JObject arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([Ljava/lang/Object;Ljava/lang/Object;)I",
			arg0.object<jobjectArray>(),
			arg1.object<jobject>()
		);
	}
	inline jint Arrays::binarySearch(JShortArray arg0, jshort arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([SS)I",
			arg0.object<jshortArray>(),
			arg1
		);
	}
	inline jint Arrays::binarySearch(JObjectArray arg0, JObject arg1, JObject arg2)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([Ljava/lang/Object;Ljava/lang/Object;Ljava/util/Comparator;)I",
			arg0.object<jobjectArray>(),
			arg1.object<jobject>(),
			arg2.object()
		);
	}
	inline jint Arrays::binarySearch(JByteArray arg0, jint arg1, jint arg2, jbyte arg3)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([BIIB)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline jint Arrays::binarySearch(JCharArray arg0, jint arg1, jint arg2, jchar arg3)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([CIIC)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline jint Arrays::binarySearch(JDoubleArray arg0, jint arg1, jint arg2, jdouble arg3)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([DIID)I",
			arg0.object<jdoubleArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline jint Arrays::binarySearch(JFloatArray arg0, jint arg1, jint arg2, jfloat arg3)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([FIIF)I",
			arg0.object<jfloatArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline jint Arrays::binarySearch(JIntArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([IIII)I",
			arg0.object<jintArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline jint Arrays::binarySearch(JLongArray arg0, jint arg1, jint arg2, jlong arg3)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([JIIJ)I",
			arg0.object<jlongArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline jint Arrays::binarySearch(JObjectArray arg0, jint arg1, jint arg2, JObject arg3)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([Ljava/lang/Object;IILjava/lang/Object;)I",
			arg0.object<jobjectArray>(),
			arg1,
			arg2,
			arg3.object<jobject>()
		);
	}
	inline jint Arrays::binarySearch(JShortArray arg0, jint arg1, jint arg2, jshort arg3)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([SIIS)I",
			arg0.object<jshortArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline jint Arrays::binarySearch(JObjectArray arg0, jint arg1, jint arg2, JObject arg3, JObject arg4)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([Ljava/lang/Object;IILjava/lang/Object;Ljava/util/Comparator;)I",
			arg0.object<jobjectArray>(),
			arg1,
			arg2,
			arg3.object<jobject>(),
			arg4.object()
		);
	}
	inline jint Arrays::compare(JByteArray arg0, JByteArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([B[B)I",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>()
		);
	}
	inline jint Arrays::compare(JCharArray arg0, JCharArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([C[C)I",
			arg0.object<jcharArray>(),
			arg1.object<jcharArray>()
		);
	}
	inline jint Arrays::compare(JDoubleArray arg0, JDoubleArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([D[D)I",
			arg0.object<jdoubleArray>(),
			arg1.object<jdoubleArray>()
		);
	}
	inline jint Arrays::compare(JFloatArray arg0, JFloatArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([F[F)I",
			arg0.object<jfloatArray>(),
			arg1.object<jfloatArray>()
		);
	}
	inline jint Arrays::compare(JIntArray arg0, JIntArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([I[I)I",
			arg0.object<jintArray>(),
			arg1.object<jintArray>()
		);
	}
	inline jint Arrays::compare(JLongArray arg0, JLongArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([J[J)I",
			arg0.object<jlongArray>(),
			arg1.object<jlongArray>()
		);
	}
	inline jint Arrays::compare(JArray arg0, JArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([Ljava/lang/Comparable;[Ljava/lang/Comparable;)I",
			arg0.object<jarray>(),
			arg1.object<jarray>()
		);
	}
	inline jint Arrays::compare(JShortArray arg0, JShortArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([S[S)I",
			arg0.object<jshortArray>(),
			arg1.object<jshortArray>()
		);
	}
	inline jint Arrays::compare(JBooleanArray arg0, JBooleanArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([Z[Z)I",
			arg0.object<jbooleanArray>(),
			arg1.object<jbooleanArray>()
		);
	}
	inline jint Arrays::compare(JObjectArray arg0, JObjectArray arg1, JObject arg2)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)I",
			arg0.object<jobjectArray>(),
			arg1.object<jobjectArray>(),
			arg2.object()
		);
	}
	inline jint Arrays::compare(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([BII[BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3.object<jbyteArray>(),
			arg4,
			arg5
		);
	}
	inline jint Arrays::compare(JCharArray arg0, jint arg1, jint arg2, JCharArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([CII[CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3.object<jcharArray>(),
			arg4,
			arg5
		);
	}
	inline jint Arrays::compare(JDoubleArray arg0, jint arg1, jint arg2, JDoubleArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([DII[DII)I",
			arg0.object<jdoubleArray>(),
			arg1,
			arg2,
			arg3.object<jdoubleArray>(),
			arg4,
			arg5
		);
	}
	inline jint Arrays::compare(JFloatArray arg0, jint arg1, jint arg2, JFloatArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([FII[FII)I",
			arg0.object<jfloatArray>(),
			arg1,
			arg2,
			arg3.object<jfloatArray>(),
			arg4,
			arg5
		);
	}
	inline jint Arrays::compare(JIntArray arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([III[III)I",
			arg0.object<jintArray>(),
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4,
			arg5
		);
	}
	inline jint Arrays::compare(JLongArray arg0, jint arg1, jint arg2, JLongArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([JII[JII)I",
			arg0.object<jlongArray>(),
			arg1,
			arg2,
			arg3.object<jlongArray>(),
			arg4,
			arg5
		);
	}
	inline jint Arrays::compare(JArray arg0, jint arg1, jint arg2, JArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([Ljava/lang/Comparable;II[Ljava/lang/Comparable;II)I",
			arg0.object<jarray>(),
			arg1,
			arg2,
			arg3.object<jarray>(),
			arg4,
			arg5
		);
	}
	inline jint Arrays::compare(JShortArray arg0, jint arg1, jint arg2, JShortArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([SII[SII)I",
			arg0.object<jshortArray>(),
			arg1,
			arg2,
			arg3.object<jshortArray>(),
			arg4,
			arg5
		);
	}
	inline jint Arrays::compare(JBooleanArray arg0, jint arg1, jint arg2, JBooleanArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([ZII[ZII)I",
			arg0.object<jbooleanArray>(),
			arg1,
			arg2,
			arg3.object<jbooleanArray>(),
			arg4,
			arg5
		);
	}
	inline jint Arrays::compare(JObjectArray arg0, jint arg1, jint arg2, JObjectArray arg3, jint arg4, jint arg5, JObject arg6)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)I",
			arg0.object<jobjectArray>(),
			arg1,
			arg2,
			arg3.object<jobjectArray>(),
			arg4,
			arg5,
			arg6.object()
		);
	}
	inline jint Arrays::compareUnsigned(JByteArray arg0, JByteArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compareUnsigned",
			"([B[B)I",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>()
		);
	}
	inline jint Arrays::compareUnsigned(JIntArray arg0, JIntArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compareUnsigned",
			"([I[I)I",
			arg0.object<jintArray>(),
			arg1.object<jintArray>()
		);
	}
	inline jint Arrays::compareUnsigned(JLongArray arg0, JLongArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compareUnsigned",
			"([J[J)I",
			arg0.object<jlongArray>(),
			arg1.object<jlongArray>()
		);
	}
	inline jint Arrays::compareUnsigned(JShortArray arg0, JShortArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compareUnsigned",
			"([S[S)I",
			arg0.object<jshortArray>(),
			arg1.object<jshortArray>()
		);
	}
	inline jint Arrays::compareUnsigned(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compareUnsigned",
			"([BII[BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3.object<jbyteArray>(),
			arg4,
			arg5
		);
	}
	inline jint Arrays::compareUnsigned(JIntArray arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compareUnsigned",
			"([III[III)I",
			arg0.object<jintArray>(),
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4,
			arg5
		);
	}
	inline jint Arrays::compareUnsigned(JLongArray arg0, jint arg1, jint arg2, JLongArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compareUnsigned",
			"([JII[JII)I",
			arg0.object<jlongArray>(),
			arg1,
			arg2,
			arg3.object<jlongArray>(),
			arg4,
			arg5
		);
	}
	inline jint Arrays::compareUnsigned(JShortArray arg0, jint arg1, jint arg2, JShortArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compareUnsigned",
			"([SII[SII)I",
			arg0.object<jshortArray>(),
			arg1,
			arg2,
			arg3.object<jshortArray>(),
			arg4,
			arg5
		);
	}
	inline JByteArray Arrays::copyOf(JByteArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOf",
			"([BI)[B",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
	inline JCharArray Arrays::copyOf(JCharArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOf",
			"([CI)[C",
			arg0.object<jcharArray>(),
			arg1
		);
	}
	inline JDoubleArray Arrays::copyOf(JDoubleArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOf",
			"([DI)[D",
			arg0.object<jdoubleArray>(),
			arg1
		);
	}
	inline JFloatArray Arrays::copyOf(JFloatArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOf",
			"([FI)[F",
			arg0.object<jfloatArray>(),
			arg1
		);
	}
	inline JIntArray Arrays::copyOf(JIntArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOf",
			"([II)[I",
			arg0.object<jintArray>(),
			arg1
		);
	}
	inline JLongArray Arrays::copyOf(JLongArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOf",
			"([JI)[J",
			arg0.object<jlongArray>(),
			arg1
		);
	}
	inline JObjectArray Arrays::copyOf(JObjectArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOf",
			"([Ljava/lang/Object;I)[Ljava/lang/Object;",
			arg0.object<jobjectArray>(),
			arg1
		);
	}
	inline JObjectArray Arrays::copyOf(JObjectArray arg0, jint arg1, JClass arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOf",
			"([Ljava/lang/Object;ILjava/lang/Class;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>(),
			arg1,
			arg2.object<jclass>()
		);
	}
	inline JShortArray Arrays::copyOf(JShortArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOf",
			"([SI)[S",
			arg0.object<jshortArray>(),
			arg1
		);
	}
	inline JBooleanArray Arrays::copyOf(JBooleanArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOf",
			"([ZI)[Z",
			arg0.object<jbooleanArray>(),
			arg1
		);
	}
	inline JByteArray Arrays::copyOfRange(JByteArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOfRange",
			"([BII)[B",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline JCharArray Arrays::copyOfRange(JCharArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOfRange",
			"([CII)[C",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline JDoubleArray Arrays::copyOfRange(JDoubleArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOfRange",
			"([DII)[D",
			arg0.object<jdoubleArray>(),
			arg1,
			arg2
		);
	}
	inline JFloatArray Arrays::copyOfRange(JFloatArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOfRange",
			"([FII)[F",
			arg0.object<jfloatArray>(),
			arg1,
			arg2
		);
	}
	inline JIntArray Arrays::copyOfRange(JIntArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOfRange",
			"([III)[I",
			arg0.object<jintArray>(),
			arg1,
			arg2
		);
	}
	inline JLongArray Arrays::copyOfRange(JLongArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOfRange",
			"([JII)[J",
			arg0.object<jlongArray>(),
			arg1,
			arg2
		);
	}
	inline JObjectArray Arrays::copyOfRange(JObjectArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOfRange",
			"([Ljava/lang/Object;II)[Ljava/lang/Object;",
			arg0.object<jobjectArray>(),
			arg1,
			arg2
		);
	}
	inline JObjectArray Arrays::copyOfRange(JObjectArray arg0, jint arg1, jint arg2, JClass arg3)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOfRange",
			"([Ljava/lang/Object;IILjava/lang/Class;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>(),
			arg1,
			arg2,
			arg3.object<jclass>()
		);
	}
	inline JShortArray Arrays::copyOfRange(JShortArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOfRange",
			"([SII)[S",
			arg0.object<jshortArray>(),
			arg1,
			arg2
		);
	}
	inline JBooleanArray Arrays::copyOfRange(JBooleanArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOfRange",
			"([ZII)[Z",
			arg0.object<jbooleanArray>(),
			arg1,
			arg2
		);
	}
	inline jboolean Arrays::deepEquals(JObjectArray arg0, JObjectArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"deepEquals",
			"([Ljava/lang/Object;[Ljava/lang/Object;)Z",
			arg0.object<jobjectArray>(),
			arg1.object<jobjectArray>()
		);
	}
	inline jint Arrays::deepHashCode(JObjectArray arg0)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"deepHashCode",
			"([Ljava/lang/Object;)I",
			arg0.object<jobjectArray>()
		);
	}
	inline JString Arrays::deepToString(JObjectArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"deepToString",
			"([Ljava/lang/Object;)Ljava/lang/String;",
			arg0.object<jobjectArray>()
		);
	}
	inline jboolean Arrays::equals(JByteArray arg0, JByteArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([B[B)Z",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>()
		);
	}
	inline jboolean Arrays::equals(JCharArray arg0, JCharArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([C[C)Z",
			arg0.object<jcharArray>(),
			arg1.object<jcharArray>()
		);
	}
	inline jboolean Arrays::equals(JDoubleArray arg0, JDoubleArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([D[D)Z",
			arg0.object<jdoubleArray>(),
			arg1.object<jdoubleArray>()
		);
	}
	inline jboolean Arrays::equals(JFloatArray arg0, JFloatArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([F[F)Z",
			arg0.object<jfloatArray>(),
			arg1.object<jfloatArray>()
		);
	}
	inline jboolean Arrays::equals(JIntArray arg0, JIntArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([I[I)Z",
			arg0.object<jintArray>(),
			arg1.object<jintArray>()
		);
	}
	inline jboolean Arrays::equals(JLongArray arg0, JLongArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([J[J)Z",
			arg0.object<jlongArray>(),
			arg1.object<jlongArray>()
		);
	}
	inline jboolean Arrays::equals(JObjectArray arg0, JObjectArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([Ljava/lang/Object;[Ljava/lang/Object;)Z",
			arg0.object<jobjectArray>(),
			arg1.object<jobjectArray>()
		);
	}
	inline jboolean Arrays::equals(JShortArray arg0, JShortArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([S[S)Z",
			arg0.object<jshortArray>(),
			arg1.object<jshortArray>()
		);
	}
	inline jboolean Arrays::equals(JBooleanArray arg0, JBooleanArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([Z[Z)Z",
			arg0.object<jbooleanArray>(),
			arg1.object<jbooleanArray>()
		);
	}
	inline jboolean Arrays::equals(JObjectArray arg0, JObjectArray arg1, JObject arg2)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)Z",
			arg0.object<jobjectArray>(),
			arg1.object<jobjectArray>(),
			arg2.object()
		);
	}
	inline jboolean Arrays::equals(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([BII[BII)Z",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3.object<jbyteArray>(),
			arg4,
			arg5
		);
	}
	inline jboolean Arrays::equals(JCharArray arg0, jint arg1, jint arg2, JCharArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([CII[CII)Z",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3.object<jcharArray>(),
			arg4,
			arg5
		);
	}
	inline jboolean Arrays::equals(JDoubleArray arg0, jint arg1, jint arg2, JDoubleArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([DII[DII)Z",
			arg0.object<jdoubleArray>(),
			arg1,
			arg2,
			arg3.object<jdoubleArray>(),
			arg4,
			arg5
		);
	}
	inline jboolean Arrays::equals(JFloatArray arg0, jint arg1, jint arg2, JFloatArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([FII[FII)Z",
			arg0.object<jfloatArray>(),
			arg1,
			arg2,
			arg3.object<jfloatArray>(),
			arg4,
			arg5
		);
	}
	inline jboolean Arrays::equals(JIntArray arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([III[III)Z",
			arg0.object<jintArray>(),
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4,
			arg5
		);
	}
	inline jboolean Arrays::equals(JLongArray arg0, jint arg1, jint arg2, JLongArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([JII[JII)Z",
			arg0.object<jlongArray>(),
			arg1,
			arg2,
			arg3.object<jlongArray>(),
			arg4,
			arg5
		);
	}
	inline jboolean Arrays::equals(JObjectArray arg0, jint arg1, jint arg2, JObjectArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([Ljava/lang/Object;II[Ljava/lang/Object;II)Z",
			arg0.object<jobjectArray>(),
			arg1,
			arg2,
			arg3.object<jobjectArray>(),
			arg4,
			arg5
		);
	}
	inline jboolean Arrays::equals(JShortArray arg0, jint arg1, jint arg2, JShortArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([SII[SII)Z",
			arg0.object<jshortArray>(),
			arg1,
			arg2,
			arg3.object<jshortArray>(),
			arg4,
			arg5
		);
	}
	inline jboolean Arrays::equals(JBooleanArray arg0, jint arg1, jint arg2, JBooleanArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([ZII[ZII)Z",
			arg0.object<jbooleanArray>(),
			arg1,
			arg2,
			arg3.object<jbooleanArray>(),
			arg4,
			arg5
		);
	}
	inline jboolean Arrays::equals(JObjectArray arg0, jint arg1, jint arg2, JObjectArray arg3, jint arg4, jint arg5, JObject arg6)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)Z",
			arg0.object<jobjectArray>(),
			arg1,
			arg2,
			arg3.object<jobjectArray>(),
			arg4,
			arg5,
			arg6.object()
		);
	}
	inline void Arrays::fill(JByteArray arg0, jbyte arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([BB)V",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
	inline void Arrays::fill(JCharArray arg0, jchar arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([CC)V",
			arg0.object<jcharArray>(),
			arg1
		);
	}
	inline void Arrays::fill(JDoubleArray arg0, jdouble arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([DD)V",
			arg0.object<jdoubleArray>(),
			arg1
		);
	}
	inline void Arrays::fill(JFloatArray arg0, jfloat arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([FF)V",
			arg0.object<jfloatArray>(),
			arg1
		);
	}
	inline void Arrays::fill(JIntArray arg0, jint arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([II)V",
			arg0.object<jintArray>(),
			arg1
		);
	}
	inline void Arrays::fill(JLongArray arg0, jlong arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([JJ)V",
			arg0.object<jlongArray>(),
			arg1
		);
	}
	inline void Arrays::fill(JObjectArray arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0.object<jobjectArray>(),
			arg1.object<jobject>()
		);
	}
	inline void Arrays::fill(JShortArray arg0, jshort arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([SS)V",
			arg0.object<jshortArray>(),
			arg1
		);
	}
	inline void Arrays::fill(JBooleanArray arg0, jboolean arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([ZZ)V",
			arg0.object<jbooleanArray>(),
			arg1
		);
	}
	inline void Arrays::fill(JByteArray arg0, jint arg1, jint arg2, jbyte arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([BIIB)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline void Arrays::fill(JCharArray arg0, jint arg1, jint arg2, jchar arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([CIIC)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline void Arrays::fill(JDoubleArray arg0, jint arg1, jint arg2, jdouble arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([DIID)V",
			arg0.object<jdoubleArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline void Arrays::fill(JFloatArray arg0, jint arg1, jint arg2, jfloat arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([FIIF)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline void Arrays::fill(JIntArray arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([IIII)V",
			arg0.object<jintArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline void Arrays::fill(JLongArray arg0, jint arg1, jint arg2, jlong arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([JIIJ)V",
			arg0.object<jlongArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline void Arrays::fill(JObjectArray arg0, jint arg1, jint arg2, JObject arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([Ljava/lang/Object;IILjava/lang/Object;)V",
			arg0.object<jobjectArray>(),
			arg1,
			arg2,
			arg3.object<jobject>()
		);
	}
	inline void Arrays::fill(JShortArray arg0, jint arg1, jint arg2, jshort arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([SIIS)V",
			arg0.object<jshortArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline void Arrays::fill(JBooleanArray arg0, jint arg1, jint arg2, jboolean arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([ZIIZ)V",
			arg0.object<jbooleanArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline jint Arrays::hashCode(JByteArray arg0)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"hashCode",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	inline jint Arrays::hashCode(JCharArray arg0)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"hashCode",
			"([C)I",
			arg0.object<jcharArray>()
		);
	}
	inline jint Arrays::hashCode(JDoubleArray arg0)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"hashCode",
			"([D)I",
			arg0.object<jdoubleArray>()
		);
	}
	inline jint Arrays::hashCode(JFloatArray arg0)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"hashCode",
			"([F)I",
			arg0.object<jfloatArray>()
		);
	}
	inline jint Arrays::hashCode(JIntArray arg0)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"hashCode",
			"([I)I",
			arg0.object<jintArray>()
		);
	}
	inline jint Arrays::hashCode(JLongArray arg0)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"hashCode",
			"([J)I",
			arg0.object<jlongArray>()
		);
	}
	inline jint Arrays::hashCode(JObjectArray arg0)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"hashCode",
			"([Ljava/lang/Object;)I",
			arg0.object<jobjectArray>()
		);
	}
	inline jint Arrays::hashCode(JShortArray arg0)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"hashCode",
			"([S)I",
			arg0.object<jshortArray>()
		);
	}
	inline jint Arrays::hashCode(JBooleanArray arg0)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"hashCode",
			"([Z)I",
			arg0.object<jbooleanArray>()
		);
	}
	inline jint Arrays::mismatch(JByteArray arg0, JByteArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([B[B)I",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>()
		);
	}
	inline jint Arrays::mismatch(JCharArray arg0, JCharArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([C[C)I",
			arg0.object<jcharArray>(),
			arg1.object<jcharArray>()
		);
	}
	inline jint Arrays::mismatch(JDoubleArray arg0, JDoubleArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([D[D)I",
			arg0.object<jdoubleArray>(),
			arg1.object<jdoubleArray>()
		);
	}
	inline jint Arrays::mismatch(JFloatArray arg0, JFloatArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([F[F)I",
			arg0.object<jfloatArray>(),
			arg1.object<jfloatArray>()
		);
	}
	inline jint Arrays::mismatch(JIntArray arg0, JIntArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([I[I)I",
			arg0.object<jintArray>(),
			arg1.object<jintArray>()
		);
	}
	inline jint Arrays::mismatch(JLongArray arg0, JLongArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([J[J)I",
			arg0.object<jlongArray>(),
			arg1.object<jlongArray>()
		);
	}
	inline jint Arrays::mismatch(JObjectArray arg0, JObjectArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([Ljava/lang/Object;[Ljava/lang/Object;)I",
			arg0.object<jobjectArray>(),
			arg1.object<jobjectArray>()
		);
	}
	inline jint Arrays::mismatch(JShortArray arg0, JShortArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([S[S)I",
			arg0.object<jshortArray>(),
			arg1.object<jshortArray>()
		);
	}
	inline jint Arrays::mismatch(JBooleanArray arg0, JBooleanArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([Z[Z)I",
			arg0.object<jbooleanArray>(),
			arg1.object<jbooleanArray>()
		);
	}
	inline jint Arrays::mismatch(JObjectArray arg0, JObjectArray arg1, JObject arg2)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)I",
			arg0.object<jobjectArray>(),
			arg1.object<jobjectArray>(),
			arg2.object()
		);
	}
	inline jint Arrays::mismatch(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([BII[BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3.object<jbyteArray>(),
			arg4,
			arg5
		);
	}
	inline jint Arrays::mismatch(JCharArray arg0, jint arg1, jint arg2, JCharArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([CII[CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3.object<jcharArray>(),
			arg4,
			arg5
		);
	}
	inline jint Arrays::mismatch(JDoubleArray arg0, jint arg1, jint arg2, JDoubleArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([DII[DII)I",
			arg0.object<jdoubleArray>(),
			arg1,
			arg2,
			arg3.object<jdoubleArray>(),
			arg4,
			arg5
		);
	}
	inline jint Arrays::mismatch(JFloatArray arg0, jint arg1, jint arg2, JFloatArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([FII[FII)I",
			arg0.object<jfloatArray>(),
			arg1,
			arg2,
			arg3.object<jfloatArray>(),
			arg4,
			arg5
		);
	}
	inline jint Arrays::mismatch(JIntArray arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([III[III)I",
			arg0.object<jintArray>(),
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4,
			arg5
		);
	}
	inline jint Arrays::mismatch(JLongArray arg0, jint arg1, jint arg2, JLongArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([JII[JII)I",
			arg0.object<jlongArray>(),
			arg1,
			arg2,
			arg3.object<jlongArray>(),
			arg4,
			arg5
		);
	}
	inline jint Arrays::mismatch(JObjectArray arg0, jint arg1, jint arg2, JObjectArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([Ljava/lang/Object;II[Ljava/lang/Object;II)I",
			arg0.object<jobjectArray>(),
			arg1,
			arg2,
			arg3.object<jobjectArray>(),
			arg4,
			arg5
		);
	}
	inline jint Arrays::mismatch(JShortArray arg0, jint arg1, jint arg2, JShortArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([SII[SII)I",
			arg0.object<jshortArray>(),
			arg1,
			arg2,
			arg3.object<jshortArray>(),
			arg4,
			arg5
		);
	}
	inline jint Arrays::mismatch(JBooleanArray arg0, jint arg1, jint arg2, JBooleanArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([ZII[ZII)I",
			arg0.object<jbooleanArray>(),
			arg1,
			arg2,
			arg3.object<jbooleanArray>(),
			arg4,
			arg5
		);
	}
	inline jint Arrays::mismatch(JObjectArray arg0, jint arg1, jint arg2, JObjectArray arg3, jint arg4, jint arg5, JObject arg6)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)I",
			arg0.object<jobjectArray>(),
			arg1,
			arg2,
			arg3.object<jobjectArray>(),
			arg4,
			arg5,
			arg6.object()
		);
	}
	inline void Arrays::parallelPrefix(JDoubleArray arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelPrefix",
			"([DLjava/util/function/DoubleBinaryOperator;)V",
			arg0.object<jdoubleArray>(),
			arg1.object()
		);
	}
	inline void Arrays::parallelPrefix(JIntArray arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelPrefix",
			"([ILjava/util/function/IntBinaryOperator;)V",
			arg0.object<jintArray>(),
			arg1.object()
		);
	}
	inline void Arrays::parallelPrefix(JLongArray arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelPrefix",
			"([JLjava/util/function/LongBinaryOperator;)V",
			arg0.object<jlongArray>(),
			arg1.object()
		);
	}
	inline void Arrays::parallelPrefix(JObjectArray arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelPrefix",
			"([Ljava/lang/Object;Ljava/util/function/BinaryOperator;)V",
			arg0.object<jobjectArray>(),
			arg1.object()
		);
	}
	inline void Arrays::parallelPrefix(JDoubleArray arg0, jint arg1, jint arg2, JObject arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelPrefix",
			"([DIILjava/util/function/DoubleBinaryOperator;)V",
			arg0.object<jdoubleArray>(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void Arrays::parallelPrefix(JIntArray arg0, jint arg1, jint arg2, JObject arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelPrefix",
			"([IIILjava/util/function/IntBinaryOperator;)V",
			arg0.object<jintArray>(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void Arrays::parallelPrefix(JLongArray arg0, jint arg1, jint arg2, JObject arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelPrefix",
			"([JIILjava/util/function/LongBinaryOperator;)V",
			arg0.object<jlongArray>(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void Arrays::parallelPrefix(JObjectArray arg0, jint arg1, jint arg2, JObject arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelPrefix",
			"([Ljava/lang/Object;IILjava/util/function/BinaryOperator;)V",
			arg0.object<jobjectArray>(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void Arrays::parallelSetAll(JDoubleArray arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSetAll",
			"([DLjava/util/function/IntToDoubleFunction;)V",
			arg0.object<jdoubleArray>(),
			arg1.object()
		);
	}
	inline void Arrays::parallelSetAll(JIntArray arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSetAll",
			"([ILjava/util/function/IntUnaryOperator;)V",
			arg0.object<jintArray>(),
			arg1.object()
		);
	}
	inline void Arrays::parallelSetAll(JLongArray arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSetAll",
			"([JLjava/util/function/IntToLongFunction;)V",
			arg0.object<jlongArray>(),
			arg1.object()
		);
	}
	inline void Arrays::parallelSetAll(JObjectArray arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSetAll",
			"([Ljava/lang/Object;Ljava/util/function/IntFunction;)V",
			arg0.object<jobjectArray>(),
			arg1.object()
		);
	}
	inline void Arrays::parallelSort(JByteArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void Arrays::parallelSort(JCharArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([C)V",
			arg0.object<jcharArray>()
		);
	}
	inline void Arrays::parallelSort(JDoubleArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([D)V",
			arg0.object<jdoubleArray>()
		);
	}
	inline void Arrays::parallelSort(JFloatArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	inline void Arrays::parallelSort(JIntArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	inline void Arrays::parallelSort(JLongArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([J)V",
			arg0.object<jlongArray>()
		);
	}
	inline void Arrays::parallelSort(JArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([Ljava/lang/Comparable;)V",
			arg0.object<jarray>()
		);
	}
	inline void Arrays::parallelSort(JShortArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([S)V",
			arg0.object<jshortArray>()
		);
	}
	inline void Arrays::parallelSort(JObjectArray arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([Ljava/lang/Object;Ljava/util/Comparator;)V",
			arg0.object<jobjectArray>(),
			arg1.object()
		);
	}
	inline void Arrays::parallelSort(JByteArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void Arrays::parallelSort(JCharArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline void Arrays::parallelSort(JDoubleArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([DII)V",
			arg0.object<jdoubleArray>(),
			arg1,
			arg2
		);
	}
	inline void Arrays::parallelSort(JFloatArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([FII)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2
		);
	}
	inline void Arrays::parallelSort(JIntArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([III)V",
			arg0.object<jintArray>(),
			arg1,
			arg2
		);
	}
	inline void Arrays::parallelSort(JLongArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([JII)V",
			arg0.object<jlongArray>(),
			arg1,
			arg2
		);
	}
	inline void Arrays::parallelSort(JArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([Ljava/lang/Comparable;II)V",
			arg0.object<jarray>(),
			arg1,
			arg2
		);
	}
	inline void Arrays::parallelSort(JShortArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([SII)V",
			arg0.object<jshortArray>(),
			arg1,
			arg2
		);
	}
	inline void Arrays::parallelSort(JObjectArray arg0, jint arg1, jint arg2, JObject arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([Ljava/lang/Object;IILjava/util/Comparator;)V",
			arg0.object<jobjectArray>(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void Arrays::setAll(JDoubleArray arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"setAll",
			"([DLjava/util/function/IntToDoubleFunction;)V",
			arg0.object<jdoubleArray>(),
			arg1.object()
		);
	}
	inline void Arrays::setAll(JIntArray arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"setAll",
			"([ILjava/util/function/IntUnaryOperator;)V",
			arg0.object<jintArray>(),
			arg1.object()
		);
	}
	inline void Arrays::setAll(JLongArray arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"setAll",
			"([JLjava/util/function/IntToLongFunction;)V",
			arg0.object<jlongArray>(),
			arg1.object()
		);
	}
	inline void Arrays::setAll(JObjectArray arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"setAll",
			"([Ljava/lang/Object;Ljava/util/function/IntFunction;)V",
			arg0.object<jobjectArray>(),
			arg1.object()
		);
	}
	inline void Arrays::sort(JByteArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void Arrays::sort(JCharArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([C)V",
			arg0.object<jcharArray>()
		);
	}
	inline void Arrays::sort(JDoubleArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([D)V",
			arg0.object<jdoubleArray>()
		);
	}
	inline void Arrays::sort(JFloatArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	inline void Arrays::sort(JIntArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	inline void Arrays::sort(JLongArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([J)V",
			arg0.object<jlongArray>()
		);
	}
	inline void Arrays::sort(JObjectArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
		);
	}
	inline void Arrays::sort(JShortArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([S)V",
			arg0.object<jshortArray>()
		);
	}
	inline void Arrays::sort(JObjectArray arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([Ljava/lang/Object;Ljava/util/Comparator;)V",
			arg0.object<jobjectArray>(),
			arg1.object()
		);
	}
	inline void Arrays::sort(JByteArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void Arrays::sort(JCharArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline void Arrays::sort(JDoubleArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([DII)V",
			arg0.object<jdoubleArray>(),
			arg1,
			arg2
		);
	}
	inline void Arrays::sort(JFloatArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([FII)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2
		);
	}
	inline void Arrays::sort(JIntArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([III)V",
			arg0.object<jintArray>(),
			arg1,
			arg2
		);
	}
	inline void Arrays::sort(JLongArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([JII)V",
			arg0.object<jlongArray>(),
			arg1,
			arg2
		);
	}
	inline void Arrays::sort(JObjectArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([Ljava/lang/Object;II)V",
			arg0.object<jobjectArray>(),
			arg1,
			arg2
		);
	}
	inline void Arrays::sort(JShortArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([SII)V",
			arg0.object<jshortArray>(),
			arg1,
			arg2
		);
	}
	inline void Arrays::sort(JObjectArray arg0, jint arg1, jint arg2, JObject arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([Ljava/lang/Object;IILjava/util/Comparator;)V",
			arg0.object<jobjectArray>(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline JObject Arrays::spliterator(JObjectArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"spliterator",
			"([Ljava/lang/Object;)Ljava/util/Spliterator;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject Arrays::spliterator(JObjectArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"spliterator",
			"([Ljava/lang/Object;II)Ljava/util/Spliterator;",
			arg0.object<jobjectArray>(),
			arg1,
			arg2
		);
	}
	inline JObject Arrays::spliterator(JDoubleArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"spliterator",
			"([D)Ljava/util/Spliterator$OfDouble;",
			arg0.object<jdoubleArray>()
		);
	}
	inline JObject Arrays::spliterator(JDoubleArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"spliterator",
			"([DII)Ljava/util/Spliterator$OfDouble;",
			arg0.object<jdoubleArray>(),
			arg1,
			arg2
		);
	}
	inline JObject Arrays::spliterator(JIntArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"spliterator",
			"([I)Ljava/util/Spliterator$OfInt;",
			arg0.object<jintArray>()
		);
	}
	inline JObject Arrays::spliterator(JIntArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"spliterator",
			"([III)Ljava/util/Spliterator$OfInt;",
			arg0.object<jintArray>(),
			arg1,
			arg2
		);
	}
	inline JObject Arrays::spliterator(JLongArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"spliterator",
			"([J)Ljava/util/Spliterator$OfLong;",
			arg0.object<jlongArray>()
		);
	}
	inline JObject Arrays::spliterator(JLongArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"spliterator",
			"([JII)Ljava/util/Spliterator$OfLong;",
			arg0.object<jlongArray>(),
			arg1,
			arg2
		);
	}
	inline JObject Arrays::stream(JDoubleArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"stream",
			"([D)Ljava/util/stream/DoubleStream;",
			arg0.object<jdoubleArray>()
		);
	}
	inline JObject Arrays::stream(JDoubleArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"stream",
			"([DII)Ljava/util/stream/DoubleStream;",
			arg0.object<jdoubleArray>(),
			arg1,
			arg2
		);
	}
	inline JObject Arrays::stream(JIntArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"stream",
			"([I)Ljava/util/stream/IntStream;",
			arg0.object<jintArray>()
		);
	}
	inline JObject Arrays::stream(JIntArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"stream",
			"([III)Ljava/util/stream/IntStream;",
			arg0.object<jintArray>(),
			arg1,
			arg2
		);
	}
	inline JObject Arrays::stream(JLongArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"stream",
			"([J)Ljava/util/stream/LongStream;",
			arg0.object<jlongArray>()
		);
	}
	inline JObject Arrays::stream(JLongArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"stream",
			"([JII)Ljava/util/stream/LongStream;",
			arg0.object<jlongArray>(),
			arg1,
			arg2
		);
	}
	inline JObject Arrays::stream(JObjectArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"stream",
			"([Ljava/lang/Object;)Ljava/util/stream/Stream;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject Arrays::stream(JObjectArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"stream",
			"([Ljava/lang/Object;II)Ljava/util/stream/Stream;",
			arg0.object<jobjectArray>(),
			arg1,
			arg2
		);
	}
	inline JString Arrays::toString(JByteArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"toString",
			"([B)Ljava/lang/String;",
			arg0.object<jbyteArray>()
		);
	}
	inline JString Arrays::toString(JCharArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"toString",
			"([C)Ljava/lang/String;",
			arg0.object<jcharArray>()
		);
	}
	inline JString Arrays::toString(JDoubleArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"toString",
			"([D)Ljava/lang/String;",
			arg0.object<jdoubleArray>()
		);
	}
	inline JString Arrays::toString(JFloatArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"toString",
			"([F)Ljava/lang/String;",
			arg0.object<jfloatArray>()
		);
	}
	inline JString Arrays::toString(JIntArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"toString",
			"([I)Ljava/lang/String;",
			arg0.object<jintArray>()
		);
	}
	inline JString Arrays::toString(JLongArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"toString",
			"([J)Ljava/lang/String;",
			arg0.object<jlongArray>()
		);
	}
	inline JString Arrays::toString(JObjectArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"toString",
			"([Ljava/lang/Object;)Ljava/lang/String;",
			arg0.object<jobjectArray>()
		);
	}
	inline JString Arrays::toString(JShortArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"toString",
			"([S)Ljava/lang/String;",
			arg0.object<jshortArray>()
		);
	}
	inline JString Arrays::toString(JBooleanArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"toString",
			"([Z)Ljava/lang/String;",
			arg0.object<jbooleanArray>()
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
