#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class CharsetEncoder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CharsetEncoder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CharsetEncoder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jfloat averageBytesPerChar();
		jboolean canEncode(jchar arg0);
		jboolean canEncode(jstring arg0);
		QAndroidJniObject charset();
		QAndroidJniObject encode(java::nio::CharBuffer arg0);
		QAndroidJniObject encode(java::nio::CharBuffer arg0, java::nio::ByteBuffer arg1, jboolean arg2);
		QAndroidJniObject flush(java::nio::ByteBuffer arg0);
		jboolean isLegalReplacement(jbyteArray arg0);
		QAndroidJniObject malformedInputAction();
		jfloat maxBytesPerChar();
		QAndroidJniObject onMalformedInput(java::nio::charset::CodingErrorAction arg0);
		QAndroidJniObject onUnmappableCharacter(java::nio::charset::CodingErrorAction arg0);
		QAndroidJniObject replaceWith(jbyteArray arg0);
		jbyteArray replacement();
		QAndroidJniObject reset();
		QAndroidJniObject unmappableCharacterAction();
	};
} // namespace java::nio::charset

