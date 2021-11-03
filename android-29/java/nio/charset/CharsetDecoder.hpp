#pragma once

#include "../../../JObject.hpp"

class JArray;
class JString;
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
	class CharsetDecoder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CharsetDecoder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CharsetDecoder(QJniObject obj);
		
		// Constructors
		
		// Methods
		jfloat averageCharsPerByte() const;
		java::nio::charset::Charset charset() const;
		java::nio::CharBuffer decode(java::nio::ByteBuffer arg0) const;
		java::nio::charset::CoderResult decode(java::nio::ByteBuffer arg0, java::nio::CharBuffer arg1, jboolean arg2) const;
		java::nio::charset::Charset detectedCharset() const;
		java::nio::charset::CoderResult flush(java::nio::CharBuffer arg0) const;
		jboolean isAutoDetecting() const;
		jboolean isCharsetDetected() const;
		java::nio::charset::CodingErrorAction malformedInputAction() const;
		jfloat maxCharsPerByte() const;
		java::nio::charset::CharsetDecoder onMalformedInput(java::nio::charset::CodingErrorAction arg0) const;
		java::nio::charset::CharsetDecoder onUnmappableCharacter(java::nio::charset::CodingErrorAction arg0) const;
		java::nio::charset::CharsetDecoder replaceWith(JString arg0) const;
		JString replacement() const;
		java::nio::charset::CharsetDecoder reset() const;
		java::nio::charset::CodingErrorAction unmappableCharacterAction() const;
	};
} // namespace java::nio::charset

