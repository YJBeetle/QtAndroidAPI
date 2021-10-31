#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class CharsetDecoder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CharsetDecoder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CharsetDecoder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jfloat averageCharsPerByte();
		QAndroidJniObject charset();
		QAndroidJniObject decode(java::nio::ByteBuffer arg0);
		QAndroidJniObject decode(java::nio::ByteBuffer arg0, java::nio::CharBuffer arg1, jboolean arg2);
		QAndroidJniObject detectedCharset();
		QAndroidJniObject flush(java::nio::CharBuffer arg0);
		jboolean isAutoDetecting();
		jboolean isCharsetDetected();
		QAndroidJniObject malformedInputAction();
		jfloat maxCharsPerByte();
		QAndroidJniObject onMalformedInput(java::nio::charset::CodingErrorAction arg0);
		QAndroidJniObject onUnmappableCharacter(java::nio::charset::CodingErrorAction arg0);
		QAndroidJniObject replaceWith(jstring arg0);
		jstring replacement();
		QAndroidJniObject reset();
		QAndroidJniObject unmappableCharacterAction();
	};
} // namespace java::nio::charset

