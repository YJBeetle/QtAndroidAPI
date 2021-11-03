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
		CharsetEncoder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jfloat averageBytesPerChar();
		jboolean canEncode(jchar arg0);
		jboolean canEncode(JString arg0);
		java::nio::charset::Charset charset();
		java::nio::ByteBuffer encode(java::nio::CharBuffer arg0);
		java::nio::charset::CoderResult encode(java::nio::CharBuffer arg0, java::nio::ByteBuffer arg1, jboolean arg2);
		java::nio::charset::CoderResult flush(java::nio::ByteBuffer arg0);
		jboolean isLegalReplacement(JByteArray arg0);
		java::nio::charset::CodingErrorAction malformedInputAction();
		jfloat maxBytesPerChar();
		java::nio::charset::CharsetEncoder onMalformedInput(java::nio::charset::CodingErrorAction arg0);
		java::nio::charset::CharsetEncoder onUnmappableCharacter(java::nio::charset::CodingErrorAction arg0);
		java::nio::charset::CharsetEncoder replaceWith(JByteArray arg0);
		JByteArray replacement();
		java::nio::charset::CharsetEncoder reset();
		java::nio::charset::CodingErrorAction unmappableCharacterAction();
	};
} // namespace java::nio::charset

