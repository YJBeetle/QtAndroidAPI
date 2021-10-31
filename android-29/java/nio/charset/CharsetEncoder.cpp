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
	
	// QAndroidJniObject forward
	CharsetEncoder::CharsetEncoder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jfloat CharsetEncoder::averageBytesPerChar()
	{
		return callMethod<jfloat>(
			"averageBytesPerChar",
			"()F"
		);
	}
	jboolean CharsetEncoder::canEncode(jchar arg0)
	{
		return callMethod<jboolean>(
			"canEncode",
			"(C)Z",
			arg0
		);
	}
	jboolean CharsetEncoder::canEncode(jstring arg0)
	{
		return callMethod<jboolean>(
			"canEncode",
			"(Ljava/lang/CharSequence;)Z",
			arg0
		);
	}
	QAndroidJniObject CharsetEncoder::charset()
	{
		return callObjectMethod(
			"charset",
			"()Ljava/nio/charset/Charset;"
		);
	}
	QAndroidJniObject CharsetEncoder::encode(java::nio::CharBuffer arg0)
	{
		return callObjectMethod(
			"encode",
			"(Ljava/nio/CharBuffer;)Ljava/nio/ByteBuffer;",
			arg0.object()
		);
	}
	QAndroidJniObject CharsetEncoder::encode(java::nio::CharBuffer arg0, java::nio::ByteBuffer arg1, jboolean arg2)
	{
		return callObjectMethod(
			"encode",
			"(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;Z)Ljava/nio/charset/CoderResult;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	QAndroidJniObject CharsetEncoder::flush(java::nio::ByteBuffer arg0)
	{
		return callObjectMethod(
			"flush",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;",
			arg0.object()
		);
	}
	jboolean CharsetEncoder::isLegalReplacement(jbyteArray arg0)
	{
		return callMethod<jboolean>(
			"isLegalReplacement",
			"([B)Z",
			arg0
		);
	}
	QAndroidJniObject CharsetEncoder::malformedInputAction()
	{
		return callObjectMethod(
			"malformedInputAction",
			"()Ljava/nio/charset/CodingErrorAction;"
		);
	}
	jfloat CharsetEncoder::maxBytesPerChar()
	{
		return callMethod<jfloat>(
			"maxBytesPerChar",
			"()F"
		);
	}
	QAndroidJniObject CharsetEncoder::onMalformedInput(java::nio::charset::CodingErrorAction arg0)
	{
		return callObjectMethod(
			"onMalformedInput",
			"(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetEncoder;",
			arg0.object()
		);
	}
	QAndroidJniObject CharsetEncoder::onUnmappableCharacter(java::nio::charset::CodingErrorAction arg0)
	{
		return callObjectMethod(
			"onUnmappableCharacter",
			"(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetEncoder;",
			arg0.object()
		);
	}
	QAndroidJniObject CharsetEncoder::replaceWith(jbyteArray arg0)
	{
		return callObjectMethod(
			"replaceWith",
			"([B)Ljava/nio/charset/CharsetEncoder;",
			arg0
		);
	}
	jbyteArray CharsetEncoder::replacement()
	{
		return callObjectMethod(
			"replacement",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject CharsetEncoder::reset()
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/charset/CharsetEncoder;"
		);
	}
	QAndroidJniObject CharsetEncoder::unmappableCharacterAction()
	{
		return callObjectMethod(
			"unmappableCharacterAction",
			"()Ljava/nio/charset/CodingErrorAction;"
		);
	}
} // namespace java::nio::charset

