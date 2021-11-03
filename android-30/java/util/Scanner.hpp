#pragma once

#include "../../JObject.hpp"

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
class JObject;
class JString;
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
	class Scanner : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Scanner(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Scanner(QJniObject obj);
		
		// Constructors
		Scanner(java::io::File arg0);
		Scanner(java::io::InputStream arg0);
		Scanner(JObject arg0);
		Scanner(JString arg0);
		Scanner(java::io::File arg0, JString arg1);
		Scanner(java::io::File arg0, java::nio::charset::Charset arg1);
		Scanner(java::io::InputStream arg0, JString arg1);
		Scanner(java::io::InputStream arg0, java::nio::charset::Charset arg1);
		Scanner(JObject arg0, JString arg1);
		Scanner(JObject arg0, java::nio::charset::Charset arg1);
		
		// Methods
		void close();
		java::util::regex::Pattern delimiter();
		JObject findAll(JString arg0);
		JObject findAll(java::util::regex::Pattern arg0);
		JString findInLine(JString arg0);
		JString findInLine(java::util::regex::Pattern arg0);
		JString findWithinHorizon(JString arg0, jint arg1);
		JString findWithinHorizon(java::util::regex::Pattern arg0, jint arg1);
		jboolean hasNext();
		jboolean hasNext(JString arg0);
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
		java::io::IOException ioException();
		java::util::Locale locale();
		JObject match();
		JString next();
		JString next(JString arg0);
		JString next(java::util::regex::Pattern arg0);
		java::math::BigDecimal nextBigDecimal();
		java::math::BigInteger nextBigInteger();
		java::math::BigInteger nextBigInteger(jint arg0);
		jboolean nextBoolean();
		jbyte nextByte();
		jbyte nextByte(jint arg0);
		jdouble nextDouble();
		jfloat nextFloat();
		jint nextInt();
		jint nextInt(jint arg0);
		JString nextLine();
		jlong nextLong();
		jlong nextLong(jint arg0);
		jshort nextShort();
		jshort nextShort(jint arg0);
		jint radix();
		void remove();
		java::util::Scanner reset();
		java::util::Scanner skip(JString arg0);
		java::util::Scanner skip(java::util::regex::Pattern arg0);
		JString toString();
		JObject tokens();
		java::util::Scanner useDelimiter(JString arg0);
		java::util::Scanner useDelimiter(java::util::regex::Pattern arg0);
		java::util::Scanner useLocale(java::util::Locale arg0);
		java::util::Scanner useRadix(jint arg0);
	};
} // namespace java::util

