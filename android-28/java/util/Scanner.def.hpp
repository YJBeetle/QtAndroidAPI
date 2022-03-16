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
		Scanner(QJniObject obj) : JObject(obj) {}
		
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
		void close() const;
		java::util::regex::Pattern delimiter() const;
		JObject findAll(JString arg0) const;
		JObject findAll(java::util::regex::Pattern arg0) const;
		JString findInLine(JString arg0) const;
		JString findInLine(java::util::regex::Pattern arg0) const;
		JString findWithinHorizon(JString arg0, jint arg1) const;
		JString findWithinHorizon(java::util::regex::Pattern arg0, jint arg1) const;
		jboolean hasNext() const;
		jboolean hasNext(JString arg0) const;
		jboolean hasNext(java::util::regex::Pattern arg0) const;
		jboolean hasNextBigDecimal() const;
		jboolean hasNextBigInteger() const;
		jboolean hasNextBigInteger(jint arg0) const;
		jboolean hasNextBoolean() const;
		jboolean hasNextByte() const;
		jboolean hasNextByte(jint arg0) const;
		jboolean hasNextDouble() const;
		jboolean hasNextFloat() const;
		jboolean hasNextInt() const;
		jboolean hasNextInt(jint arg0) const;
		jboolean hasNextLine() const;
		jboolean hasNextLong() const;
		jboolean hasNextLong(jint arg0) const;
		jboolean hasNextShort() const;
		jboolean hasNextShort(jint arg0) const;
		java::io::IOException ioException() const;
		java::util::Locale locale() const;
		JObject match() const;
		JString next() const;
		JString next(JString arg0) const;
		JString next(java::util::regex::Pattern arg0) const;
		java::math::BigDecimal nextBigDecimal() const;
		java::math::BigInteger nextBigInteger() const;
		java::math::BigInteger nextBigInteger(jint arg0) const;
		jboolean nextBoolean() const;
		jbyte nextByte() const;
		jbyte nextByte(jint arg0) const;
		jdouble nextDouble() const;
		jfloat nextFloat() const;
		jint nextInt() const;
		jint nextInt(jint arg0) const;
		JString nextLine() const;
		jlong nextLong() const;
		jlong nextLong(jint arg0) const;
		jshort nextShort() const;
		jshort nextShort(jint arg0) const;
		jint radix() const;
		void remove() const;
		java::util::Scanner reset() const;
		java::util::Scanner skip(JString arg0) const;
		java::util::Scanner skip(java::util::regex::Pattern arg0) const;
		JString toString() const;
		JObject tokens() const;
		java::util::Scanner useDelimiter(JString arg0) const;
		java::util::Scanner useDelimiter(java::util::regex::Pattern arg0) const;
		java::util::Scanner useLocale(java::util::Locale arg0) const;
		java::util::Scanner useRadix(jint arg0) const;
	};
} // namespace java::util

