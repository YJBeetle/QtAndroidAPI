#include "../lang/StringBuilder.hpp"
#include "./Arrays.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	Arrays::Arrays(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass Arrays::asList(jobjectArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"asList",
			"([Ljava/lang/Object;)Ljava/util/List;",
			arg0
		);
	}
	jint Arrays::binarySearch(jbyteArray arg0, jbyte arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([BB)I",
			arg0,
			arg1
		);
	}
	jint Arrays::binarySearch(jcharArray arg0, jchar arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([CC)I",
			arg0,
			arg1
		);
	}
	jint Arrays::binarySearch(jdoubleArray arg0, jdouble arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([DD)I",
			arg0,
			arg1
		);
	}
	jint Arrays::binarySearch(jfloatArray arg0, jfloat arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([FF)I",
			arg0,
			arg1
		);
	}
	jint Arrays::binarySearch(jintArray arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([II)I",
			arg0,
			arg1
		);
	}
	jint Arrays::binarySearch(jlongArray arg0, jlong arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([JJ)I",
			arg0,
			arg1
		);
	}
	jint Arrays::binarySearch(jobjectArray arg0, jobject arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([Ljava/lang/Object;Ljava/lang/Object;)I",
			arg0,
			arg1
		);
	}
	jint Arrays::binarySearch(jshortArray arg0, jshort arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([SS)I",
			arg0,
			arg1
		);
	}
	jint Arrays::binarySearch(jobjectArray arg0, jobject arg1, __JniBaseClass arg2)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([Ljava/lang/Object;Ljava/lang/Object;Ljava/util/Comparator;)I",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jint Arrays::binarySearch(jbyteArray arg0, jint arg1, jint arg2, jbyte arg3)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([BIIB)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint Arrays::binarySearch(jcharArray arg0, jint arg1, jint arg2, jchar arg3)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([CIIC)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint Arrays::binarySearch(jdoubleArray arg0, jint arg1, jint arg2, jdouble arg3)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([DIID)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint Arrays::binarySearch(jfloatArray arg0, jint arg1, jint arg2, jfloat arg3)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([FIIF)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint Arrays::binarySearch(jintArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([IIII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint Arrays::binarySearch(jlongArray arg0, jint arg1, jint arg2, jlong arg3)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([JIIJ)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint Arrays::binarySearch(jobjectArray arg0, jint arg1, jint arg2, jobject arg3)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([Ljava/lang/Object;IILjava/lang/Object;)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint Arrays::binarySearch(jshortArray arg0, jint arg1, jint arg2, jshort arg3)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([SIIS)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint Arrays::binarySearch(jobjectArray arg0, jint arg1, jint arg2, jobject arg3, __JniBaseClass arg4)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"binarySearch",
			"([Ljava/lang/Object;IILjava/lang/Object;Ljava/util/Comparator;)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	jint Arrays::compare(jbyteArray arg0, jbyteArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([B[B)I",
			arg0,
			arg1
		);
	}
	jint Arrays::compare(jcharArray arg0, jcharArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([C[C)I",
			arg0,
			arg1
		);
	}
	jint Arrays::compare(jdoubleArray arg0, jdoubleArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([D[D)I",
			arg0,
			arg1
		);
	}
	jint Arrays::compare(jfloatArray arg0, jfloatArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([F[F)I",
			arg0,
			arg1
		);
	}
	jint Arrays::compare(jintArray arg0, jintArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([I[I)I",
			arg0,
			arg1
		);
	}
	jint Arrays::compare(jlongArray arg0, jlongArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([J[J)I",
			arg0,
			arg1
		);
	}
	jint Arrays::compare(jarray arg0, jarray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([Ljava/lang/Comparable;[Ljava/lang/Comparable;)I",
			arg0,
			arg1
		);
	}
	jint Arrays::compare(jshortArray arg0, jshortArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([S[S)I",
			arg0,
			arg1
		);
	}
	jint Arrays::compare(jbooleanArray arg0, jbooleanArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([Z[Z)I",
			arg0,
			arg1
		);
	}
	jint Arrays::compare(jobjectArray arg0, jobjectArray arg1, __JniBaseClass arg2)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)I",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jint Arrays::compare(jbyteArray arg0, jint arg1, jint arg2, jbyteArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([BII[BII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Arrays::compare(jcharArray arg0, jint arg1, jint arg2, jcharArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([CII[CII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Arrays::compare(jdoubleArray arg0, jint arg1, jint arg2, jdoubleArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([DII[DII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Arrays::compare(jfloatArray arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([FII[FII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Arrays::compare(jintArray arg0, jint arg1, jint arg2, jintArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([III[III)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Arrays::compare(jlongArray arg0, jint arg1, jint arg2, jlongArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([JII[JII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Arrays::compare(jarray arg0, jint arg1, jint arg2, jarray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([Ljava/lang/Comparable;II[Ljava/lang/Comparable;II)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Arrays::compare(jshortArray arg0, jint arg1, jint arg2, jshortArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([SII[SII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Arrays::compare(jbooleanArray arg0, jint arg1, jint arg2, jbooleanArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([ZII[ZII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Arrays::compare(jobjectArray arg0, jint arg1, jint arg2, jobjectArray arg3, jint arg4, jint arg5, __JniBaseClass arg6)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compare",
			"([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object()
		);
	}
	jint Arrays::compareUnsigned(jbyteArray arg0, jbyteArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compareUnsigned",
			"([B[B)I",
			arg0,
			arg1
		);
	}
	jint Arrays::compareUnsigned(jintArray arg0, jintArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compareUnsigned",
			"([I[I)I",
			arg0,
			arg1
		);
	}
	jint Arrays::compareUnsigned(jlongArray arg0, jlongArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compareUnsigned",
			"([J[J)I",
			arg0,
			arg1
		);
	}
	jint Arrays::compareUnsigned(jshortArray arg0, jshortArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compareUnsigned",
			"([S[S)I",
			arg0,
			arg1
		);
	}
	jint Arrays::compareUnsigned(jbyteArray arg0, jint arg1, jint arg2, jbyteArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compareUnsigned",
			"([BII[BII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Arrays::compareUnsigned(jintArray arg0, jint arg1, jint arg2, jintArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compareUnsigned",
			"([III[III)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Arrays::compareUnsigned(jlongArray arg0, jint arg1, jint arg2, jlongArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compareUnsigned",
			"([JII[JII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Arrays::compareUnsigned(jshortArray arg0, jint arg1, jint arg2, jshortArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"compareUnsigned",
			"([SII[SII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jbyteArray Arrays::copyOf(jbyteArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOf",
			"([BI)[B",
			arg0,
			arg1
		).object<jbyteArray>();
	}
	jcharArray Arrays::copyOf(jcharArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOf",
			"([CI)[C",
			arg0,
			arg1
		).object<jcharArray>();
	}
	jdoubleArray Arrays::copyOf(jdoubleArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOf",
			"([DI)[D",
			arg0,
			arg1
		).object<jdoubleArray>();
	}
	jfloatArray Arrays::copyOf(jfloatArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOf",
			"([FI)[F",
			arg0,
			arg1
		).object<jfloatArray>();
	}
	jintArray Arrays::copyOf(jintArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOf",
			"([II)[I",
			arg0,
			arg1
		).object<jintArray>();
	}
	jlongArray Arrays::copyOf(jlongArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOf",
			"([JI)[J",
			arg0,
			arg1
		).object<jlongArray>();
	}
	jobjectArray Arrays::copyOf(jobjectArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOf",
			"([Ljava/lang/Object;I)[Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobjectArray>();
	}
	jobjectArray Arrays::copyOf(jobjectArray arg0, jint arg1, jclass arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOf",
			"([Ljava/lang/Object;ILjava/lang/Class;)[Ljava/lang/Object;",
			arg0,
			arg1,
			arg2
		).object<jobjectArray>();
	}
	jshortArray Arrays::copyOf(jshortArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOf",
			"([SI)[S",
			arg0,
			arg1
		).object<jshortArray>();
	}
	jbooleanArray Arrays::copyOf(jbooleanArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOf",
			"([ZI)[Z",
			arg0,
			arg1
		).object<jbooleanArray>();
	}
	jbyteArray Arrays::copyOfRange(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOfRange",
			"([BII)[B",
			arg0,
			arg1,
			arg2
		).object<jbyteArray>();
	}
	jcharArray Arrays::copyOfRange(jcharArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOfRange",
			"([CII)[C",
			arg0,
			arg1,
			arg2
		).object<jcharArray>();
	}
	jdoubleArray Arrays::copyOfRange(jdoubleArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOfRange",
			"([DII)[D",
			arg0,
			arg1,
			arg2
		).object<jdoubleArray>();
	}
	jfloatArray Arrays::copyOfRange(jfloatArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOfRange",
			"([FII)[F",
			arg0,
			arg1,
			arg2
		).object<jfloatArray>();
	}
	jintArray Arrays::copyOfRange(jintArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOfRange",
			"([III)[I",
			arg0,
			arg1,
			arg2
		).object<jintArray>();
	}
	jlongArray Arrays::copyOfRange(jlongArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOfRange",
			"([JII)[J",
			arg0,
			arg1,
			arg2
		).object<jlongArray>();
	}
	jobjectArray Arrays::copyOfRange(jobjectArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOfRange",
			"([Ljava/lang/Object;II)[Ljava/lang/Object;",
			arg0,
			arg1,
			arg2
		).object<jobjectArray>();
	}
	jobjectArray Arrays::copyOfRange(jobjectArray arg0, jint arg1, jint arg2, jclass arg3)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOfRange",
			"([Ljava/lang/Object;IILjava/lang/Class;)[Ljava/lang/Object;",
			arg0,
			arg1,
			arg2,
			arg3
		).object<jobjectArray>();
	}
	jshortArray Arrays::copyOfRange(jshortArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOfRange",
			"([SII)[S",
			arg0,
			arg1,
			arg2
		).object<jshortArray>();
	}
	jbooleanArray Arrays::copyOfRange(jbooleanArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"copyOfRange",
			"([ZII)[Z",
			arg0,
			arg1,
			arg2
		).object<jbooleanArray>();
	}
	jboolean Arrays::deepEquals(jobjectArray arg0, jobjectArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"deepEquals",
			"([Ljava/lang/Object;[Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jint Arrays::deepHashCode(jobjectArray arg0)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"deepHashCode",
			"([Ljava/lang/Object;)I",
			arg0
		);
	}
	jstring Arrays::deepToString(jobjectArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"deepToString",
			"([Ljava/lang/Object;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean Arrays::equals(jbyteArray arg0, jbyteArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([B[B)Z",
			arg0,
			arg1
		);
	}
	jboolean Arrays::equals(jcharArray arg0, jcharArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([C[C)Z",
			arg0,
			arg1
		);
	}
	jboolean Arrays::equals(jdoubleArray arg0, jdoubleArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([D[D)Z",
			arg0,
			arg1
		);
	}
	jboolean Arrays::equals(jfloatArray arg0, jfloatArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([F[F)Z",
			arg0,
			arg1
		);
	}
	jboolean Arrays::equals(jintArray arg0, jintArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([I[I)Z",
			arg0,
			arg1
		);
	}
	jboolean Arrays::equals(jlongArray arg0, jlongArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([J[J)Z",
			arg0,
			arg1
		);
	}
	jboolean Arrays::equals(jobjectArray arg0, jobjectArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([Ljava/lang/Object;[Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jboolean Arrays::equals(jshortArray arg0, jshortArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([S[S)Z",
			arg0,
			arg1
		);
	}
	jboolean Arrays::equals(jbooleanArray arg0, jbooleanArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([Z[Z)Z",
			arg0,
			arg1
		);
	}
	jboolean Arrays::equals(jobjectArray arg0, jobjectArray arg1, __JniBaseClass arg2)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean Arrays::equals(jbyteArray arg0, jint arg1, jint arg2, jbyteArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([BII[BII)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jboolean Arrays::equals(jcharArray arg0, jint arg1, jint arg2, jcharArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([CII[CII)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jboolean Arrays::equals(jdoubleArray arg0, jint arg1, jint arg2, jdoubleArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([DII[DII)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jboolean Arrays::equals(jfloatArray arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([FII[FII)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jboolean Arrays::equals(jintArray arg0, jint arg1, jint arg2, jintArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([III[III)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jboolean Arrays::equals(jlongArray arg0, jint arg1, jint arg2, jlongArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([JII[JII)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jboolean Arrays::equals(jobjectArray arg0, jint arg1, jint arg2, jobjectArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([Ljava/lang/Object;II[Ljava/lang/Object;II)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jboolean Arrays::equals(jshortArray arg0, jint arg1, jint arg2, jshortArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([SII[SII)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jboolean Arrays::equals(jbooleanArray arg0, jint arg1, jint arg2, jbooleanArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([ZII[ZII)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jboolean Arrays::equals(jobjectArray arg0, jint arg1, jint arg2, jobjectArray arg3, jint arg4, jint arg5, __JniBaseClass arg6)
	{
		return callStaticMethod<jboolean>(
			"java.util.Arrays",
			"equals",
			"([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object()
		);
	}
	void Arrays::fill(jbyteArray arg0, jbyte arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([BB)V",
			arg0,
			arg1
		);
	}
	void Arrays::fill(jcharArray arg0, jchar arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([CC)V",
			arg0,
			arg1
		);
	}
	void Arrays::fill(jdoubleArray arg0, jdouble arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([DD)V",
			arg0,
			arg1
		);
	}
	void Arrays::fill(jfloatArray arg0, jfloat arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([FF)V",
			arg0,
			arg1
		);
	}
	void Arrays::fill(jintArray arg0, jint arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([II)V",
			arg0,
			arg1
		);
	}
	void Arrays::fill(jlongArray arg0, jlong arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([JJ)V",
			arg0,
			arg1
		);
	}
	void Arrays::fill(jobjectArray arg0, jobject arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void Arrays::fill(jshortArray arg0, jshort arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([SS)V",
			arg0,
			arg1
		);
	}
	void Arrays::fill(jbooleanArray arg0, jboolean arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([ZZ)V",
			arg0,
			arg1
		);
	}
	void Arrays::fill(jbyteArray arg0, jint arg1, jint arg2, jbyte arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([BIIB)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Arrays::fill(jcharArray arg0, jint arg1, jint arg2, jchar arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([CIIC)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Arrays::fill(jdoubleArray arg0, jint arg1, jint arg2, jdouble arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([DIID)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Arrays::fill(jfloatArray arg0, jint arg1, jint arg2, jfloat arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([FIIF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Arrays::fill(jintArray arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Arrays::fill(jlongArray arg0, jint arg1, jint arg2, jlong arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([JIIJ)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Arrays::fill(jobjectArray arg0, jint arg1, jint arg2, jobject arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([Ljava/lang/Object;IILjava/lang/Object;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Arrays::fill(jshortArray arg0, jint arg1, jint arg2, jshort arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([SIIS)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Arrays::fill(jbooleanArray arg0, jint arg1, jint arg2, jboolean arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"fill",
			"([ZIIZ)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint Arrays::hashCode(jbyteArray arg0)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"hashCode",
			"([B)I",
			arg0
		);
	}
	jint Arrays::hashCode(jcharArray arg0)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"hashCode",
			"([C)I",
			arg0
		);
	}
	jint Arrays::hashCode(jdoubleArray arg0)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"hashCode",
			"([D)I",
			arg0
		);
	}
	jint Arrays::hashCode(jfloatArray arg0)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"hashCode",
			"([F)I",
			arg0
		);
	}
	jint Arrays::hashCode(jintArray arg0)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"hashCode",
			"([I)I",
			arg0
		);
	}
	jint Arrays::hashCode(jlongArray arg0)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"hashCode",
			"([J)I",
			arg0
		);
	}
	jint Arrays::hashCode(jobjectArray arg0)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"hashCode",
			"([Ljava/lang/Object;)I",
			arg0
		);
	}
	jint Arrays::hashCode(jshortArray arg0)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"hashCode",
			"([S)I",
			arg0
		);
	}
	jint Arrays::hashCode(jbooleanArray arg0)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"hashCode",
			"([Z)I",
			arg0
		);
	}
	jint Arrays::mismatch(jbyteArray arg0, jbyteArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([B[B)I",
			arg0,
			arg1
		);
	}
	jint Arrays::mismatch(jcharArray arg0, jcharArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([C[C)I",
			arg0,
			arg1
		);
	}
	jint Arrays::mismatch(jdoubleArray arg0, jdoubleArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([D[D)I",
			arg0,
			arg1
		);
	}
	jint Arrays::mismatch(jfloatArray arg0, jfloatArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([F[F)I",
			arg0,
			arg1
		);
	}
	jint Arrays::mismatch(jintArray arg0, jintArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([I[I)I",
			arg0,
			arg1
		);
	}
	jint Arrays::mismatch(jlongArray arg0, jlongArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([J[J)I",
			arg0,
			arg1
		);
	}
	jint Arrays::mismatch(jobjectArray arg0, jobjectArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([Ljava/lang/Object;[Ljava/lang/Object;)I",
			arg0,
			arg1
		);
	}
	jint Arrays::mismatch(jshortArray arg0, jshortArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([S[S)I",
			arg0,
			arg1
		);
	}
	jint Arrays::mismatch(jbooleanArray arg0, jbooleanArray arg1)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([Z[Z)I",
			arg0,
			arg1
		);
	}
	jint Arrays::mismatch(jobjectArray arg0, jobjectArray arg1, __JniBaseClass arg2)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)I",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jint Arrays::mismatch(jbyteArray arg0, jint arg1, jint arg2, jbyteArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([BII[BII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Arrays::mismatch(jcharArray arg0, jint arg1, jint arg2, jcharArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([CII[CII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Arrays::mismatch(jdoubleArray arg0, jint arg1, jint arg2, jdoubleArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([DII[DII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Arrays::mismatch(jfloatArray arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([FII[FII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Arrays::mismatch(jintArray arg0, jint arg1, jint arg2, jintArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([III[III)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Arrays::mismatch(jlongArray arg0, jint arg1, jint arg2, jlongArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([JII[JII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Arrays::mismatch(jobjectArray arg0, jint arg1, jint arg2, jobjectArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([Ljava/lang/Object;II[Ljava/lang/Object;II)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Arrays::mismatch(jshortArray arg0, jint arg1, jint arg2, jshortArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([SII[SII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Arrays::mismatch(jbooleanArray arg0, jint arg1, jint arg2, jbooleanArray arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([ZII[ZII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Arrays::mismatch(jobjectArray arg0, jint arg1, jint arg2, jobjectArray arg3, jint arg4, jint arg5, __JniBaseClass arg6)
	{
		return callStaticMethod<jint>(
			"java.util.Arrays",
			"mismatch",
			"([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object()
		);
	}
	void Arrays::parallelPrefix(jdoubleArray arg0, __JniBaseClass arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelPrefix",
			"([DLjava/util/function/DoubleBinaryOperator;)V",
			arg0,
			arg1.object()
		);
	}
	void Arrays::parallelPrefix(jintArray arg0, __JniBaseClass arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelPrefix",
			"([ILjava/util/function/IntBinaryOperator;)V",
			arg0,
			arg1.object()
		);
	}
	void Arrays::parallelPrefix(jlongArray arg0, __JniBaseClass arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelPrefix",
			"([JLjava/util/function/LongBinaryOperator;)V",
			arg0,
			arg1.object()
		);
	}
	void Arrays::parallelPrefix(jobjectArray arg0, __JniBaseClass arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelPrefix",
			"([Ljava/lang/Object;Ljava/util/function/BinaryOperator;)V",
			arg0,
			arg1.object()
		);
	}
	void Arrays::parallelPrefix(jdoubleArray arg0, jint arg1, jint arg2, __JniBaseClass arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelPrefix",
			"([DIILjava/util/function/DoubleBinaryOperator;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void Arrays::parallelPrefix(jintArray arg0, jint arg1, jint arg2, __JniBaseClass arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelPrefix",
			"([IIILjava/util/function/IntBinaryOperator;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void Arrays::parallelPrefix(jlongArray arg0, jint arg1, jint arg2, __JniBaseClass arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelPrefix",
			"([JIILjava/util/function/LongBinaryOperator;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void Arrays::parallelPrefix(jobjectArray arg0, jint arg1, jint arg2, __JniBaseClass arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelPrefix",
			"([Ljava/lang/Object;IILjava/util/function/BinaryOperator;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void Arrays::parallelSetAll(jdoubleArray arg0, __JniBaseClass arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSetAll",
			"([DLjava/util/function/IntToDoubleFunction;)V",
			arg0,
			arg1.object()
		);
	}
	void Arrays::parallelSetAll(jintArray arg0, __JniBaseClass arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSetAll",
			"([ILjava/util/function/IntUnaryOperator;)V",
			arg0,
			arg1.object()
		);
	}
	void Arrays::parallelSetAll(jlongArray arg0, __JniBaseClass arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSetAll",
			"([JLjava/util/function/IntToLongFunction;)V",
			arg0,
			arg1.object()
		);
	}
	void Arrays::parallelSetAll(jobjectArray arg0, __JniBaseClass arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSetAll",
			"([Ljava/lang/Object;Ljava/util/function/IntFunction;)V",
			arg0,
			arg1.object()
		);
	}
	void Arrays::parallelSort(jbyteArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([B)V",
			arg0
		);
	}
	void Arrays::parallelSort(jcharArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([C)V",
			arg0
		);
	}
	void Arrays::parallelSort(jdoubleArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([D)V",
			arg0
		);
	}
	void Arrays::parallelSort(jfloatArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([F)V",
			arg0
		);
	}
	void Arrays::parallelSort(jintArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([I)V",
			arg0
		);
	}
	void Arrays::parallelSort(jlongArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([J)V",
			arg0
		);
	}
	void Arrays::parallelSort(jarray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([Ljava/lang/Comparable;)V",
			arg0
		);
	}
	void Arrays::parallelSort(jshortArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([S)V",
			arg0
		);
	}
	void Arrays::parallelSort(jobjectArray arg0, __JniBaseClass arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([Ljava/lang/Object;Ljava/util/Comparator;)V",
			arg0,
			arg1.object()
		);
	}
	void Arrays::parallelSort(jbyteArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Arrays::parallelSort(jcharArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Arrays::parallelSort(jdoubleArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([DII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Arrays::parallelSort(jfloatArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([FII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Arrays::parallelSort(jintArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Arrays::parallelSort(jlongArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([JII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Arrays::parallelSort(jarray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([Ljava/lang/Comparable;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Arrays::parallelSort(jshortArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([SII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Arrays::parallelSort(jobjectArray arg0, jint arg1, jint arg2, __JniBaseClass arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"parallelSort",
			"([Ljava/lang/Object;IILjava/util/Comparator;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void Arrays::setAll(jdoubleArray arg0, __JniBaseClass arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"setAll",
			"([DLjava/util/function/IntToDoubleFunction;)V",
			arg0,
			arg1.object()
		);
	}
	void Arrays::setAll(jintArray arg0, __JniBaseClass arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"setAll",
			"([ILjava/util/function/IntUnaryOperator;)V",
			arg0,
			arg1.object()
		);
	}
	void Arrays::setAll(jlongArray arg0, __JniBaseClass arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"setAll",
			"([JLjava/util/function/IntToLongFunction;)V",
			arg0,
			arg1.object()
		);
	}
	void Arrays::setAll(jobjectArray arg0, __JniBaseClass arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"setAll",
			"([Ljava/lang/Object;Ljava/util/function/IntFunction;)V",
			arg0,
			arg1.object()
		);
	}
	void Arrays::sort(jbyteArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([B)V",
			arg0
		);
	}
	void Arrays::sort(jcharArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([C)V",
			arg0
		);
	}
	void Arrays::sort(jdoubleArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([D)V",
			arg0
		);
	}
	void Arrays::sort(jfloatArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([F)V",
			arg0
		);
	}
	void Arrays::sort(jintArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([I)V",
			arg0
		);
	}
	void Arrays::sort(jlongArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([J)V",
			arg0
		);
	}
	void Arrays::sort(jobjectArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([Ljava/lang/Object;)V",
			arg0
		);
	}
	void Arrays::sort(jshortArray arg0)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([S)V",
			arg0
		);
	}
	void Arrays::sort(jobjectArray arg0, __JniBaseClass arg1)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([Ljava/lang/Object;Ljava/util/Comparator;)V",
			arg0,
			arg1.object()
		);
	}
	void Arrays::sort(jbyteArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Arrays::sort(jcharArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Arrays::sort(jdoubleArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([DII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Arrays::sort(jfloatArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([FII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Arrays::sort(jintArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Arrays::sort(jlongArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([JII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Arrays::sort(jobjectArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([Ljava/lang/Object;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Arrays::sort(jshortArray arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([SII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Arrays::sort(jobjectArray arg0, jint arg1, jint arg2, __JniBaseClass arg3)
	{
		callStaticMethod<void>(
			"java.util.Arrays",
			"sort",
			"([Ljava/lang/Object;IILjava/util/Comparator;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	__JniBaseClass Arrays::spliterator(jobjectArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"spliterator",
			"([Ljava/lang/Object;)Ljava/util/Spliterator;",
			arg0
		);
	}
	__JniBaseClass Arrays::spliterator(jobjectArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"spliterator",
			"([Ljava/lang/Object;II)Ljava/util/Spliterator;",
			arg0,
			arg1,
			arg2
		);
	}
	__JniBaseClass Arrays::spliterator(jdoubleArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"spliterator",
			"([D)Ljava/util/Spliterator$OfDouble;",
			arg0
		);
	}
	__JniBaseClass Arrays::spliterator(jdoubleArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"spliterator",
			"([DII)Ljava/util/Spliterator$OfDouble;",
			arg0,
			arg1,
			arg2
		);
	}
	__JniBaseClass Arrays::spliterator(jintArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"spliterator",
			"([I)Ljava/util/Spliterator$OfInt;",
			arg0
		);
	}
	__JniBaseClass Arrays::spliterator(jintArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"spliterator",
			"([III)Ljava/util/Spliterator$OfInt;",
			arg0,
			arg1,
			arg2
		);
	}
	__JniBaseClass Arrays::spliterator(jlongArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"spliterator",
			"([J)Ljava/util/Spliterator$OfLong;",
			arg0
		);
	}
	__JniBaseClass Arrays::spliterator(jlongArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"spliterator",
			"([JII)Ljava/util/Spliterator$OfLong;",
			arg0,
			arg1,
			arg2
		);
	}
	__JniBaseClass Arrays::stream(jdoubleArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"stream",
			"([D)Ljava/util/stream/DoubleStream;",
			arg0
		);
	}
	__JniBaseClass Arrays::stream(jdoubleArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"stream",
			"([DII)Ljava/util/stream/DoubleStream;",
			arg0,
			arg1,
			arg2
		);
	}
	__JniBaseClass Arrays::stream(jintArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"stream",
			"([I)Ljava/util/stream/IntStream;",
			arg0
		);
	}
	__JniBaseClass Arrays::stream(jintArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"stream",
			"([III)Ljava/util/stream/IntStream;",
			arg0,
			arg1,
			arg2
		);
	}
	__JniBaseClass Arrays::stream(jlongArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"stream",
			"([J)Ljava/util/stream/LongStream;",
			arg0
		);
	}
	__JniBaseClass Arrays::stream(jlongArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"stream",
			"([JII)Ljava/util/stream/LongStream;",
			arg0,
			arg1,
			arg2
		);
	}
	__JniBaseClass Arrays::stream(jobjectArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"stream",
			"([Ljava/lang/Object;)Ljava/util/stream/Stream;",
			arg0
		);
	}
	__JniBaseClass Arrays::stream(jobjectArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"stream",
			"([Ljava/lang/Object;II)Ljava/util/stream/Stream;",
			arg0,
			arg1,
			arg2
		);
	}
	jstring Arrays::toString(jbyteArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"toString",
			"([B)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Arrays::toString(jcharArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"toString",
			"([C)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Arrays::toString(jdoubleArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"toString",
			"([D)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Arrays::toString(jfloatArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"toString",
			"([F)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Arrays::toString(jintArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"toString",
			"([I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Arrays::toString(jlongArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"toString",
			"([J)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Arrays::toString(jobjectArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"toString",
			"([Ljava/lang/Object;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Arrays::toString(jshortArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"toString",
			"([S)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Arrays::toString(jbooleanArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.Arrays",
			"toString",
			"([Z)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace java::util

