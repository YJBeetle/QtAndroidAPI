#pragma once

#ifndef JAVA_UTIL_SCANNER
#define JAVA_UTIL_SCANNER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio
{
	class CharBuffer;
}
namespace __jni_impl::java::util::regex
{
	class Matcher;
}
namespace __jni_impl::java::util::regex
{
	class Pattern;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::io
{
	class IOException;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::nio::charset
{
	class Charset;
}
namespace __jni_impl::java::nio::charset
{
	class CharsetDecoder;
}
namespace __jni_impl::java::math
{
	class BigInteger;
}
namespace __jni_impl::java::math
{
	class BigDecimal;
}

namespace __jni_impl::java::util
{
	class Scanner : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::InputStream arg0, jstring arg1);
		void __constructor(__jni_impl::java::io::InputStream arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(__jni_impl::java::io::File arg0);
		void __constructor(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1);
		void __constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::java::nio::charset::Charset arg1);
		void __constructor(__jni_impl::__JniBaseClass arg0, jstring arg1);
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::java::nio::charset::Charset arg1);
		void __constructor(__jni_impl::java::io::File arg0, jstring arg1);
		void __constructor(jstring arg0);
		
		// Methods
		void remove();
		jstring toString();
		jboolean hasNext(__jni_impl::java::util::regex::Pattern arg0);
		jboolean hasNext(jstring arg0);
		jboolean hasNext();
		jstring next(__jni_impl::java::util::regex::Pattern arg0);
		jstring next(jstring arg0);
		jstring next();
		QAndroidJniObject delimiter();
		QAndroidJniObject locale();
		QAndroidJniObject match();
		void close();
		QAndroidJniObject skip(__jni_impl::java::util::regex::Pattern arg0);
		QAndroidJniObject skip(jstring arg0);
		QAndroidJniObject reset();
		jint radix();
		jdouble nextDouble();
		jint nextInt();
		jint nextInt(jint arg0);
		QAndroidJniObject ioException();
		jlong nextLong();
		jlong nextLong(jint arg0);
		jboolean nextBoolean();
		jfloat nextFloat();
		QAndroidJniObject findAll(jstring arg0);
		QAndroidJniObject findAll(__jni_impl::java::util::regex::Pattern arg0);
		QAndroidJniObject tokens();
		QAndroidJniObject useLocale(__jni_impl::java::util::Locale arg0);
		jstring findWithinHorizon(__jni_impl::java::util::regex::Pattern arg0, jint arg1);
		jstring findWithinHorizon(jstring arg0, jint arg1);
		jstring findInLine(__jni_impl::java::util::regex::Pattern arg0);
		jstring findInLine(jstring arg0);
		jboolean hasNextByte(jint arg0);
		jboolean hasNextByte();
		jbyte nextByte();
		jbyte nextByte(jint arg0);
		jboolean hasNextShort();
		jboolean hasNextShort(jint arg0);
		jshort nextShort(jint arg0);
		jshort nextShort();
		jboolean hasNextInt();
		jboolean hasNextInt(jint arg0);
		jboolean hasNextLong(jint arg0);
		jboolean hasNextLong();
		jboolean hasNextBigInteger(jint arg0);
		jboolean hasNextBigInteger();
		QAndroidJniObject nextBigInteger(jint arg0);
		QAndroidJniObject nextBigInteger();
		QAndroidJniObject useRadix(jint arg0);
		QAndroidJniObject useDelimiter(jstring arg0);
		QAndroidJniObject useDelimiter(__jni_impl::java::util::regex::Pattern arg0);
		jboolean hasNextLine();
		jstring nextLine();
		jboolean hasNextBoolean();
		jboolean hasNextFloat();
		jboolean hasNextDouble();
		jboolean hasNextBigDecimal();
		QAndroidJniObject nextBigDecimal();
	};
} // namespace __jni_impl::java::util

