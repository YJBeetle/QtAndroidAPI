#pragma once

#include "../../../JObject.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CharsetDecoder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CharsetDecoder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jfloat averageCharsPerByte();
		java::nio::charset::Charset charset();
		java::nio::CharBuffer decode(java::nio::ByteBuffer arg0);
		java::nio::charset::CoderResult decode(java::nio::ByteBuffer arg0, java::nio::CharBuffer arg1, jboolean arg2);
		java::nio::charset::Charset detectedCharset();
		java::nio::charset::CoderResult flush(java::nio::CharBuffer arg0);
		jboolean isAutoDetecting();
		jboolean isCharsetDetected();
		java::nio::charset::CodingErrorAction malformedInputAction();
		jfloat maxCharsPerByte();
		java::nio::charset::CharsetDecoder onMalformedInput(java::nio::charset::CodingErrorAction arg0);
		java::nio::charset::CharsetDecoder onUnmappableCharacter(java::nio::charset::CodingErrorAction arg0);
		java::nio::charset::CharsetDecoder replaceWith(jstring arg0);
		jstring replacement();
		java::nio::charset::CharsetDecoder reset();
		java::nio::charset::CodingErrorAction unmappableCharacterAction();
	};
} // namespace java::nio::charset

