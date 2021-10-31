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
	
	Scanner::Scanner(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Scanner::Scanner(java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Scanner",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	Scanner::Scanner(java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Scanner",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	Scanner::Scanner(__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Scanner",
			"(Ljava/lang/Readable;)V",
			arg0.__jniObject().object()
		);
	}
	Scanner::Scanner(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Scanner",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	Scanner::Scanner(java::io::File arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Scanner",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	Scanner::Scanner(java::io::File arg0, java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Scanner",
			"(Ljava/io/File;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	Scanner::Scanner(java::io::InputStream arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Scanner",
			"(Ljava/io/InputStream;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	Scanner::Scanner(java::io::InputStream arg0, java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Scanner",
			"(Ljava/io/InputStream;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	Scanner::Scanner(__JniBaseClass arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Scanner",
			"(Ljava/nio/channels/ReadableByteChannel;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	Scanner::Scanner(__JniBaseClass arg0, java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Scanner",
			"(Ljava/nio/channels/ReadableByteChannel;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void Scanner::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject Scanner::delimiter()
	{
		return __thiz.callObjectMethod(
			"delimiter",
			"()Ljava/util/regex/Pattern;"
		);
	}
	QAndroidJniObject Scanner::findAll(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"findAll",
			"(Ljava/lang/String;)Ljava/util/stream/Stream;",
			arg0
		);
	}
	QAndroidJniObject Scanner::findAll(java::util::regex::Pattern arg0)
	{
		return __thiz.callObjectMethod(
			"findAll",
			"(Ljava/util/regex/Pattern;)Ljava/util/stream/Stream;",
			arg0.__jniObject().object()
		);
	}
	jstring Scanner::findInLine(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"findInLine",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Scanner::findInLine(java::util::regex::Pattern arg0)
	{
		return __thiz.callObjectMethod(
			"findInLine",
			"(Ljava/util/regex/Pattern;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Scanner::findWithinHorizon(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"findWithinHorizon",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Scanner::findWithinHorizon(java::util::regex::Pattern arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"findWithinHorizon",
			"(Ljava/util/regex/Pattern;I)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
	jboolean Scanner::hasNext()
	{
		return __thiz.callMethod<jboolean>(
			"hasNext",
			"()Z"
		);
	}
	jboolean Scanner::hasNext(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasNext",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Scanner::hasNext(java::util::regex::Pattern arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasNext",
			"(Ljava/util/regex/Pattern;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Scanner::hasNextBigDecimal()
	{
		return __thiz.callMethod<jboolean>(
			"hasNextBigDecimal",
			"()Z"
		);
	}
	jboolean Scanner::hasNextBigInteger()
	{
		return __thiz.callMethod<jboolean>(
			"hasNextBigInteger",
			"()Z"
		);
	}
	jboolean Scanner::hasNextBigInteger(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasNextBigInteger",
			"(I)Z",
			arg0
		);
	}
	jboolean Scanner::hasNextBoolean()
	{
		return __thiz.callMethod<jboolean>(
			"hasNextBoolean",
			"()Z"
		);
	}
	jboolean Scanner::hasNextByte()
	{
		return __thiz.callMethod<jboolean>(
			"hasNextByte",
			"()Z"
		);
	}
	jboolean Scanner::hasNextByte(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasNextByte",
			"(I)Z",
			arg0
		);
	}
	jboolean Scanner::hasNextDouble()
	{
		return __thiz.callMethod<jboolean>(
			"hasNextDouble",
			"()Z"
		);
	}
	jboolean Scanner::hasNextFloat()
	{
		return __thiz.callMethod<jboolean>(
			"hasNextFloat",
			"()Z"
		);
	}
	jboolean Scanner::hasNextInt()
	{
		return __thiz.callMethod<jboolean>(
			"hasNextInt",
			"()Z"
		);
	}
	jboolean Scanner::hasNextInt(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasNextInt",
			"(I)Z",
			arg0
		);
	}
	jboolean Scanner::hasNextLine()
	{
		return __thiz.callMethod<jboolean>(
			"hasNextLine",
			"()Z"
		);
	}
	jboolean Scanner::hasNextLong()
	{
		return __thiz.callMethod<jboolean>(
			"hasNextLong",
			"()Z"
		);
	}
	jboolean Scanner::hasNextLong(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasNextLong",
			"(I)Z",
			arg0
		);
	}
	jboolean Scanner::hasNextShort()
	{
		return __thiz.callMethod<jboolean>(
			"hasNextShort",
			"()Z"
		);
	}
	jboolean Scanner::hasNextShort(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasNextShort",
			"(I)Z",
			arg0
		);
	}
	QAndroidJniObject Scanner::ioException()
	{
		return __thiz.callObjectMethod(
			"ioException",
			"()Ljava/io/IOException;"
		);
	}
	QAndroidJniObject Scanner::locale()
	{
		return __thiz.callObjectMethod(
			"locale",
			"()Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Scanner::match()
	{
		return __thiz.callObjectMethod(
			"match",
			"()Ljava/util/regex/MatchResult;"
		);
	}
	jstring Scanner::next()
	{
		return __thiz.callObjectMethod(
			"next",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Scanner::next(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"next",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Scanner::next(java::util::regex::Pattern arg0)
	{
		return __thiz.callObjectMethod(
			"next",
			"(Ljava/util/regex/Pattern;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject Scanner::nextBigDecimal()
	{
		return __thiz.callObjectMethod(
			"nextBigDecimal",
			"()Ljava/math/BigDecimal;"
		);
	}
	QAndroidJniObject Scanner::nextBigInteger()
	{
		return __thiz.callObjectMethod(
			"nextBigInteger",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject Scanner::nextBigInteger(jint arg0)
	{
		return __thiz.callObjectMethod(
			"nextBigInteger",
			"(I)Ljava/math/BigInteger;",
			arg0
		);
	}
	jboolean Scanner::nextBoolean()
	{
		return __thiz.callMethod<jboolean>(
			"nextBoolean",
			"()Z"
		);
	}
	jbyte Scanner::nextByte()
	{
		return __thiz.callMethod<jbyte>(
			"nextByte",
			"()B"
		);
	}
	jbyte Scanner::nextByte(jint arg0)
	{
		return __thiz.callMethod<jbyte>(
			"nextByte",
			"(I)B",
			arg0
		);
	}
	jdouble Scanner::nextDouble()
	{
		return __thiz.callMethod<jdouble>(
			"nextDouble",
			"()D"
		);
	}
	jfloat Scanner::nextFloat()
	{
		return __thiz.callMethod<jfloat>(
			"nextFloat",
			"()F"
		);
	}
	jint Scanner::nextInt()
	{
		return __thiz.callMethod<jint>(
			"nextInt",
			"()I"
		);
	}
	jint Scanner::nextInt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"nextInt",
			"(I)I",
			arg0
		);
	}
	jstring Scanner::nextLine()
	{
		return __thiz.callObjectMethod(
			"nextLine",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong Scanner::nextLong()
	{
		return __thiz.callMethod<jlong>(
			"nextLong",
			"()J"
		);
	}
	jlong Scanner::nextLong(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"nextLong",
			"(I)J",
			arg0
		);
	}
	jshort Scanner::nextShort()
	{
		return __thiz.callMethod<jshort>(
			"nextShort",
			"()S"
		);
	}
	jshort Scanner::nextShort(jint arg0)
	{
		return __thiz.callMethod<jshort>(
			"nextShort",
			"(I)S",
			arg0
		);
	}
	jint Scanner::radix()
	{
		return __thiz.callMethod<jint>(
			"radix",
			"()I"
		);
	}
	void Scanner::remove()
	{
		__thiz.callMethod<void>(
			"remove",
			"()V"
		);
	}
	QAndroidJniObject Scanner::reset()
	{
		return __thiz.callObjectMethod(
			"reset",
			"()Ljava/util/Scanner;"
		);
	}
	QAndroidJniObject Scanner::skip(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"skip",
			"(Ljava/lang/String;)Ljava/util/Scanner;",
			arg0
		);
	}
	QAndroidJniObject Scanner::skip(java::util::regex::Pattern arg0)
	{
		return __thiz.callObjectMethod(
			"skip",
			"(Ljava/util/regex/Pattern;)Ljava/util/Scanner;",
			arg0.__jniObject().object()
		);
	}
	jstring Scanner::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Scanner::tokens()
	{
		return __thiz.callObjectMethod(
			"tokens",
			"()Ljava/util/stream/Stream;"
		);
	}
	QAndroidJniObject Scanner::useDelimiter(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"useDelimiter",
			"(Ljava/lang/String;)Ljava/util/Scanner;",
			arg0
		);
	}
	QAndroidJniObject Scanner::useDelimiter(java::util::regex::Pattern arg0)
	{
		return __thiz.callObjectMethod(
			"useDelimiter",
			"(Ljava/util/regex/Pattern;)Ljava/util/Scanner;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Scanner::useLocale(java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"useLocale",
			"(Ljava/util/Locale;)Ljava/util/Scanner;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Scanner::useRadix(jint arg0)
	{
		return __thiz.callObjectMethod(
			"useRadix",
			"(I)Ljava/util/Scanner;",
			arg0
		);
	}
} // namespace java::util

