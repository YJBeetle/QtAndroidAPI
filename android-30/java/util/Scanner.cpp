#include "../io/File.hpp"
#include "../io/IOException.hpp"
#include "../io/InputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../math/BigDecimal.hpp"
#include "../math/BigInteger.hpp"
#include "../nio/CharBuffer.hpp"
#include "../nio/charset/Charset.hpp"
#include "../nio/charset/CharsetDecoder.hpp"
#include "./Locale.hpp"
#include "./regex/Matcher.hpp"
#include "./regex/Pattern.hpp"
#include "./Scanner.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	Scanner::Scanner(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Scanner::Scanner(java::io::File arg0)
		: JObject(
			"java.util.Scanner",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	Scanner::Scanner(java::io::InputStream arg0)
		: JObject(
			"java.util.Scanner",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	Scanner::Scanner(JObject arg0)
		: JObject(
			"java.util.Scanner",
			"(Ljava/lang/Readable;)V",
			arg0.object()
		) {}
	Scanner::Scanner(JString arg0)
		: JObject(
			"java.util.Scanner",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	Scanner::Scanner(java::io::File arg0, JString arg1)
		: JObject(
			"java.util.Scanner",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	Scanner::Scanner(java::io::File arg0, java::nio::charset::Charset arg1)
		: JObject(
			"java.util.Scanner",
			"(Ljava/io/File;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	Scanner::Scanner(java::io::InputStream arg0, JString arg1)
		: JObject(
			"java.util.Scanner",
			"(Ljava/io/InputStream;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	Scanner::Scanner(java::io::InputStream arg0, java::nio::charset::Charset arg1)
		: JObject(
			"java.util.Scanner",
			"(Ljava/io/InputStream;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	Scanner::Scanner(JObject arg0, JString arg1)
		: JObject(
			"java.util.Scanner",
			"(Ljava/nio/channels/ReadableByteChannel;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	Scanner::Scanner(JObject arg0, java::nio::charset::Charset arg1)
		: JObject(
			"java.util.Scanner",
			"(Ljava/nio/channels/ReadableByteChannel;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void Scanner::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	java::util::regex::Pattern Scanner::delimiter() const
	{
		return callObjectMethod(
			"delimiter",
			"()Ljava/util/regex/Pattern;"
		);
	}
	JObject Scanner::findAll(JString arg0) const
	{
		return callObjectMethod(
			"findAll",
			"(Ljava/lang/String;)Ljava/util/stream/Stream;",
			arg0.object<jstring>()
		);
	}
	JObject Scanner::findAll(java::util::regex::Pattern arg0) const
	{
		return callObjectMethod(
			"findAll",
			"(Ljava/util/regex/Pattern;)Ljava/util/stream/Stream;",
			arg0.object()
		);
	}
	JString Scanner::findInLine(JString arg0) const
	{
		return callObjectMethod(
			"findInLine",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString Scanner::findInLine(java::util::regex::Pattern arg0) const
	{
		return callObjectMethod(
			"findInLine",
			"(Ljava/util/regex/Pattern;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString Scanner::findWithinHorizon(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"findWithinHorizon",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1
		);
	}
	JString Scanner::findWithinHorizon(java::util::regex::Pattern arg0, jint arg1) const
	{
		return callObjectMethod(
			"findWithinHorizon",
			"(Ljava/util/regex/Pattern;I)Ljava/lang/String;",
			arg0.object(),
			arg1
		);
	}
	jboolean Scanner::hasNext() const
	{
		return callMethod<jboolean>(
			"hasNext",
			"()Z"
		);
	}
	jboolean Scanner::hasNext(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasNext",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean Scanner::hasNext(java::util::regex::Pattern arg0) const
	{
		return callMethod<jboolean>(
			"hasNext",
			"(Ljava/util/regex/Pattern;)Z",
			arg0.object()
		);
	}
	jboolean Scanner::hasNextBigDecimal() const
	{
		return callMethod<jboolean>(
			"hasNextBigDecimal",
			"()Z"
		);
	}
	jboolean Scanner::hasNextBigInteger() const
	{
		return callMethod<jboolean>(
			"hasNextBigInteger",
			"()Z"
		);
	}
	jboolean Scanner::hasNextBigInteger(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasNextBigInteger",
			"(I)Z",
			arg0
		);
	}
	jboolean Scanner::hasNextBoolean() const
	{
		return callMethod<jboolean>(
			"hasNextBoolean",
			"()Z"
		);
	}
	jboolean Scanner::hasNextByte() const
	{
		return callMethod<jboolean>(
			"hasNextByte",
			"()Z"
		);
	}
	jboolean Scanner::hasNextByte(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasNextByte",
			"(I)Z",
			arg0
		);
	}
	jboolean Scanner::hasNextDouble() const
	{
		return callMethod<jboolean>(
			"hasNextDouble",
			"()Z"
		);
	}
	jboolean Scanner::hasNextFloat() const
	{
		return callMethod<jboolean>(
			"hasNextFloat",
			"()Z"
		);
	}
	jboolean Scanner::hasNextInt() const
	{
		return callMethod<jboolean>(
			"hasNextInt",
			"()Z"
		);
	}
	jboolean Scanner::hasNextInt(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasNextInt",
			"(I)Z",
			arg0
		);
	}
	jboolean Scanner::hasNextLine() const
	{
		return callMethod<jboolean>(
			"hasNextLine",
			"()Z"
		);
	}
	jboolean Scanner::hasNextLong() const
	{
		return callMethod<jboolean>(
			"hasNextLong",
			"()Z"
		);
	}
	jboolean Scanner::hasNextLong(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasNextLong",
			"(I)Z",
			arg0
		);
	}
	jboolean Scanner::hasNextShort() const
	{
		return callMethod<jboolean>(
			"hasNextShort",
			"()Z"
		);
	}
	jboolean Scanner::hasNextShort(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasNextShort",
			"(I)Z",
			arg0
		);
	}
	java::io::IOException Scanner::ioException() const
	{
		return callObjectMethod(
			"ioException",
			"()Ljava/io/IOException;"
		);
	}
	java::util::Locale Scanner::locale() const
	{
		return callObjectMethod(
			"locale",
			"()Ljava/util/Locale;"
		);
	}
	JObject Scanner::match() const
	{
		return callObjectMethod(
			"match",
			"()Ljava/util/regex/MatchResult;"
		);
	}
	JString Scanner::next() const
	{
		return callObjectMethod(
			"next",
			"()Ljava/lang/String;"
		);
	}
	JString Scanner::next(JString arg0) const
	{
		return callObjectMethod(
			"next",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString Scanner::next(java::util::regex::Pattern arg0) const
	{
		return callObjectMethod(
			"next",
			"(Ljava/util/regex/Pattern;)Ljava/lang/String;",
			arg0.object()
		);
	}
	java::math::BigDecimal Scanner::nextBigDecimal() const
	{
		return callObjectMethod(
			"nextBigDecimal",
			"()Ljava/math/BigDecimal;"
		);
	}
	java::math::BigInteger Scanner::nextBigInteger() const
	{
		return callObjectMethod(
			"nextBigInteger",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger Scanner::nextBigInteger(jint arg0) const
	{
		return callObjectMethod(
			"nextBigInteger",
			"(I)Ljava/math/BigInteger;",
			arg0
		);
	}
	jboolean Scanner::nextBoolean() const
	{
		return callMethod<jboolean>(
			"nextBoolean",
			"()Z"
		);
	}
	jbyte Scanner::nextByte() const
	{
		return callMethod<jbyte>(
			"nextByte",
			"()B"
		);
	}
	jbyte Scanner::nextByte(jint arg0) const
	{
		return callMethod<jbyte>(
			"nextByte",
			"(I)B",
			arg0
		);
	}
	jdouble Scanner::nextDouble() const
	{
		return callMethod<jdouble>(
			"nextDouble",
			"()D"
		);
	}
	jfloat Scanner::nextFloat() const
	{
		return callMethod<jfloat>(
			"nextFloat",
			"()F"
		);
	}
	jint Scanner::nextInt() const
	{
		return callMethod<jint>(
			"nextInt",
			"()I"
		);
	}
	jint Scanner::nextInt(jint arg0) const
	{
		return callMethod<jint>(
			"nextInt",
			"(I)I",
			arg0
		);
	}
	JString Scanner::nextLine() const
	{
		return callObjectMethod(
			"nextLine",
			"()Ljava/lang/String;"
		);
	}
	jlong Scanner::nextLong() const
	{
		return callMethod<jlong>(
			"nextLong",
			"()J"
		);
	}
	jlong Scanner::nextLong(jint arg0) const
	{
		return callMethod<jlong>(
			"nextLong",
			"(I)J",
			arg0
		);
	}
	jshort Scanner::nextShort() const
	{
		return callMethod<jshort>(
			"nextShort",
			"()S"
		);
	}
	jshort Scanner::nextShort(jint arg0) const
	{
		return callMethod<jshort>(
			"nextShort",
			"(I)S",
			arg0
		);
	}
	jint Scanner::radix() const
	{
		return callMethod<jint>(
			"radix",
			"()I"
		);
	}
	void Scanner::remove() const
	{
		callMethod<void>(
			"remove",
			"()V"
		);
	}
	java::util::Scanner Scanner::reset() const
	{
		return callObjectMethod(
			"reset",
			"()Ljava/util/Scanner;"
		);
	}
	java::util::Scanner Scanner::skip(JString arg0) const
	{
		return callObjectMethod(
			"skip",
			"(Ljava/lang/String;)Ljava/util/Scanner;",
			arg0.object<jstring>()
		);
	}
	java::util::Scanner Scanner::skip(java::util::regex::Pattern arg0) const
	{
		return callObjectMethod(
			"skip",
			"(Ljava/util/regex/Pattern;)Ljava/util/Scanner;",
			arg0.object()
		);
	}
	JString Scanner::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JObject Scanner::tokens() const
	{
		return callObjectMethod(
			"tokens",
			"()Ljava/util/stream/Stream;"
		);
	}
	java::util::Scanner Scanner::useDelimiter(JString arg0) const
	{
		return callObjectMethod(
			"useDelimiter",
			"(Ljava/lang/String;)Ljava/util/Scanner;",
			arg0.object<jstring>()
		);
	}
	java::util::Scanner Scanner::useDelimiter(java::util::regex::Pattern arg0) const
	{
		return callObjectMethod(
			"useDelimiter",
			"(Ljava/util/regex/Pattern;)Ljava/util/Scanner;",
			arg0.object()
		);
	}
	java::util::Scanner Scanner::useLocale(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"useLocale",
			"(Ljava/util/Locale;)Ljava/util/Scanner;",
			arg0.object()
		);
	}
	java::util::Scanner Scanner::useRadix(jint arg0) const
	{
		return callObjectMethod(
			"useRadix",
			"(I)Ljava/util/Scanner;",
			arg0
		);
	}
} // namespace java::util

