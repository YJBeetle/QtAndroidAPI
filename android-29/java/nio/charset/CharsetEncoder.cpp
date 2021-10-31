#include "../../lang/ref/WeakReference.hpp"
#include "../ByteBuffer.hpp"
#include "../CharBuffer.hpp"
#include "./Charset.hpp"
#include "./CoderResult.hpp"
#include "./CodingErrorAction.hpp"
#include "./CharsetEncoder.hpp"

namespace java::nio::charset
{
	// Fields
	
	CharsetEncoder::CharsetEncoder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jfloat CharsetEncoder::averageBytesPerChar()
	{
		return __thiz.callMethod<jfloat>(
			"averageBytesPerChar",
			"()F"
		);
	}
	jboolean CharsetEncoder::canEncode(jchar arg0)
	{
		return __thiz.callMethod<jboolean>(
			"canEncode",
			"(C)Z",
			arg0
		);
	}
	jboolean CharsetEncoder::canEncode(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"canEncode",
			"(Ljava/lang/CharSequence;)Z",
			arg0
		);
	}
	QAndroidJniObject CharsetEncoder::charset()
	{
		return __thiz.callObjectMethod(
			"charset",
			"()Ljava/nio/charset/Charset;"
		);
	}
	QAndroidJniObject CharsetEncoder::encode(java::nio::CharBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"encode",
			"(Ljava/nio/CharBuffer;)Ljava/nio/ByteBuffer;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CharsetEncoder::encode(java::nio::CharBuffer arg0, java::nio::ByteBuffer arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"encode",
			"(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;Z)Ljava/nio/charset/CoderResult;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject CharsetEncoder::flush(java::nio::ByteBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"flush",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;",
			arg0.__jniObject().object()
		);
	}
	jboolean CharsetEncoder::isLegalReplacement(jbyteArray arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLegalReplacement",
			"([B)Z",
			arg0
		);
	}
	QAndroidJniObject CharsetEncoder::malformedInputAction()
	{
		return __thiz.callObjectMethod(
			"malformedInputAction",
			"()Ljava/nio/charset/CodingErrorAction;"
		);
	}
	jfloat CharsetEncoder::maxBytesPerChar()
	{
		return __thiz.callMethod<jfloat>(
			"maxBytesPerChar",
			"()F"
		);
	}
	QAndroidJniObject CharsetEncoder::onMalformedInput(java::nio::charset::CodingErrorAction arg0)
	{
		return __thiz.callObjectMethod(
			"onMalformedInput",
			"(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetEncoder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CharsetEncoder::onUnmappableCharacter(java::nio::charset::CodingErrorAction arg0)
	{
		return __thiz.callObjectMethod(
			"onUnmappableCharacter",
			"(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetEncoder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CharsetEncoder::replaceWith(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"replaceWith",
			"([B)Ljava/nio/charset/CharsetEncoder;",
			arg0
		);
	}
	jbyteArray CharsetEncoder::replacement()
	{
		return __thiz.callObjectMethod(
			"replacement",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject CharsetEncoder::reset()
	{
		return __thiz.callObjectMethod(
			"reset",
			"()Ljava/nio/charset/CharsetEncoder;"
		);
	}
	QAndroidJniObject CharsetEncoder::unmappableCharacterAction()
	{
		return __thiz.callObjectMethod(
			"unmappableCharacterAction",
			"()Ljava/nio/charset/CodingErrorAction;"
		);
	}
} // namespace java::nio::charset

