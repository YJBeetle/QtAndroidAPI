#include "../../JCharArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./StringBuffer.hpp"
#include "./StringBuilder.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	StringBuilder::StringBuilder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	StringBuilder::StringBuilder()
		: JObject(
			"java.lang.StringBuilder",
			"()V"
		) {}
	StringBuilder::StringBuilder(jint arg0)
		: JObject(
			"java.lang.StringBuilder",
			"(I)V",
			arg0
		) {}
	StringBuilder::StringBuilder(JString arg0)
		: JObject(
			"java.lang.StringBuilder",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	java::lang::StringBuilder StringBuilder::append(JCharArray arg0)
	{
		return callObjectMethod(
			"append",
			"([C)Ljava/lang/StringBuilder;",
			arg0.object<jcharArray>()
		);
	}
	java::lang::StringBuilder StringBuilder::append(jboolean arg0)
	{
		return callObjectMethod(
			"append",
			"(Z)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	java::lang::StringBuilder StringBuilder::append(jchar arg0)
	{
		return callObjectMethod(
			"append",
			"(C)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	java::lang::StringBuilder StringBuilder::append(jdouble arg0)
	{
		return callObjectMethod(
			"append",
			"(D)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	java::lang::StringBuilder StringBuilder::append(jfloat arg0)
	{
		return callObjectMethod(
			"append",
			"(F)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	java::lang::StringBuilder StringBuilder::append(jint arg0)
	{
		return callObjectMethod(
			"append",
			"(I)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	java::lang::StringBuilder StringBuilder::append(JString arg0)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;",
			arg0.object<jstring>()
		);
	}
	java::lang::StringBuilder StringBuilder::append(JObject arg0)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/Object;)Ljava/lang/StringBuilder;",
			arg0.object<jobject>()
		);
	}
	java::lang::StringBuilder StringBuilder::append(java::lang::StringBuffer arg0)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/StringBuffer;)Ljava/lang/StringBuilder;",
			arg0.object()
		);
	}
	java::lang::StringBuilder StringBuilder::append(jlong arg0)
	{
		return callObjectMethod(
			"append",
			"(J)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	java::lang::StringBuilder StringBuilder::append(JCharArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"append",
			"([CII)Ljava/lang/StringBuilder;",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	java::lang::StringBuilder StringBuilder::append(JString arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/lang/StringBuilder;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	java::lang::StringBuilder StringBuilder::appendCodePoint(jint arg0)
	{
		return callObjectMethod(
			"appendCodePoint",
			"(I)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	jint StringBuilder::capacity()
	{
		return callMethod<jint>(
			"capacity",
			"()I"
		);
	}
	jchar StringBuilder::charAt(jint arg0)
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	JObject StringBuilder::chars()
	{
		return callObjectMethod(
			"chars",
			"()Ljava/util/stream/IntStream;"
		);
	}
	jint StringBuilder::codePointAt(jint arg0)
	{
		return callMethod<jint>(
			"codePointAt",
			"(I)I",
			arg0
		);
	}
	jint StringBuilder::codePointBefore(jint arg0)
	{
		return callMethod<jint>(
			"codePointBefore",
			"(I)I",
			arg0
		);
	}
	jint StringBuilder::codePointCount(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"codePointCount",
			"(II)I",
			arg0,
			arg1
		);
	}
	JObject StringBuilder::codePoints()
	{
		return callObjectMethod(
			"codePoints",
			"()Ljava/util/stream/IntStream;"
		);
	}
	jint StringBuilder::compareTo(JObject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint StringBuilder::compareTo(java::lang::StringBuilder arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/StringBuilder;)I",
			arg0.object()
		);
	}
	java::lang::StringBuilder StringBuilder::_delete(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"delete",
			"(II)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuilder StringBuilder::deleteCharAt(jint arg0)
	{
		return callObjectMethod(
			"deleteCharAt",
			"(I)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	void StringBuilder::ensureCapacity(jint arg0)
	{
		callMethod<void>(
			"ensureCapacity",
			"(I)V",
			arg0
		);
	}
	void StringBuilder::getChars(jint arg0, jint arg1, JCharArray arg2, jint arg3)
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
	jint StringBuilder::indexOf(JString arg0)
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jint StringBuilder::indexOf(JString arg0, jint arg1)
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	java::lang::StringBuilder StringBuilder::insert(jint arg0, JCharArray arg1)
	{
		return callObjectMethod(
			"insert",
			"(I[C)Ljava/lang/StringBuilder;",
			arg0,
			arg1.object<jcharArray>()
		);
	}
	java::lang::StringBuilder StringBuilder::insert(jint arg0, jboolean arg1)
	{
		return callObjectMethod(
			"insert",
			"(IZ)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuilder StringBuilder::insert(jint arg0, jchar arg1)
	{
		return callObjectMethod(
			"insert",
			"(IC)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuilder StringBuilder::insert(jint arg0, jdouble arg1)
	{
		return callObjectMethod(
			"insert",
			"(ID)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuilder StringBuilder::insert(jint arg0, jfloat arg1)
	{
		return callObjectMethod(
			"insert",
			"(IF)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuilder StringBuilder::insert(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"insert",
			"(II)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuilder StringBuilder::insert(jint arg0, JString arg1)
	{
		return callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;)Ljava/lang/StringBuilder;",
			arg0,
			arg1.object<jstring>()
		);
	}
	java::lang::StringBuilder StringBuilder::insert(jint arg0, JObject arg1)
	{
		return callObjectMethod(
			"insert",
			"(ILjava/lang/Object;)Ljava/lang/StringBuilder;",
			arg0,
			arg1.object<jobject>()
		);
	}
	java::lang::StringBuilder StringBuilder::insert(jint arg0, jlong arg1)
	{
		return callObjectMethod(
			"insert",
			"(IJ)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	java::lang::StringBuilder StringBuilder::insert(jint arg0, JCharArray arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"insert",
			"(I[CII)Ljava/lang/StringBuilder;",
			arg0,
			arg1.object<jcharArray>(),
			arg2,
			arg3
		);
	}
	java::lang::StringBuilder StringBuilder::insert(jint arg0, JString arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;II)Ljava/lang/StringBuilder;",
			arg0,
			arg1.object<jstring>(),
			arg2,
			arg3
		);
	}
	jint StringBuilder::lastIndexOf(JString arg0)
	{
		return callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jint StringBuilder::lastIndexOf(JString arg0, jint arg1)
	{
		return callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	jint StringBuilder::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	jint StringBuilder::offsetByCodePoints(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"offsetByCodePoints",
			"(II)I",
			arg0,
			arg1
		);
	}
	java::lang::StringBuilder StringBuilder::replace(jint arg0, jint arg1, JString arg2)
	{
		return callObjectMethod(
			"replace",
			"(IILjava/lang/String;)Ljava/lang/StringBuilder;",
			arg0,
			arg1,
			arg2.object<jstring>()
		);
	}
	java::lang::StringBuilder StringBuilder::reverse()
	{
		return callObjectMethod(
			"reverse",
			"()Ljava/lang/StringBuilder;"
		);
	}
	void StringBuilder::setCharAt(jint arg0, jchar arg1)
	{
		callMethod<void>(
			"setCharAt",
			"(IC)V",
			arg0,
			arg1
		);
	}
	void StringBuilder::setLength(jint arg0)
	{
		callMethod<void>(
			"setLength",
			"(I)V",
			arg0
		);
	}
	JString StringBuilder::subSequence(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	JString StringBuilder::substring(jint arg0)
	{
		return callObjectMethod(
			"substring",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString StringBuilder::substring(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"substring",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	JString StringBuilder::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void StringBuilder::trimToSize()
	{
		callMethod<void>(
			"trimToSize",
			"()V"
		);
	}
} // namespace java::lang

