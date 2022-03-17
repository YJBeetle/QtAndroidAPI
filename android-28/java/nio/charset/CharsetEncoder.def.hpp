#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JArray;
class JString;
namespace java::lang::ref
{
	class WeakReference;
}
namespace java::nio
{
	class ByteBuffer;
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
	class CoderResult;
}
namespace java::nio::charset
{
	class CodingErrorAction;
}

namespace java::nio::charset
{
	class CharsetEncoder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CharsetEncoder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CharsetEncoder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jfloat averageBytesPerChar() const;
		jboolean canEncode(jchar arg0) const;
		jboolean canEncode(JString arg0) const;
		java::nio::charset::Charset charset() const;
		java::nio::ByteBuffer encode(java::nio::CharBuffer arg0) const;
		java::nio::charset::CoderResult encode(java::nio::CharBuffer arg0, java::nio::ByteBuffer arg1, jboolean arg2) const;
		java::nio::charset::CoderResult flush(java::nio::ByteBuffer arg0) const;
		jboolean isLegalReplacement(JByteArray arg0) const;
		java::nio::charset::CodingErrorAction malformedInputAction() const;
		jfloat maxBytesPerChar() const;
		java::nio::charset::CharsetEncoder onMalformedInput(java::nio::charset::CodingErrorAction arg0) const;
		java::nio::charset::CharsetEncoder onUnmappableCharacter(java::nio::charset::CodingErrorAction arg0) const;
		java::nio::charset::CharsetEncoder replaceWith(JByteArray arg0) const;
		JByteArray replacement() const;
		java::nio::charset::CharsetEncoder reset() const;
		java::nio::charset::CodingErrorAction unmappableCharacterAction() const;
	};
} // namespace java::nio::charset

