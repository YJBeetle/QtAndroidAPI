#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../ByteBuffer.hpp"
#include "../CharBuffer.hpp"
#include "./Charset.hpp"
#include "./CoderResult.hpp"
#include "./CodingErrorAction.hpp"
#include "./CharsetDecoder.hpp"

namespace java::nio::charset
{
	// Fields
	
	// QJniObject forward
	CharsetDecoder::CharsetDecoder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jfloat CharsetDecoder::averageCharsPerByte()
	{
		return callMethod<jfloat>(
			"averageCharsPerByte",
			"()F"
		);
	}
	java::nio::charset::Charset CharsetDecoder::charset()
	{
		return callObjectMethod(
			"charset",
			"()Ljava/nio/charset/Charset;"
		);
	}
	java::nio::CharBuffer CharsetDecoder::decode(java::nio::ByteBuffer arg0)
	{
		return callObjectMethod(
			"decode",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;",
			arg0.object()
		);
	}
	java::nio::charset::CoderResult CharsetDecoder::decode(java::nio::ByteBuffer arg0, java::nio::CharBuffer arg1, jboolean arg2)
	{
		return callObjectMethod(
			"decode",
			"(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;Z)Ljava/nio/charset/CoderResult;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	java::nio::charset::Charset CharsetDecoder::detectedCharset()
	{
		return callObjectMethod(
			"detectedCharset",
			"()Ljava/nio/charset/Charset;"
		);
	}
	java::nio::charset::CoderResult CharsetDecoder::flush(java::nio::CharBuffer arg0)
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
	java::nio::charset::CodingErrorAction CharsetDecoder::malformedInputAction()
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
	java::nio::charset::CharsetDecoder CharsetDecoder::onMalformedInput(java::nio::charset::CodingErrorAction arg0)
	{
		return callObjectMethod(
			"onMalformedInput",
			"(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;",
			arg0.object()
		);
	}
	java::nio::charset::CharsetDecoder CharsetDecoder::onUnmappableCharacter(java::nio::charset::CodingErrorAction arg0)
	{
		return callObjectMethod(
			"onUnmappableCharacter",
			"(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;",
			arg0.object()
		);
	}
	java::nio::charset::CharsetDecoder CharsetDecoder::replaceWith(JString arg0)
	{
		return callObjectMethod(
			"replaceWith",
			"(Ljava/lang/String;)Ljava/nio/charset/CharsetDecoder;",
			arg0.object<jstring>()
		);
	}
	JString CharsetDecoder::replacement()
	{
		return callObjectMethod(
			"replacement",
			"()Ljava/lang/String;"
		);
	}
	java::nio::charset::CharsetDecoder CharsetDecoder::reset()
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/charset/CharsetDecoder;"
		);
	}
	java::nio::charset::CodingErrorAction CharsetDecoder::unmappableCharacterAction()
	{
		return callObjectMethod(
			"unmappableCharacterAction",
			"()Ljava/nio/charset/CodingErrorAction;"
		);
	}
} // namespace java::nio::charset

