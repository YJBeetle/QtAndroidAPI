#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../ByteBuffer.def.hpp"
#include "../CharBuffer.def.hpp"
#include "./Charset.def.hpp"
#include "./CoderResult.def.hpp"
#include "./CodingErrorAction.def.hpp"
#include "./CharsetDecoder.def.hpp"

namespace java::nio::charset
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jfloat CharsetDecoder::averageCharsPerByte() const
	{
		return callMethod<jfloat>(
			"averageCharsPerByte",
			"()F"
		);
	}
	inline java::nio::charset::Charset CharsetDecoder::charset() const
	{
		return callObjectMethod(
			"charset",
			"()Ljava/nio/charset/Charset;"
		);
	}
	inline java::nio::CharBuffer CharsetDecoder::decode(java::nio::ByteBuffer arg0) const
	{
		return callObjectMethod(
			"decode",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;",
			arg0.object()
		);
	}
	inline java::nio::charset::CoderResult CharsetDecoder::decode(java::nio::ByteBuffer arg0, java::nio::CharBuffer arg1, jboolean arg2) const
	{
		return callObjectMethod(
			"decode",
			"(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;Z)Ljava/nio/charset/CoderResult;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline java::nio::charset::Charset CharsetDecoder::detectedCharset() const
	{
		return callObjectMethod(
			"detectedCharset",
			"()Ljava/nio/charset/Charset;"
		);
	}
	inline java::nio::charset::CoderResult CharsetDecoder::flush(java::nio::CharBuffer arg0) const
	{
		return callObjectMethod(
			"flush",
			"(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;",
			arg0.object()
		);
	}
	inline jboolean CharsetDecoder::isAutoDetecting() const
	{
		return callMethod<jboolean>(
			"isAutoDetecting",
			"()Z"
		);
	}
	inline jboolean CharsetDecoder::isCharsetDetected() const
	{
		return callMethod<jboolean>(
			"isCharsetDetected",
			"()Z"
		);
	}
	inline java::nio::charset::CodingErrorAction CharsetDecoder::malformedInputAction() const
	{
		return callObjectMethod(
			"malformedInputAction",
			"()Ljava/nio/charset/CodingErrorAction;"
		);
	}
	inline jfloat CharsetDecoder::maxCharsPerByte() const
	{
		return callMethod<jfloat>(
			"maxCharsPerByte",
			"()F"
		);
	}
	inline java::nio::charset::CharsetDecoder CharsetDecoder::onMalformedInput(java::nio::charset::CodingErrorAction arg0) const
	{
		return callObjectMethod(
			"onMalformedInput",
			"(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;",
			arg0.object()
		);
	}
	inline java::nio::charset::CharsetDecoder CharsetDecoder::onUnmappableCharacter(java::nio::charset::CodingErrorAction arg0) const
	{
		return callObjectMethod(
			"onUnmappableCharacter",
			"(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;",
			arg0.object()
		);
	}
	inline java::nio::charset::CharsetDecoder CharsetDecoder::replaceWith(JString arg0) const
	{
		return callObjectMethod(
			"replaceWith",
			"(Ljava/lang/String;)Ljava/nio/charset/CharsetDecoder;",
			arg0.object<jstring>()
		);
	}
	inline JString CharsetDecoder::replacement() const
	{
		return callObjectMethod(
			"replacement",
			"()Ljava/lang/String;"
		);
	}
	inline java::nio::charset::CharsetDecoder CharsetDecoder::reset() const
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/charset/CharsetDecoder;"
		);
	}
	inline java::nio::charset::CodingErrorAction CharsetDecoder::unmappableCharacterAction() const
	{
		return callObjectMethod(
			"unmappableCharacterAction",
			"()Ljava/nio/charset/CodingErrorAction;"
		);
	}
} // namespace java::nio::charset

// Base class headers

