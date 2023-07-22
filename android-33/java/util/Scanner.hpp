#pragma once

#include "../io/File.def.hpp"
#include "../io/IOException.def.hpp"
#include "../io/InputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../math/BigDecimal.def.hpp"
#include "../math/BigInteger.def.hpp"
#include "../nio/CharBuffer.def.hpp"
#include "../nio/charset/Charset.def.hpp"
#include "../nio/charset/CharsetDecoder.def.hpp"
#include "./Locale.def.hpp"
#include "./regex/Matcher.def.hpp"
#include "./regex/Pattern.def.hpp"
#include "./Scanner.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline Scanner::Scanner(java::io::File arg0)
		: JObject(
			"java.util.Scanner",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	inline Scanner::Scanner(java::io::InputStream arg0)
		: JObject(
			"java.util.Scanner",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	inline Scanner::Scanner(JObject arg0)
		: JObject(
			"java.util.Scanner",
			"(Ljava/lang/Readable;)V",
			arg0.object()
		) {}
	inline Scanner::Scanner(JString arg0)
		: JObject(
			"java.util.Scanner",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline Scanner::Scanner(java::io::File arg0, JString arg1)
		: JObject(
			"java.util.Scanner",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline Scanner::Scanner(java::io::File arg0, java::nio::charset::Charset arg1)
		: JObject(
			"java.util.Scanner",
			"(Ljava/io/File;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline Scanner::Scanner(java::io::InputStream arg0, JString arg1)
		: JObject(
			"java.util.Scanner",
			"(Ljava/io/InputStream;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline Scanner::Scanner(java::io::InputStream arg0, java::nio::charset::Charset arg1)
		: JObject(
			"java.util.Scanner",
			"(Ljava/io/InputStream;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline Scanner::Scanner(JObject arg0, JString arg1)
		: JObject(
			"java.util.Scanner",
			"(Ljava/nio/channels/ReadableByteChannel;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline Scanner::Scanner(JObject arg0, java::nio::charset::Charset arg1)
		: JObject(
			"java.util.Scanner",
			"(Ljava/nio/channels/ReadableByteChannel;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void Scanner::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline java::util::regex::Pattern Scanner::delimiter() const
	{
		return callObjectMethod(
			"delimiter",
			"()Ljava/util/regex/Pattern;"
		);
	}
	inline JObject Scanner::findAll(JString arg0) const
	{
		return callObjectMethod(
			"findAll",
			"(Ljava/lang/String;)Ljava/util/stream/Stream;",
			arg0.object<jstring>()
		);
	}
	inline JObject Scanner::findAll(java::util::regex::Pattern arg0) const
	{
		return callObjectMethod(
			"findAll",
			"(Ljava/util/regex/Pattern;)Ljava/util/stream/Stream;",
			arg0.object()
		);
	}
	inline JString Scanner::findInLine(JString arg0) const
	{
		return callObjectMethod(
			"findInLine",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString Scanner::findInLine(java::util::regex::Pattern arg0) const
	{
		return callObjectMethod(
			"findInLine",
			"(Ljava/util/regex/Pattern;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString Scanner::findWithinHorizon(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"findWithinHorizon",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JString Scanner::findWithinHorizon(java::util::regex::Pattern arg0, jint arg1) const
	{
		return callObjectMethod(
			"findWithinHorizon",
			"(Ljava/util/regex/Pattern;I)Ljava/lang/String;",
			arg0.object(),
			arg1
		);
	}
	inline jboolean Scanner::hasNext() const
	{
		return callMethod<jboolean>(
			"hasNext",
			"()Z"
		);
	}
	inline jboolean Scanner::hasNext(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasNext",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean Scanner::hasNext(java::util::regex::Pattern arg0) const
	{
		return callMethod<jboolean>(
			"hasNext",
			"(Ljava/util/regex/Pattern;)Z",
			arg0.object()
		);
	}
	inline jboolean Scanner::hasNextBigDecimal() const
	{
		return callMethod<jboolean>(
			"hasNextBigDecimal",
			"()Z"
		);
	}
	inline jboolean Scanner::hasNextBigInteger() const
	{
		return callMethod<jboolean>(
			"hasNextBigInteger",
			"()Z"
		);
	}
	inline jboolean Scanner::hasNextBigInteger(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasNextBigInteger",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Scanner::hasNextBoolean() const
	{
		return callMethod<jboolean>(
			"hasNextBoolean",
			"()Z"
		);
	}
	inline jboolean Scanner::hasNextByte() const
	{
		return callMethod<jboolean>(
			"hasNextByte",
			"()Z"
		);
	}
	inline jboolean Scanner::hasNextByte(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasNextByte",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Scanner::hasNextDouble() const
	{
		return callMethod<jboolean>(
			"hasNextDouble",
			"()Z"
		);
	}
	inline jboolean Scanner::hasNextFloat() const
	{
		return callMethod<jboolean>(
			"hasNextFloat",
			"()Z"
		);
	}
	inline jboolean Scanner::hasNextInt() const
	{
		return callMethod<jboolean>(
			"hasNextInt",
			"()Z"
		);
	}
	inline jboolean Scanner::hasNextInt(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasNextInt",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Scanner::hasNextLine() const
	{
		return callMethod<jboolean>(
			"hasNextLine",
			"()Z"
		);
	}
	inline jboolean Scanner::hasNextLong() const
	{
		return callMethod<jboolean>(
			"hasNextLong",
			"()Z"
		);
	}
	inline jboolean Scanner::hasNextLong(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasNextLong",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Scanner::hasNextShort() const
	{
		return callMethod<jboolean>(
			"hasNextShort",
			"()Z"
		);
	}
	inline jboolean Scanner::hasNextShort(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasNextShort",
			"(I)Z",
			arg0
		);
	}
	inline java::io::IOException Scanner::ioException() const
	{
		return callObjectMethod(
			"ioException",
			"()Ljava/io/IOException;"
		);
	}
	inline java::util::Locale Scanner::locale() const
	{
		return callObjectMethod(
			"locale",
			"()Ljava/util/Locale;"
		);
	}
	inline JObject Scanner::match() const
	{
		return callObjectMethod(
			"match",
			"()Ljava/util/regex/MatchResult;"
		);
	}
	inline JString Scanner::next() const
	{
		return callObjectMethod(
			"next",
			"()Ljava/lang/String;"
		);
	}
	inline JString Scanner::next(JString arg0) const
	{
		return callObjectMethod(
			"next",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString Scanner::next(java::util::regex::Pattern arg0) const
	{
		return callObjectMethod(
			"next",
			"(Ljava/util/regex/Pattern;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline java::math::BigDecimal Scanner::nextBigDecimal() const
	{
		return callObjectMethod(
			"nextBigDecimal",
			"()Ljava/math/BigDecimal;"
		);
	}
	inline java::math::BigInteger Scanner::nextBigInteger() const
	{
		return callObjectMethod(
			"nextBigInteger",
			"()Ljava/math/BigInteger;"
		);
	}
	inline java::math::BigInteger Scanner::nextBigInteger(jint arg0) const
	{
		return callObjectMethod(
			"nextBigInteger",
			"(I)Ljava/math/BigInteger;",
			arg0
		);
	}
	inline jboolean Scanner::nextBoolean() const
	{
		return callMethod<jboolean>(
			"nextBoolean",
			"()Z"
		);
	}
	inline jbyte Scanner::nextByte() const
	{
		return callMethod<jbyte>(
			"nextByte",
			"()B"
		);
	}
	inline jbyte Scanner::nextByte(jint arg0) const
	{
		return callMethod<jbyte>(
			"nextByte",
			"(I)B",
			arg0
		);
	}
	inline jdouble Scanner::nextDouble() const
	{
		return callMethod<jdouble>(
			"nextDouble",
			"()D"
		);
	}
	inline jfloat Scanner::nextFloat() const
	{
		return callMethod<jfloat>(
			"nextFloat",
			"()F"
		);
	}
	inline jint Scanner::nextInt() const
	{
		return callMethod<jint>(
			"nextInt",
			"()I"
		);
	}
	inline jint Scanner::nextInt(jint arg0) const
	{
		return callMethod<jint>(
			"nextInt",
			"(I)I",
			arg0
		);
	}
	inline JString Scanner::nextLine() const
	{
		return callObjectMethod(
			"nextLine",
			"()Ljava/lang/String;"
		);
	}
	inline jlong Scanner::nextLong() const
	{
		return callMethod<jlong>(
			"nextLong",
			"()J"
		);
	}
	inline jlong Scanner::nextLong(jint arg0) const
	{
		return callMethod<jlong>(
			"nextLong",
			"(I)J",
			arg0
		);
	}
	inline jshort Scanner::nextShort() const
	{
		return callMethod<jshort>(
			"nextShort",
			"()S"
		);
	}
	inline jshort Scanner::nextShort(jint arg0) const
	{
		return callMethod<jshort>(
			"nextShort",
			"(I)S",
			arg0
		);
	}
	inline jint Scanner::radix() const
	{
		return callMethod<jint>(
			"radix",
			"()I"
		);
	}
	inline void Scanner::remove() const
	{
		callMethod<void>(
			"remove",
			"()V"
		);
	}
	inline java::util::Scanner Scanner::reset() const
	{
		return callObjectMethod(
			"reset",
			"()Ljava/util/Scanner;"
		);
	}
	inline java::util::Scanner Scanner::skip(JString arg0) const
	{
		return callObjectMethod(
			"skip",
			"(Ljava/lang/String;)Ljava/util/Scanner;",
			arg0.object<jstring>()
		);
	}
	inline java::util::Scanner Scanner::skip(java::util::regex::Pattern arg0) const
	{
		return callObjectMethod(
			"skip",
			"(Ljava/util/regex/Pattern;)Ljava/util/Scanner;",
			arg0.object()
		);
	}
	inline JString Scanner::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline JObject Scanner::tokens() const
	{
		return callObjectMethod(
			"tokens",
			"()Ljava/util/stream/Stream;"
		);
	}
	inline java::util::Scanner Scanner::useDelimiter(JString arg0) const
	{
		return callObjectMethod(
			"useDelimiter",
			"(Ljava/lang/String;)Ljava/util/Scanner;",
			arg0.object<jstring>()
		);
	}
	inline java::util::Scanner Scanner::useDelimiter(java::util::regex::Pattern arg0) const
	{
		return callObjectMethod(
			"useDelimiter",
			"(Ljava/util/regex/Pattern;)Ljava/util/Scanner;",
			arg0.object()
		);
	}
	inline java::util::Scanner Scanner::useLocale(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"useLocale",
			"(Ljava/util/Locale;)Ljava/util/Scanner;",
			arg0.object()
		);
	}
	inline java::util::Scanner Scanner::useRadix(jint arg0) const
	{
		return callObjectMethod(
			"useRadix",
			"(I)Ljava/util/Scanner;",
			arg0
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
