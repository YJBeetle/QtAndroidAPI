#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class File;
}
namespace java::io
{
	class IOException;
}
namespace java::io
{
	class InputStream;
}
namespace java::math
{
	class BigDecimal;
}
namespace java::math
{
	class BigInteger;
}
namespace java::nio
{
	class CharBuffer;
}
namespace java::nio::charset
{
	class Charset;
}
namespace java::nio::charset
{
	class CharsetDecoder;
}
namespace java::util
{
	class Locale;
}
namespace java::util::regex
{
	class Matcher;
}
namespace java::util::regex
{
	class Pattern;
}

namespace java::util
{
	class Scanner : public __JniBaseClass
	{
	public:
		// Fields
		
		Scanner(QAndroidJniObject obj);
		// Constructors
		Scanner(java::io::File &arg0);
		Scanner(java::io::InputStream &arg0);
		Scanner(__JniBaseClass &arg0);
		Scanner(jstring &arg0);
		Scanner(const QString &arg0);
		Scanner(java::io::File &arg0, jstring &arg1);
		Scanner(java::io::File &arg0, const QString &arg1);
		Scanner(java::io::File &arg0, java::nio::charset::Charset &arg1);
		Scanner(java::io::InputStream &arg0, jstring &arg1);
		Scanner(java::io::InputStream &arg0, const QString &arg1);
		Scanner(java::io::InputStream &arg0, java::nio::charset::Charset &arg1);
		Scanner(__JniBaseClass &arg0, jstring &arg1);
		Scanner(__JniBaseClass &arg0, const QString &arg1);
		Scanner(__JniBaseClass &arg0, java::nio::charset::Charset &arg1);
		Scanner() = default;
		
		// Methods
		void close();
		QAndroidJniObject delimiter();
		QAndroidJniObject findAll(jstring arg0);
		QAndroidJniObject findAll(const QString &arg0);
		QAndroidJniObject findAll(java::util::regex::Pattern arg0);
		jstring findInLine(jstring arg0);
		jstring findInLine(const QString &arg0);
		jstring findInLine(java::util::regex::Pattern arg0);
		jstring findWithinHorizon(jstring arg0, jint arg1);
		jstring findWithinHorizon(const QString &arg0, jint arg1);
		jstring findWithinHorizon(java::util::regex::Pattern arg0, jint arg1);
		jboolean hasNext();
		jboolean hasNext(jstring arg0);
		jboolean hasNext(const QString &arg0);
		jboolean hasNext(java::util::regex::Pattern arg0);
		jboolean hasNextBigDecimal();
		jboolean hasNextBigInteger();
		jboolean hasNextBigInteger(jint arg0);
		jboolean hasNextBoolean();
		jboolean hasNextByte();
		jboolean hasNextByte(jint arg0);
		jboolean hasNextDouble();
		jboolean hasNextFloat();
		jboolean hasNextInt();
		jboolean hasNextInt(jint arg0);
		jboolean hasNextLine();
		jboolean hasNextLong();
		jboolean hasNextLong(jint arg0);
		jboolean hasNextShort();
		jboolean hasNextShort(jint arg0);
		QAndroidJniObject ioException();
		QAndroidJniObject locale();
		QAndroidJniObject match();
		jstring next();
		jstring next(jstring arg0);
		jstring next(const QString &arg0);
		jstring next(java::util::regex::Pattern arg0);
		QAndroidJniObject nextBigDecimal();
		QAndroidJniObject nextBigInteger();
		QAndroidJniObject nextBigInteger(jint arg0);
		jboolean nextBoolean();
		jbyte nextByte();
		jbyte nextByte(jint arg0);
		jdouble nextDouble();
		jfloat nextFloat();
		jint nextInt();
		jint nextInt(jint arg0);
		jstring nextLine();
		jlong nextLong();
		jlong nextLong(jint arg0);
		jshort nextShort();
		jshort nextShort(jint arg0);
		jint radix();
		void remove();
		QAndroidJniObject reset();
		QAndroidJniObject skip(jstring arg0);
		QAndroidJniObject skip(const QString &arg0);
		QAndroidJniObject skip(java::util::regex::Pattern arg0);
		jstring toString();
		QAndroidJniObject tokens();
		QAndroidJniObject useDelimiter(jstring arg0);
		QAndroidJniObject useDelimiter(const QString &arg0);
		QAndroidJniObject useDelimiter(java::util::regex::Pattern arg0);
		QAndroidJniObject useLocale(java::util::Locale arg0);
		QAndroidJniObject useRadix(jint arg0);
	};
} // namespace java::util

