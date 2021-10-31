#include "../io/File.hpp"
#include "../io/IOException.hpp"
#include "../io/InputStream.hpp"
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
	Scanner::Scanner(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Scanner::Scanner(java::io::File arg0)
		: __JniBaseClass(
			"java.util.Scanner",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	Scanner::Scanner(java::io::InputStream arg0)
		: __JniBaseClass(
			"java.util.Scanner",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	Scanner::Scanner(__JniBaseClass arg0)
		: __JniBaseClass(
			"java.util.Scanner",
			"(Ljava/lang/Readable;)V",
			arg0.object()
		) {}
	Scanner::Scanner(jstring arg0)
		: __JniBaseClass(
			"java.util.Scanner",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	Scanner::Scanner(java::io::File arg0, jstring arg1)
		: __JniBaseClass(
			"java.util.Scanner",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	Scanner::Scanner(java::io::File arg0, java::nio::charset::Charset arg1)
		: __JniBaseClass(
			"java.util.Scanner",
			"(Ljava/io/File;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	Scanner::Scanner(java::io::InputStream arg0, jstring arg1)
		: __JniBaseClass(
			"java.util.Scanner",
			"(Ljava/io/InputStream;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	Scanner::Scanner(java::io::InputStream arg0, java::nio::charset::Charset arg1)
		: __JniBaseClass(
			"java.util.Scanner",
			"(Ljava/io/InputStream;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	Scanner::Scanner(__JniBaseClass arg0, jstring arg1)
		: __JniBaseClass(
			"java.util.Scanner",
			"(Ljava/nio/channels/ReadableByteChannel;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	Scanner::Scanner(__JniBaseClass arg0, java::nio::charset::Charset arg1)
		: __JniBaseClass(
			"java.util.Scanner",
			"(Ljava/nio/channels/ReadableByteChannel;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void Scanner::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	java::util::regex::Pattern Scanner::delimiter()
	{
		return callObjectMethod(
			"delimiter",
			"()Ljava/util/regex/Pattern;"
		);
	}
	__JniBaseClass Scanner::findAll(jstring arg0)
	{
		return callObjectMethod(
			"findAll",
			"(Ljava/lang/String;)Ljava/util/stream/Stream;",
			arg0
		);
	}
	__JniBaseClass Scanner::findAll(java::util::regex::Pattern arg0)
	{
		return callObjectMethod(
			"findAll",
			"(Ljava/util/regex/Pattern;)Ljava/util/stream/Stream;",
			arg0.object()
		);
	}
	jstring Scanner::findInLine(jstring arg0)
	{
		return callObjectMethod(
			"findInLine",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Scanner::findInLine(java::util::regex::Pattern arg0)
	{
		return callObjectMethod(
			"findInLine",
			"(Ljava/util/regex/Pattern;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring Scanner::findWithinHorizon(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"findWithinHorizon",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Scanner::findWithinHorizon(java::util::regex::Pattern arg0, jint arg1)
	{
		return callObjectMethod(
			"findWithinHorizon",
			"(Ljava/util/regex/Pattern;I)Ljava/lang/String;",
			arg0.object(),
			arg1
		).object<jstring>();
	}
	jboolean Scanner::hasNext()
	{
		return callMethod<jboolean>(
			"hasNext",
			"()Z"
		);
	}
	jboolean Scanner::hasNext(jstring arg0)
	{
		return callMethod<jboolean>(
			"hasNext",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Scanner::hasNext(java::util::regex::Pattern arg0)
	{
		return callMethod<jboolean>(
			"hasNext",
			"(Ljava/util/regex/Pattern;)Z",
			arg0.object()
		);
	}
	jboolean Scanner::hasNextBigDecimal()
	{
		return callMethod<jboolean>(
			"hasNextBigDecimal",
			"()Z"
		);
	}
	jboolean Scanner::hasNextBigInteger()
	{
		return callMethod<jboolean>(
			"hasNextBigInteger",
			"()Z"
		);
	}
	jboolean Scanner::hasNextBigInteger(jint arg0)
	{
		return callMethod<jboolean>(
			"hasNextBigInteger",
			"(I)Z",
			arg0
		);
	}
	jboolean Scanner::hasNextBoolean()
	{
		return callMethod<jboolean>(
			"hasNextBoolean",
			"()Z"
		);
	}
	jboolean Scanner::hasNextByte()
	{
		return callMethod<jboolean>(
			"hasNextByte",
			"()Z"
		);
	}
	jboolean Scanner::hasNextByte(jint arg0)
	{
		return callMethod<jboolean>(
			"hasNextByte",
			"(I)Z",
			arg0
		);
	}
	jboolean Scanner::hasNextDouble()
	{
		return callMethod<jboolean>(
			"hasNextDouble",
			"()Z"
		);
	}
	jboolean Scanner::hasNextFloat()
	{
		return callMethod<jboolean>(
			"hasNextFloat",
			"()Z"
		);
	}
	jboolean Scanner::hasNextInt()
	{
		return callMethod<jboolean>(
			"hasNextInt",
			"()Z"
		);
	}
	jboolean Scanner::hasNextInt(jint arg0)
	{
		return callMethod<jboolean>(
			"hasNextInt",
			"(I)Z",
			arg0
		);
	}
	jboolean Scanner::hasNextLine()
	{
		return callMethod<jboolean>(
			"hasNextLine",
			"()Z"
		);
	}
	jboolean Scanner::hasNextLong()
	{
		return callMethod<jboolean>(
			"hasNextLong",
			"()Z"
		);
	}
	jboolean Scanner::hasNextLong(jint arg0)
	{
		return callMethod<jboolean>(
			"hasNextLong",
			"(I)Z",
			arg0
		);
	}
	jboolean Scanner::hasNextShort()
	{
		return callMethod<jboolean>(
			"hasNextShort",
			"()Z"
		);
	}
	jboolean Scanner::hasNextShort(jint arg0)
	{
		return callMethod<jboolean>(
			"hasNextShort",
			"(I)Z",
			arg0
		);
	}
	java::io::IOException Scanner::ioException()
	{
		return callObjectMethod(
			"ioException",
			"()Ljava/io/IOException;"
		);
	}
	java::util::Locale Scanner::locale()
	{
		return callObjectMethod(
			"locale",
			"()Ljava/util/Locale;"
		);
	}
	__JniBaseClass Scanner::match()
	{
		return callObjectMethod(
			"match",
			"()Ljava/util/regex/MatchResult;"
		);
	}
	jstring Scanner::next()
	{
		return callObjectMethod(
			"next",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Scanner::next(jstring arg0)
	{
		return callObjectMethod(
			"next",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Scanner::next(java::util::regex::Pattern arg0)
	{
		return callObjectMethod(
			"next",
			"(Ljava/util/regex/Pattern;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	java::math::BigDecimal Scanner::nextBigDecimal()
	{
		return callObjectMethod(
			"nextBigDecimal",
			"()Ljava/math/BigDecimal;"
		);
	}
	java::math::BigInteger Scanner::nextBigInteger()
	{
		return callObjectMethod(
			"nextBigInteger",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger Scanner::nextBigInteger(jint arg0)
	{
		return callObjectMethod(
			"nextBigInteger",
			"(I)Ljava/math/BigInteger;",
			arg0
		);
	}
	jboolean Scanner::nextBoolean()
	{
		return callMethod<jboolean>(
			"nextBoolean",
			"()Z"
		);
	}
	jbyte Scanner::nextByte()
	{
		return callMethod<jbyte>(
			"nextByte",
			"()B"
		);
	}
	jbyte Scanner::nextByte(jint arg0)
	{
		return callMethod<jbyte>(
			"nextByte",
			"(I)B",
			arg0
		);
	}
	jdouble Scanner::nextDouble()
	{
		return callMethod<jdouble>(
			"nextDouble",
			"()D"
		);
	}
	jfloat Scanner::nextFloat()
	{
		return callMethod<jfloat>(
			"nextFloat",
			"()F"
		);
	}
	jint Scanner::nextInt()
	{
		return callMethod<jint>(
			"nextInt",
			"()I"
		);
	}
	jint Scanner::nextInt(jint arg0)
	{
		return callMethod<jint>(
			"nextInt",
			"(I)I",
			arg0
		);
	}
	jstring Scanner::nextLine()
	{
		return callObjectMethod(
			"nextLine",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong Scanner::nextLong()
	{
		return callMethod<jlong>(
			"nextLong",
			"()J"
		);
	}
	jlong Scanner::nextLong(jint arg0)
	{
		return callMethod<jlong>(
			"nextLong",
			"(I)J",
			arg0
		);
	}
	jshort Scanner::nextShort()
	{
		return callMethod<jshort>(
			"nextShort",
			"()S"
		);
	}
	jshort Scanner::nextShort(jint arg0)
	{
		return callMethod<jshort>(
			"nextShort",
			"(I)S",
			arg0
		);
	}
	jint Scanner::radix()
	{
		return callMethod<jint>(
			"radix",
			"()I"
		);
	}
	void Scanner::remove()
	{
		callMethod<void>(
			"remove",
			"()V"
		);
	}
	java::util::Scanner Scanner::reset()
	{
		return callObjectMethod(
			"reset",
			"()Ljava/util/Scanner;"
		);
	}
	java::util::Scanner Scanner::skip(jstring arg0)
	{
		return callObjectMethod(
			"skip",
			"(Ljava/lang/String;)Ljava/util/Scanner;",
			arg0
		);
	}
	java::util::Scanner Scanner::skip(java::util::regex::Pattern arg0)
	{
		return callObjectMethod(
			"skip",
			"(Ljava/util/regex/Pattern;)Ljava/util/Scanner;",
			arg0.object()
		);
	}
	jstring Scanner::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass Scanner::tokens()
	{
		return callObjectMethod(
			"tokens",
			"()Ljava/util/stream/Stream;"
		);
	}
	java::util::Scanner Scanner::useDelimiter(jstring arg0)
	{
		return callObjectMethod(
			"useDelimiter",
			"(Ljava/lang/String;)Ljava/util/Scanner;",
			arg0
		);
	}
	java::util::Scanner Scanner::useDelimiter(java::util::regex::Pattern arg0)
	{
		return callObjectMethod(
			"useDelimiter",
			"(Ljava/util/regex/Pattern;)Ljava/util/Scanner;",
			arg0.object()
		);
	}
	java::util::Scanner Scanner::useLocale(java::util::Locale arg0)
	{
		return callObjectMethod(
			"useLocale",
			"(Ljava/util/Locale;)Ljava/util/Scanner;",
			arg0.object()
		);
	}
	java::util::Scanner Scanner::useRadix(jint arg0)
	{
		return callObjectMethod(
			"useRadix",
			"(I)Ljava/util/Scanner;",
			arg0
		);
	}
} // namespace java::util

