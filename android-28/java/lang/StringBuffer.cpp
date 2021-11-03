#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./StringBuffer.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	StringBuffer::StringBuffer(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	StringBuffer::StringBuffer()
		: JObject(
			"java.lang.StringBuffer",
			"()V"
		) {}
	StringBuffer::StringBuffer(jint arg0)
		: JObject(
			"java.lang.StringBuffer",
			"(I)V",
			arg0
		) {}
	StringBuffer::StringBuffer(jstring arg0)
		: JObject(
			"java.lang.StringBuffer",
			"(Ljava/lang/CharSequence;)V",
			arg0
		) {}
	
	// Methods
	java::lang::StringBuffer StringBuffer::append(jcharArray arg0)
	{
		return callObjectMethod(
			"append",
			"([C)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	java::lang::StringBuffer StringBuffer::append(jboolean arg0)
	{
		return callObjectMethod(
			"append",
			"(Z)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	java::lang::StringBuffer StringBuffer::append(jchar arg0)
	{
		return callObjectMethod(
			"append",
			"(C)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	java::lang::StringBuffer StringBuffer::append(jdouble arg0)
	{
		return callObjectMethod(
			"append",
			"(D)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	java::lang::StringBuffer StringBuffer::append(jfloat arg0)
	{
		return callObjectMethod(
			"append",
			"(F)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	java::lang::StringBuffer StringBuffer::append(jint arg0)
	{
		return callObjectMethod(
			"append",
			"(I)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	java::lang::StringBuffer StringBuffer::append(jstring arg0)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	java::lang::StringBuffer StringBuffer::append(jobject arg0)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/Object;)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	java::lang::StringBuffer StringBuffer::append(java::lang::StringBuffer arg0)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;",
			arg0.object()
		);
	}
	java::lang::StringBuffer StringBuffer::append(jlong arg0)
	{
		return callObjectMethod(
			"append",
			"(J)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	java::lang::StringBuffer StringBuffer::append(jcharArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"append",
			"([CII)Ljava/lang/StringBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	java::lang::StringBuffer StringBuffer::append(jstring arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/lang/StringBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	java::lang::StringBuffer StringBuffer::appendCodePoint(jint arg0)
	{
		return callObjectMethod(
			"appendCodePoint",
			"(I)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	jint StringBuffer::capacity()
	{
		return callMethod<jint>(
			"capacity",
			"()I"
		);
	}
	jchar StringBuffer::charAt(jint arg0)
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	JObject StringBuffer::chars()
	{
		return callObjectMethod(
			"chars",
			"()Ljava/util/stream/IntStream;"
		);
	}
	jint StringBuffer::codePointAt(jint arg0)
	{
		return callMethod<jint>(
			"codePointAt",
			"(I)I",
			arg0
		);
	}
	jint StringBuffer::codePointBefore(jint arg0)
	{
		return callMethod<jint>(
			"codePointBefore",
			"(I)I",
			arg0
		);
	}
	jint StringBuffer::codePointCount(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"codePointCount",
			"(II)I",
			arg0,
			arg1
		);
	}
	JObject StringBuffer::codePoints()
	{
		return callObjectMethod(
			"codePoints",
			"()Ljava/util/stream/IntStream;"
		);
	}
	jint StringBuffer::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint StringBuffer::compareTo(java::lang::StringBuffer arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/StringBuffer;)I",
			arg0.object()
		);
	}
	java::lang::StringBuffer StringBuffer::_delete(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"delete",
			"(II)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuffer StringBuffer::deleteCharAt(jint arg0)
	{
		return callObjectMethod(
			"deleteCharAt",
			"(I)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	void StringBuffer::ensureCapacity(jint arg0)
	{
		callMethod<void>(
			"ensureCapacity",
			"(I)V",
			arg0
		);
	}
	void StringBuffer::getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3)
	{
		callMethod<void>(
			"getChars",
			"(II[CI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint StringBuffer::indexOf(jstring arg0)
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint StringBuffer::indexOf(jstring arg0, jint arg1)
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	java::lang::StringBuffer StringBuffer::insert(jint arg0, jcharArray arg1)
	{
		return callObjectMethod(
			"insert",
			"(I[C)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuffer StringBuffer::insert(jint arg0, jboolean arg1)
	{
		return callObjectMethod(
			"insert",
			"(IZ)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuffer StringBuffer::insert(jint arg0, jchar arg1)
	{
		return callObjectMethod(
			"insert",
			"(IC)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuffer StringBuffer::insert(jint arg0, jdouble arg1)
	{
		return callObjectMethod(
			"insert",
			"(ID)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuffer StringBuffer::insert(jint arg0, jfloat arg1)
	{
		return callObjectMethod(
			"insert",
			"(IF)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuffer StringBuffer::insert(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"insert",
			"(II)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuffer StringBuffer::insert(jint arg0, jstring arg1)
	{
		return callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuffer StringBuffer::insert(jint arg0, jobject arg1)
	{
		return callObjectMethod(
			"insert",
			"(ILjava/lang/Object;)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuffer StringBuffer::insert(jint arg0, jlong arg1)
	{
		return callObjectMethod(
			"insert",
			"(IJ)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuffer StringBuffer::insert(jint arg0, jcharArray arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"insert",
			"(I[CII)Ljava/lang/StringBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	java::lang::StringBuffer StringBuffer::insert(jint arg0, jstring arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;II)Ljava/lang/StringBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint StringBuffer::lastIndexOf(jstring arg0)
	{
		return callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint StringBuffer::lastIndexOf(jstring arg0, jint arg1)
	{
		return callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	jint StringBuffer::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	jint StringBuffer::offsetByCodePoints(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"offsetByCodePoints",
			"(II)I",
			arg0,
			arg1
		);
	}
	java::lang::StringBuffer StringBuffer::replace(jint arg0, jint arg1, jstring arg2)
	{
		return callObjectMethod(
			"replace",
			"(IILjava/lang/String;)Ljava/lang/StringBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	java::lang::StringBuffer StringBuffer::reverse()
	{
		return callObjectMethod(
			"reverse",
			"()Ljava/lang/StringBuffer;"
		);
	}
	void StringBuffer::setCharAt(jint arg0, jchar arg1)
	{
		callMethod<void>(
			"setCharAt",
			"(IC)V",
			arg0,
			arg1
		);
	}
	void StringBuffer::setLength(jint arg0)
	{
		callMethod<void>(
			"setLength",
			"(I)V",
			arg0
		);
	}
	jstring StringBuffer::subSequence(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring StringBuffer::substring(jint arg0)
	{
		return callObjectMethod(
			"substring",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring StringBuffer::substring(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"substring",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring StringBuffer::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void StringBuffer::trimToSize()
	{
		callMethod<void>(
			"trimToSize",
			"()V"
		);
	}
} // namespace java::lang

