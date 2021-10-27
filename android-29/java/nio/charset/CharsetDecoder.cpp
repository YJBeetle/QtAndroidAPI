#include "../ByteBuffer.hpp"
#include "../CharBuffer.hpp"
#include "./Charset.hpp"
#include "./CoderResult.hpp"
#include "./CodingErrorAction.hpp"
#include "./CharsetDecoder.hpp"

namespace java::nio::charset
{
	// Fields
	
	CharsetDecoder::CharsetDecoder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jfloat CharsetDecoder::averageCharsPerByte()
	{
		return __thiz.callMethod<jfloat>(
			"averageCharsPerByte",
			"()F"
		);
	}
	QAndroidJniObject CharsetDecoder::charset()
	{
		return __thiz.callObjectMethod(
			"charset",
			"()Ljava/nio/charset/Charset;"
		);
	}
	QAndroidJniObject CharsetDecoder::decode(java::nio::ByteBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"decode",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CharsetDecoder::decode(java::nio::ByteBuffer arg0, java::nio::CharBuffer arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"decode",
			"(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;Z)Ljava/nio/charset/CoderResult;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject CharsetDecoder::detectedCharset()
	{
		return __thiz.callObjectMethod(
			"detectedCharset",
			"()Ljava/nio/charset/Charset;"
		);
	}
	QAndroidJniObject CharsetDecoder::flush(java::nio::CharBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"flush",
			"(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;",
			arg0.__jniObject().object()
		);
	}
	jboolean CharsetDecoder::isAutoDetecting()
	{
		return __thiz.callMethod<jboolean>(
			"isAutoDetecting",
			"()Z"
		);
	}
	jboolean CharsetDecoder::isCharsetDetected()
	{
		return __thiz.callMethod<jboolean>(
			"isCharsetDetected",
			"()Z"
		);
	}
	QAndroidJniObject CharsetDecoder::malformedInputAction()
	{
		return __thiz.callObjectMethod(
			"malformedInputAction",
			"()Ljava/nio/charset/CodingErrorAction;"
		);
	}
	jfloat CharsetDecoder::maxCharsPerByte()
	{
		return __thiz.callMethod<jfloat>(
			"maxCharsPerByte",
			"()F"
		);
	}
	QAndroidJniObject CharsetDecoder::onMalformedInput(java::nio::charset::CodingErrorAction arg0)
	{
		return __thiz.callObjectMethod(
			"onMalformedInput",
			"(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CharsetDecoder::onUnmappableCharacter(java::nio::charset::CodingErrorAction arg0)
	{
		return __thiz.callObjectMethod(
			"onUnmappableCharacter",
			"(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CharsetDecoder::replaceWith(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"replaceWith",
			"(Ljava/lang/String;)Ljava/nio/charset/CharsetDecoder;",
			arg0
		);
	}
	QAndroidJniObject CharsetDecoder::replaceWith(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"replaceWith",
			"(Ljava/lang/String;)Ljava/nio/charset/CharsetDecoder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring CharsetDecoder::replacement()
	{
		return __thiz.callObjectMethod(
			"replacement",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject CharsetDecoder::reset()
	{
		return __thiz.callObjectMethod(
			"reset",
			"()Ljava/nio/charset/CharsetDecoder;"
		);
	}
	QAndroidJniObject CharsetDecoder::unmappableCharacterAction()
	{
		return __thiz.callObjectMethod(
			"unmappableCharacterAction",
			"()Ljava/nio/charset/CodingErrorAction;"
		);
	}
} // namespace java::nio::charset

