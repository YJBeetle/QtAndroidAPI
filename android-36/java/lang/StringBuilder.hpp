#pragma once

#include "../../JCharArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./StringBuffer.def.hpp"
#include "./StringBuilder.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline StringBuilder::StringBuilder()
		: JObject(
			"java.lang.StringBuilder",
			"()V"
		) {}
	inline StringBuilder::StringBuilder(jint arg0)
		: JObject(
			"java.lang.StringBuilder",
			"(I)V",
			arg0
		) {}
	inline StringBuilder::StringBuilder(JString arg0)
		: JObject(
			"java.lang.StringBuilder",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline java::lang::StringBuilder StringBuilder::append(JCharArray arg0) const
	{
		return callObjectMethod(
			"append",
			"([C)Ljava/lang/StringBuilder;",
			arg0.object<jcharArray>()
		);
	}
	inline java::lang::StringBuilder StringBuilder::append(jboolean arg0) const
	{
		return callObjectMethod(
			"append",
			"(Z)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	inline java::lang::StringBuilder StringBuilder::append(jchar arg0) const
	{
		return callObjectMethod(
			"append",
			"(C)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	inline java::lang::StringBuilder StringBuilder::append(jdouble arg0) const
	{
		return callObjectMethod(
			"append",
			"(D)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	inline java::lang::StringBuilder StringBuilder::append(jfloat arg0) const
	{
		return callObjectMethod(
			"append",
			"(F)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	inline java::lang::StringBuilder StringBuilder::append(jint arg0) const
	{
		return callObjectMethod(
			"append",
			"(I)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	inline java::lang::StringBuilder StringBuilder::append(JString arg0) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;",
			arg0.object<jstring>()
		);
	}
	inline java::lang::StringBuilder StringBuilder::append(JObject arg0) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/Object;)Ljava/lang/StringBuilder;",
			arg0.object<jobject>()
		);
	}
	inline java::lang::StringBuilder StringBuilder::append(java::lang::StringBuffer arg0) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/StringBuffer;)Ljava/lang/StringBuilder;",
			arg0.object()
		);
	}
	inline java::lang::StringBuilder StringBuilder::append(jlong arg0) const
	{
		return callObjectMethod(
			"append",
			"(J)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	inline java::lang::StringBuilder StringBuilder::append(JCharArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"append",
			"([CII)Ljava/lang/StringBuilder;",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline java::lang::StringBuilder StringBuilder::append(JString arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/lang/StringBuilder;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline java::lang::StringBuilder StringBuilder::appendCodePoint(jint arg0) const
	{
		return callObjectMethod(
			"appendCodePoint",
			"(I)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	inline jint StringBuilder::capacity() const
	{
		return callMethod<jint>(
			"capacity",
			"()I"
		);
	}
	inline jchar StringBuilder::charAt(jint arg0) const
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	inline JObject StringBuilder::chars() const
	{
		return callObjectMethod(
			"chars",
			"()Ljava/util/stream/IntStream;"
		);
	}
	inline jint StringBuilder::codePointAt(jint arg0) const
	{
		return callMethod<jint>(
			"codePointAt",
			"(I)I",
			arg0
		);
	}
	inline jint StringBuilder::codePointBefore(jint arg0) const
	{
		return callMethod<jint>(
			"codePointBefore",
			"(I)I",
			arg0
		);
	}
	inline jint StringBuilder::codePointCount(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"codePointCount",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline JObject StringBuilder::codePoints() const
	{
		return callObjectMethod(
			"codePoints",
			"()Ljava/util/stream/IntStream;"
		);
	}
	inline jint StringBuilder::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint StringBuilder::compareTo(java::lang::StringBuilder arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/StringBuilder;)I",
			arg0.object()
		);
	}
	inline java::lang::StringBuilder StringBuilder::delete_(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"delete",
			"(II)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	inline java::lang::StringBuilder StringBuilder::deleteCharAt(jint arg0) const
	{
		return callObjectMethod(
			"deleteCharAt",
			"(I)Ljava/lang/StringBuilder;",
			arg0
		);
	}
	inline void StringBuilder::ensureCapacity(jint arg0) const
	{
		callMethod<void>(
			"ensureCapacity",
			"(I)V",
			arg0
		);
	}
	inline void StringBuilder::getChars(jint arg0, jint arg1, JCharArray arg2, jint arg3) const
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
	inline jint StringBuilder::indexOf(JString arg0) const
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jint StringBuilder::indexOf(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline java::lang::StringBuilder StringBuilder::insert(jint arg0, JCharArray arg1) const
	{
		return callObjectMethod(
			"insert",
			"(I[C)Ljava/lang/StringBuilder;",
			arg0,
			arg1.object<jcharArray>()
		);
	}
	inline java::lang::StringBuilder StringBuilder::insert(jint arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"insert",
			"(IZ)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	inline java::lang::StringBuilder StringBuilder::insert(jint arg0, jchar arg1) const
	{
		return callObjectMethod(
			"insert",
			"(IC)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	inline java::lang::StringBuilder StringBuilder::insert(jint arg0, jdouble arg1) const
	{
		return callObjectMethod(
			"insert",
			"(ID)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	inline java::lang::StringBuilder StringBuilder::insert(jint arg0, jfloat arg1) const
	{
		return callObjectMethod(
			"insert",
			"(IF)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	inline java::lang::StringBuilder StringBuilder::insert(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"insert",
			"(II)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	inline java::lang::StringBuilder StringBuilder::insert(jint arg0, JString arg1) const
	{
		return callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;)Ljava/lang/StringBuilder;",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline java::lang::StringBuilder StringBuilder::insert(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"insert",
			"(ILjava/lang/Object;)Ljava/lang/StringBuilder;",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline java::lang::StringBuilder StringBuilder::insert(jint arg0, jlong arg1) const
	{
		return callObjectMethod(
			"insert",
			"(IJ)Ljava/lang/StringBuilder;",
			arg0,
			arg1
		);
	}
	inline java::lang::StringBuilder StringBuilder::insert(jint arg0, JCharArray arg1, jint arg2, jint arg3) const
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
	inline java::lang::StringBuilder StringBuilder::insert(jint arg0, JString arg1, jint arg2, jint arg3) const
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
	inline jint StringBuilder::lastIndexOf(JString arg0) const
	{
		return callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jint StringBuilder::lastIndexOf(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint StringBuilder::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	inline jint StringBuilder::offsetByCodePoints(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"offsetByCodePoints",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline java::lang::StringBuilder StringBuilder::replace(jint arg0, jint arg1, JString arg2) const
	{
		return callObjectMethod(
			"replace",
			"(IILjava/lang/String;)Ljava/lang/StringBuilder;",
			arg0,
			arg1,
			arg2.object<jstring>()
		);
	}
	inline java::lang::StringBuilder StringBuilder::reverse() const
	{
		return callObjectMethod(
			"reverse",
			"()Ljava/lang/StringBuilder;"
		);
	}
	inline void StringBuilder::setCharAt(jint arg0, jchar arg1) const
	{
		callMethod<void>(
			"setCharAt",
			"(IC)V",
			arg0,
			arg1
		);
	}
	inline void StringBuilder::setLength(jint arg0) const
	{
		callMethod<void>(
			"setLength",
			"(I)V",
			arg0
		);
	}
	inline JString StringBuilder::subSequence(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	inline JString StringBuilder::substring(jint arg0) const
	{
		return callObjectMethod(
			"substring",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString StringBuilder::substring(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"substring",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	inline JString StringBuilder::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void StringBuilder::trimToSize() const
	{
		callMethod<void>(
			"trimToSize",
			"()V"
		);
	}
} // namespace java::lang

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
