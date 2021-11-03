#include "../../../JByteArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JString.hpp"
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
	
	// QJniObject forward
	CharsetEncoder::CharsetEncoder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jfloat CharsetEncoder::averageBytesPerChar() const
	{
		return callMethod<jfloat>(
			"averageBytesPerChar",
			"()F"
		);
	}
	jboolean CharsetEncoder::canEncode(jchar arg0) const
	{
		return callMethod<jboolean>(
			"canEncode",
			"(C)Z",
			arg0
		);
	}
	jboolean CharsetEncoder::canEncode(JString arg0) const
	{
		return callMethod<jboolean>(
			"canEncode",
			"(Ljava/lang/CharSequence;)Z",
			arg0.object<jstring>()
		);
	}
	java::nio::charset::Charset CharsetEncoder::charset() const
	{
		return callObjectMethod(
			"charset",
			"()Ljava/nio/charset/Charset;"
		);
	}
	java::nio::ByteBuffer CharsetEncoder::encode(java::nio::CharBuffer arg0) const
	{
		return callObjectMethod(
			"encode",
			"(Ljava/nio/CharBuffer;)Ljava/nio/ByteBuffer;",
			arg0.object()
		);
	}
	java::nio::charset::CoderResult CharsetEncoder::encode(java::nio::CharBuffer arg0, java::nio::ByteBuffer arg1, jboolean arg2) const
	{
		return callObjectMethod(
			"encode",
			"(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;Z)Ljava/nio/charset/CoderResult;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	java::nio::charset::CoderResult CharsetEncoder::flush(java::nio::ByteBuffer arg0) const
	{
		return callObjectMethod(
			"flush",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;",
			arg0.object()
		);
	}
	jboolean CharsetEncoder::isLegalReplacement(JByteArray arg0) const
	{
		return callMethod<jboolean>(
			"isLegalReplacement",
			"([B)Z",
			arg0.object<jbyteArray>()
		);
	}
	java::nio::charset::CodingErrorAction CharsetEncoder::malformedInputAction() const
	{
		return callObjectMethod(
			"malformedInputAction",
			"()Ljava/nio/charset/CodingErrorAction;"
		);
	}
	jfloat CharsetEncoder::maxBytesPerChar() const
	{
		return callMethod<jfloat>(
			"maxBytesPerChar",
			"()F"
		);
	}
	java::nio::charset::CharsetEncoder CharsetEncoder::onMalformedInput(java::nio::charset::CodingErrorAction arg0) const
	{
		return callObjectMethod(
			"onMalformedInput",
			"(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetEncoder;",
			arg0.object()
		);
	}
	java::nio::charset::CharsetEncoder CharsetEncoder::onUnmappableCharacter(java::nio::charset::CodingErrorAction arg0) const
	{
		return callObjectMethod(
			"onUnmappableCharacter",
			"(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetEncoder;",
			arg0.object()
		);
	}
	java::nio::charset::CharsetEncoder CharsetEncoder::replaceWith(JByteArray arg0) const
	{
		return callObjectMethod(
			"replaceWith",
			"([B)Ljava/nio/charset/CharsetEncoder;",
			arg0.object<jbyteArray>()
		);
	}
	JByteArray CharsetEncoder::replacement() const
	{
		return callObjectMethod(
			"replacement",
			"()[B"
		);
	}
	java::nio::charset::CharsetEncoder CharsetEncoder::reset() const
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/charset/CharsetEncoder;"
		);
	}
	java::nio::charset::CodingErrorAction CharsetEncoder::unmappableCharacterAction() const
	{
		return callObjectMethod(
			"unmappableCharacterAction",
			"()Ljava/nio/charset/CodingErrorAction;"
		);
	}
} // namespace java::nio::charset

