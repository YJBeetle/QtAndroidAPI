#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	StringBuffer::StringBuffer(JString arg0)
		: JObject(
			"java.lang.StringBuffer",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	java::lang::StringBuffer StringBuffer::append(JCharArray arg0) const
	{
		return callObjectMethod(
			"append",
			"([C)Ljava/lang/StringBuffer;",
			arg0.object<jcharArray>()
		);
	}
	java::lang::StringBuffer StringBuffer::append(jboolean arg0) const
	{
		return callObjectMethod(
			"append",
			"(Z)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	java::lang::StringBuffer StringBuffer::append(jchar arg0) const
	{
		return callObjectMethod(
			"append",
			"(C)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	java::lang::StringBuffer StringBuffer::append(jdouble arg0) const
	{
		return callObjectMethod(
			"append",
			"(D)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	java::lang::StringBuffer StringBuffer::append(jfloat arg0) const
	{
		return callObjectMethod(
			"append",
			"(F)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	java::lang::StringBuffer StringBuffer::append(jint arg0) const
	{
		return callObjectMethod(
			"append",
			"(I)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	java::lang::StringBuffer StringBuffer::append(JString arg0) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/lang/StringBuffer;",
			arg0.object<jstring>()
		);
	}
	java::lang::StringBuffer StringBuffer::append(JObject arg0) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/Object;)Ljava/lang/StringBuffer;",
			arg0.object<jobject>()
		);
	}
	java::lang::StringBuffer StringBuffer::append(java::lang::StringBuffer arg0) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;",
			arg0.object()
		);
	}
	java::lang::StringBuffer StringBuffer::append(jlong arg0) const
	{
		return callObjectMethod(
			"append",
			"(J)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	java::lang::StringBuffer StringBuffer::append(JCharArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"append",
			"([CII)Ljava/lang/StringBuffer;",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	java::lang::StringBuffer StringBuffer::append(JString arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/lang/StringBuffer;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	java::lang::StringBuffer StringBuffer::appendCodePoint(jint arg0) const
	{
		return callObjectMethod(
			"appendCodePoint",
			"(I)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	jint StringBuffer::capacity() const
	{
		return callMethod<jint>(
			"capacity",
			"()I"
		);
	}
	jchar StringBuffer::charAt(jint arg0) const
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	JObject StringBuffer::chars() const
	{
		return callObjectMethod(
			"chars",
			"()Ljava/util/stream/IntStream;"
		);
	}
	jint StringBuffer::codePointAt(jint arg0) const
	{
		return callMethod<jint>(
			"codePointAt",
			"(I)I",
			arg0
		);
	}
	jint StringBuffer::codePointBefore(jint arg0) const
	{
		return callMethod<jint>(
			"codePointBefore",
			"(I)I",
			arg0
		);
	}
	jint StringBuffer::codePointCount(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"codePointCount",
			"(II)I",
			arg0,
			arg1
		);
	}
	JObject StringBuffer::codePoints() const
	{
		return callObjectMethod(
			"codePoints",
			"()Ljava/util/stream/IntStream;"
		);
	}
	jint StringBuffer::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint StringBuffer::compareTo(java::lang::StringBuffer arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/StringBuffer;)I",
			arg0.object()
		);
	}
	java::lang::StringBuffer StringBuffer::_delete(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"delete",
			"(II)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuffer StringBuffer::deleteCharAt(jint arg0) const
	{
		return callObjectMethod(
			"deleteCharAt",
			"(I)Ljava/lang/StringBuffer;",
			arg0
		);
	}
	void StringBuffer::ensureCapacity(jint arg0) const
	{
		callMethod<void>(
			"ensureCapacity",
			"(I)V",
			arg0
		);
	}
	void StringBuffer::getChars(jint arg0, jint arg1, JCharArray arg2, jint arg3) const
	{
		callMethod<void>(
			"getChars",
			"(II[CI)V",
			arg0,
			arg1,
			arg2.object<jcharArray>(),
			arg3
		);
	}
	jint StringBuffer::indexOf(JString arg0) const
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jint StringBuffer::indexOf(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	java::lang::StringBuffer StringBuffer::insert(jint arg0, JCharArray arg1) const
	{
		return callObjectMethod(
			"insert",
			"(I[C)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object<jcharArray>()
		);
	}
	java::lang::StringBuffer StringBuffer::insert(jint arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"insert",
			"(IZ)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuffer StringBuffer::insert(jint arg0, jchar arg1) const
	{
		return callObjectMethod(
			"insert",
			"(IC)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuffer StringBuffer::insert(jint arg0, jdouble arg1) const
	{
		return callObjectMethod(
			"insert",
			"(ID)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuffer StringBuffer::insert(jint arg0, jfloat arg1) const
	{
		return callObjectMethod(
			"insert",
			"(IF)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuffer StringBuffer::insert(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"insert",
			"(II)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuffer StringBuffer::insert(jint arg0, JString arg1) const
	{
		return callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object<jstring>()
		);
	}
	java::lang::StringBuffer StringBuffer::insert(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"insert",
			"(ILjava/lang/Object;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object<jobject>()
		);
	}
	java::lang::StringBuffer StringBuffer::insert(jint arg0, jlong arg1) const
	{
		return callObjectMethod(
			"insert",
			"(IJ)Ljava/lang/StringBuffer;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuffer StringBuffer::insert(jint arg0, JCharArray arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"insert",
			"(I[CII)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object<jcharArray>(),
			arg2,
			arg3
		);
	}
	java::lang::StringBuffer StringBuffer::insert(jint arg0, JString arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;II)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object<jstring>(),
			arg2,
			arg3
		);
	}
	jint StringBuffer::lastIndexOf(JString arg0) const
	{
		return callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jint StringBuffer::lastIndexOf(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	jint StringBuffer::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	jint StringBuffer::offsetByCodePoints(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"offsetByCodePoints",
			"(II)I",
			arg0,
			arg1
		);
	}
	java::lang::StringBuffer StringBuffer::replace(jint arg0, jint arg1, JString arg2) const
	{
		return callObjectMethod(
			"replace",
			"(IILjava/lang/String;)Ljava/lang/StringBuffer;",
			arg0,
			arg1,
			arg2.object<jstring>()
		);
	}
	java::lang::StringBuffer StringBuffer::reverse() const
	{
		return callObjectMethod(
			"reverse",
			"()Ljava/lang/StringBuffer;"
		);
	}
	void StringBuffer::setCharAt(jint arg0, jchar arg1) const
	{
		callMethod<void>(
			"setCharAt",
			"(IC)V",
			arg0,
			arg1
		);
	}
	void StringBuffer::setLength(jint arg0) const
	{
		callMethod<void>(
			"setLength",
			"(I)V",
			arg0
		);
	}
	JString StringBuffer::subSequence(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	JString StringBuffer::substring(jint arg0) const
	{
		return callObjectMethod(
			"substring",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString StringBuffer::substring(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"substring",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	JString StringBuffer::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void StringBuffer::trimToSize() const
	{
		callMethod<void>(
			"trimToSize",
			"()V"
		);
	}
} // namespace java::lang

