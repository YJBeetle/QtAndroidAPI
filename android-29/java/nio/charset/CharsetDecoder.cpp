#include "../ByteBuffer.hpp"
#include "../CharBuffer.hpp"
#include "./Charset.hpp"
#include "./CoderResult.hpp"
#include "./CodingErrorAction.hpp"
#include "./CharsetDecoder.hpp"

namespace java::nio::charset
{
	// Fields
	
	// QAndroidJniObject forward
	CharsetDecoder::CharsetDecoder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jfloat CharsetDecoder::averageCharsPerByte()
	{
		return callMethod<jfloat>(
			"averageCharsPerByte",
			"()F"
		);
	}
	QAndroidJniObject CharsetDecoder::charset()
	{
		return callObjectMethod(
			"charset",
			"()Ljava/nio/charset/Charset;"
		);
	}
	QAndroidJniObject CharsetDecoder::decode(java::nio::ByteBuffer arg0)
	{
		return callObjectMethod(
			"decode",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;",
			arg0.object()
		);
	}
	QAndroidJniObject CharsetDecoder::decode(java::nio::ByteBuffer arg0, java::nio::CharBuffer arg1, jboolean arg2)
	{
		return callObjectMethod(
			"decode",
			"(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;Z)Ljava/nio/charset/CoderResult;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	QAndroidJniObject CharsetDecoder::detectedCharset()
	{
		return callObjectMethod(
			"detectedCharset",
			"()Ljava/nio/charset/Charset;"
		);
	}
	QAndroidJniObject CharsetDecoder::flush(java::nio::CharBuffer arg0)
	{
		return callObjectMethod(
			"flush",
			"(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;",
			arg0.object()
		);
	}
	jboolean CharsetDecoder::isAutoDetecting()
	{
		return callMethod<jboolean>(
			"isAutoDetecting",
			"()Z"
		);
	}
	jboolean CharsetDecoder::isCharsetDetected()
	{
		return callMethod<jboolean>(
			"isCharsetDetected",
			"()Z"
		);
	}
	QAndroidJniObject CharsetDecoder::malformedInputAction()
	{
		return callObjectMethod(
			"malformedInputAction",
			"()Ljava/nio/charset/CodingErrorAction;"
		);
	}
	jfloat CharsetDecoder::maxCharsPerByte()
	{
		return callMethod<jfloat>(
			"maxCharsPerByte",
			"()F"
		);
	}
	QAndroidJniObject CharsetDecoder::onMalformedInput(java::nio::charset::CodingErrorAction arg0)
	{
		return callObjectMethod(
			"onMalformedInput",
			"(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;",
			arg0.object()
		);
	}
	QAndroidJniObject CharsetDecoder::onUnmappableCharacter(java::nio::charset::CodingErrorAction arg0)
	{
		return callObjectMethod(
			"onUnmappableCharacter",
			"(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;",
			arg0.object()
		);
	}
	QAndroidJniObject CharsetDecoder::replaceWith(jstring arg0)
	{
		return callObjectMethod(
			"replaceWith",
			"(Ljava/lang/String;)Ljava/nio/charset/CharsetDecoder;",
			arg0
		);
	}
	jstring CharsetDecoder::replacement()
	{
		return callObjectMethod(
			"replacement",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject CharsetDecoder::reset()
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/charset/CharsetDecoder;"
		);
	}
	QAndroidJniObject CharsetDecoder::unmappableCharacterAction()
	{
		return callObjectMethod(
			"unmappableCharacterAction",
			"()Ljava/nio/charset/CodingErrorAction;"
		);
	}
} // namespace java::nio::charset

