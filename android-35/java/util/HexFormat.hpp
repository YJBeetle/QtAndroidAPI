#pragma once

#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./HexFormat.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint HexFormat::fromHexDigit(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.util.HexFormat",
			"fromHexDigit",
			"(I)I",
			arg0
		);
	}
	inline jint HexFormat::fromHexDigits(JString arg0)
	{
		return callStaticMethod<jint>(
			"java.util.HexFormat",
			"fromHexDigits",
			"(Ljava/lang/CharSequence;)I",
			arg0.object<jstring>()
		);
	}
	inline jint HexFormat::fromHexDigits(JString arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"java.util.HexFormat",
			"fromHexDigits",
			"(Ljava/lang/CharSequence;II)I",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline jlong HexFormat::fromHexDigitsToLong(JString arg0)
	{
		return callStaticMethod<jlong>(
			"java.util.HexFormat",
			"fromHexDigitsToLong",
			"(Ljava/lang/CharSequence;)J",
			arg0.object<jstring>()
		);
	}
	inline jlong HexFormat::fromHexDigitsToLong(JString arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jlong>(
			"java.util.HexFormat",
			"fromHexDigitsToLong",
			"(Ljava/lang/CharSequence;II)J",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline jboolean HexFormat::isHexDigit(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.util.HexFormat",
			"isHexDigit",
			"(I)Z",
			arg0
		);
	}
	inline java::util::HexFormat HexFormat::of()
	{
		return callStaticObjectMethod(
			"java.util.HexFormat",
			"of",
			"()Ljava/util/HexFormat;"
		);
	}
	inline java::util::HexFormat HexFormat::ofDelimiter(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.HexFormat",
			"ofDelimiter",
			"(Ljava/lang/String;)Ljava/util/HexFormat;",
			arg0.object<jstring>()
		);
	}
	inline JString HexFormat::delimiter() const
	{
		return callObjectMethod(
			"delimiter",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean HexFormat::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject HexFormat::formatHex(JObject arg0, JByteArray arg1) const
	{
		return callObjectMethod(
			"formatHex",
			"(Ljava/lang/Appendable;[B)Ljava/lang/Appendable;",
			arg0.object(),
			arg1.object<jbyteArray>()
		);
	}
	inline JObject HexFormat::formatHex(JObject arg0, JByteArray arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"formatHex",
			"(Ljava/lang/Appendable;[BII)Ljava/lang/Appendable;",
			arg0.object(),
			arg1.object<jbyteArray>(),
			arg2,
			arg3
		);
	}
	inline JString HexFormat::formatHex(JByteArray arg0) const
	{
		return callObjectMethod(
			"formatHex",
			"([B)Ljava/lang/String;",
			arg0.object<jbyteArray>()
		);
	}
	inline JString HexFormat::formatHex(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"formatHex",
			"([BII)Ljava/lang/String;",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline jint HexFormat::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean HexFormat::isUpperCase() const
	{
		return callMethod<jboolean>(
			"isUpperCase",
			"()Z"
		);
	}
	inline JByteArray HexFormat::parseHex(JString arg0) const
	{
		return callObjectMethod(
			"parseHex",
			"(Ljava/lang/CharSequence;)[B",
			arg0.object<jstring>()
		);
	}
	inline JByteArray HexFormat::parseHex(JCharArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"parseHex",
			"([CII)[B",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline JByteArray HexFormat::parseHex(JString arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"parseHex",
			"(Ljava/lang/CharSequence;II)[B",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline JString HexFormat::prefix() const
	{
		return callObjectMethod(
			"prefix",
			"()Ljava/lang/String;"
		);
	}
	inline JString HexFormat::suffix() const
	{
		return callObjectMethod(
			"suffix",
			"()Ljava/lang/String;"
		);
	}
	inline JObject HexFormat::toHexDigits(JObject arg0, jbyte arg1) const
	{
		return callObjectMethod(
			"toHexDigits",
			"(Ljava/lang/Appendable;B)Ljava/lang/Appendable;",
			arg0.object(),
			arg1
		);
	}
	inline JString HexFormat::toHexDigits(jbyte arg0) const
	{
		return callObjectMethod(
			"toHexDigits",
			"(B)Ljava/lang/String;",
			arg0
		);
	}
	inline JString HexFormat::toHexDigits(jchar arg0) const
	{
		return callObjectMethod(
			"toHexDigits",
			"(C)Ljava/lang/String;",
			arg0
		);
	}
	inline JString HexFormat::toHexDigits(jint arg0) const
	{
		return callObjectMethod(
			"toHexDigits",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString HexFormat::toHexDigits(jlong arg0) const
	{
		return callObjectMethod(
			"toHexDigits",
			"(J)Ljava/lang/String;",
			arg0
		);
	}
	inline JString HexFormat::toHexDigits(jshort arg0) const
	{
		return callObjectMethod(
			"toHexDigits",
			"(S)Ljava/lang/String;",
			arg0
		);
	}
	inline JString HexFormat::toHexDigits(jlong arg0, jint arg1) const
	{
		return callObjectMethod(
			"toHexDigits",
			"(JI)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	inline jchar HexFormat::toHighHexDigit(jint arg0) const
	{
		return callMethod<jchar>(
			"toHighHexDigit",
			"(I)C",
			arg0
		);
	}
	inline jchar HexFormat::toLowHexDigit(jint arg0) const
	{
		return callMethod<jchar>(
			"toLowHexDigit",
			"(I)C",
			arg0
		);
	}
	inline JString HexFormat::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline java::util::HexFormat HexFormat::withDelimiter(JString arg0) const
	{
		return callObjectMethod(
			"withDelimiter",
			"(Ljava/lang/String;)Ljava/util/HexFormat;",
			arg0.object<jstring>()
		);
	}
	inline java::util::HexFormat HexFormat::withLowerCase() const
	{
		return callObjectMethod(
			"withLowerCase",
			"()Ljava/util/HexFormat;"
		);
	}
	inline java::util::HexFormat HexFormat::withPrefix(JString arg0) const
	{
		return callObjectMethod(
			"withPrefix",
			"(Ljava/lang/String;)Ljava/util/HexFormat;",
			arg0.object<jstring>()
		);
	}
	inline java::util::HexFormat HexFormat::withSuffix(JString arg0) const
	{
		return callObjectMethod(
			"withSuffix",
			"(Ljava/lang/String;)Ljava/util/HexFormat;",
			arg0.object<jstring>()
		);
	}
	inline java::util::HexFormat HexFormat::withUpperCase() const
	{
		return callObjectMethod(
			"withUpperCase",
			"()Ljava/util/HexFormat;"
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