#include "../nio/CharBuffer.hpp"
#include "regex/Matcher.hpp"
#include "regex/Pattern.hpp"
#include "Locale.hpp"
#include "../io/IOException.hpp"
#include "../io/InputStream.hpp"
#include "../io/File.hpp"
#include "../nio/charset/Charset.hpp"
#include "../nio/charset/CharsetDecoder.hpp"
#include "../math/BigInteger.hpp"
#include "../math/BigDecimal.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void Scanner::__constructor(__jni_impl::java::io::InputStream arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Scanner",
			"(Ljava/io/InputStream;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void Scanner::__constructor(__jni_impl::java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Scanner",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object());
	}
	void Scanner::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Scanner",
			"(Ljava/lang/Readable;)V",
			arg0.__jniObject().object());
	}
	void Scanner::__constructor(__jni_impl::java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Scanner",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object());
	}
	void Scanner::__constructor(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Scanner",
			"(Ljava/io/File;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Scanner::__constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Scanner",
			"(Ljava/io/InputStream;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Scanner::__constructor(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Scanner",
			"(Ljava/nio/channels/ReadableByteChannel;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void Scanner::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Scanner",
			"(Ljava/nio/channels/ReadableByteChannel;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Scanner::__constructor(__jni_impl::java::io::File arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Scanner",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void Scanner::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Scanner",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	void Scanner::remove()
	{
		__thiz.callMethod<void>(
			"remove",
			"()V"
		);
	}
	jstring Scanner::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Scanner::hasNext(__jni_impl::java::util::regex::Pattern arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasNext",
			"(Ljava/util/regex/Pattern;)Z",
			arg0.__jniObject().object()
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
	jboolean Scanner::hasNext()
	{
		return __thiz.callMethod<jboolean>(
			"hasNext",
			"()Z"
		);
	}
	jstring Scanner::next(__jni_impl::java::util::regex::Pattern arg0)
	{
		return __thiz.callObjectMethod(
			"next",
			"(Ljava/util/regex/Pattern;)Ljava/lang/String;",
			arg0.__jniObject().object()
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
	jstring Scanner::next()
	{
		return __thiz.callObjectMethod(
			"next",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Scanner::delimiter()
	{
		return __thiz.callObjectMethod(
			"delimiter",
			"()Ljava/util/regex/Pattern;"
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
	void Scanner::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject Scanner::skip(__jni_impl::java::util::regex::Pattern arg0)
	{
		return __thiz.callObjectMethod(
			"skip",
			"(Ljava/util/regex/Pattern;)Ljava/util/Scanner;",
			arg0.__jniObject().object()
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
	QAndroidJniObject Scanner::reset()
	{
		return __thiz.callObjectMethod(
			"reset",
			"()Ljava/util/Scanner;"
		);
	}
	jint Scanner::radix()
	{
		return __thiz.callMethod<jint>(
			"radix",
			"()I"
		);
	}
	jdouble Scanner::nextDouble()
	{
		return __thiz.callMethod<jdouble>(
			"nextDouble",
			"()D"
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
	QAndroidJniObject Scanner::ioException()
	{
		return __thiz.callObjectMethod(
			"ioException",
			"()Ljava/io/IOException;"
		);
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
	jboolean Scanner::nextBoolean()
	{
		return __thiz.callMethod<jboolean>(
			"nextBoolean",
			"()Z"
		);
	}
	jfloat Scanner::nextFloat()
	{
		return __thiz.callMethod<jfloat>(
			"nextFloat",
			"()F"
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
	QAndroidJniObject Scanner::findAll(__jni_impl::java::util::regex::Pattern arg0)
	{
		return __thiz.callObjectMethod(
			"findAll",
			"(Ljava/util/regex/Pattern;)Ljava/util/stream/Stream;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Scanner::tokens()
	{
		return __thiz.callObjectMethod(
			"tokens",
			"()Ljava/util/stream/Stream;"
		);
	}
	QAndroidJniObject Scanner::useLocale(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"useLocale",
			"(Ljava/util/Locale;)Ljava/util/Scanner;",
			arg0.__jniObject().object()
		);
	}
	jstring Scanner::findWithinHorizon(__jni_impl::java::util::regex::Pattern arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"findWithinHorizon",
			"(Ljava/util/regex/Pattern;I)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
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
	jstring Scanner::findInLine(__jni_impl::java::util::regex::Pattern arg0)
	{
		return __thiz.callObjectMethod(
			"findInLine",
			"(Ljava/util/regex/Pattern;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Scanner::findInLine(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"findInLine",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean Scanner::hasNextByte(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasNextByte",
			"(I)Z",
			arg0
		);
	}
	jboolean Scanner::hasNextByte()
	{
		return __thiz.callMethod<jboolean>(
			"hasNextByte",
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
	jshort Scanner::nextShort(jint arg0)
	{
		return __thiz.callMethod<jshort>(
			"nextShort",
			"(I)S",
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
	jboolean Scanner::hasNextLong(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasNextLong",
			"(I)Z",
			arg0
		);
	}
	jboolean Scanner::hasNextLong()
	{
		return __thiz.callMethod<jboolean>(
			"hasNextLong",
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
	jboolean Scanner::hasNextBigInteger()
	{
		return __thiz.callMethod<jboolean>(
			"hasNextBigInteger",
			"()Z"
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
	QAndroidJniObject Scanner::nextBigInteger()
	{
		return __thiz.callObjectMethod(
			"nextBigInteger",
			"()Ljava/math/BigInteger;"
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
	QAndroidJniObject Scanner::useDelimiter(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"useDelimiter",
			"(Ljava/lang/String;)Ljava/util/Scanner;",
			arg0
		);
	}
	QAndroidJniObject Scanner::useDelimiter(__jni_impl::java::util::regex::Pattern arg0)
	{
		return __thiz.callObjectMethod(
			"useDelimiter",
			"(Ljava/util/regex/Pattern;)Ljava/util/Scanner;",
			arg0.__jniObject().object()
		);
	}
	jboolean Scanner::hasNextLine()
	{
		return __thiz.callMethod<jboolean>(
			"hasNextLine",
			"()Z"
		);
	}
	jstring Scanner::nextLine()
	{
		return __thiz.callObjectMethod(
			"nextLine",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Scanner::hasNextBoolean()
	{
		return __thiz.callMethod<jboolean>(
			"hasNextBoolean",
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
	jboolean Scanner::hasNextDouble()
	{
		return __thiz.callMethod<jboolean>(
			"hasNextDouble",
			"()Z"
		);
	}
	jboolean Scanner::hasNextBigDecimal()
	{
		return __thiz.callMethod<jboolean>(
			"hasNextBigDecimal",
			"()Z"
		);
	}
	QAndroidJniObject Scanner::nextBigDecimal()
	{
		return __thiz.callObjectMethod(
			"nextBigDecimal",
			"()Ljava/math/BigDecimal;"
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Scanner : public __jni_impl::java::util::Scanner
	{
	public:
		Scanner(QAndroidJniObject obj) { __thiz = obj; }
		Scanner(__jni_impl::java::io::InputStream arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Scanner(__jni_impl::java::io::InputStream arg0)
		{
			__constructor(
				arg0);
		}
		Scanner(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		Scanner(__jni_impl::java::io::File arg0)
		{
			__constructor(
				arg0);
		}
		Scanner(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Scanner(__jni_impl::java::io::InputStream arg0, __jni_impl::java::nio::charset::Charset arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Scanner(__jni_impl::__JniBaseClass arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Scanner(__jni_impl::__JniBaseClass arg0, __jni_impl::java::nio::charset::Charset arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Scanner(__jni_impl::java::io::File arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Scanner(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_SCANNER

