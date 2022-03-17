#pragma once

#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "./AndroidCharacter.def.hpp"

namespace android::text
{
	// Fields
	inline jint AndroidCharacter::EAST_ASIAN_WIDTH_AMBIGUOUS()
	{
		return getStaticField<jint>(
			"android.text.AndroidCharacter",
			"EAST_ASIAN_WIDTH_AMBIGUOUS"
		);
	}
	inline jint AndroidCharacter::EAST_ASIAN_WIDTH_FULL_WIDTH()
	{
		return getStaticField<jint>(
			"android.text.AndroidCharacter",
			"EAST_ASIAN_WIDTH_FULL_WIDTH"
		);
	}
	inline jint AndroidCharacter::EAST_ASIAN_WIDTH_HALF_WIDTH()
	{
		return getStaticField<jint>(
			"android.text.AndroidCharacter",
			"EAST_ASIAN_WIDTH_HALF_WIDTH"
		);
	}
	inline jint AndroidCharacter::EAST_ASIAN_WIDTH_NARROW()
	{
		return getStaticField<jint>(
			"android.text.AndroidCharacter",
			"EAST_ASIAN_WIDTH_NARROW"
		);
	}
	inline jint AndroidCharacter::EAST_ASIAN_WIDTH_NEUTRAL()
	{
		return getStaticField<jint>(
			"android.text.AndroidCharacter",
			"EAST_ASIAN_WIDTH_NEUTRAL"
		);
	}
	inline jint AndroidCharacter::EAST_ASIAN_WIDTH_WIDE()
	{
		return getStaticField<jint>(
			"android.text.AndroidCharacter",
			"EAST_ASIAN_WIDTH_WIDE"
		);
	}
	
	// Constructors
	inline AndroidCharacter::AndroidCharacter()
		: JObject(
			"android.text.AndroidCharacter",
			"()V"
		) {}
	
	// Methods
	inline void AndroidCharacter::getDirectionalities(JCharArray arg0, JByteArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.text.AndroidCharacter",
			"getDirectionalities",
			"([C[BI)V",
			arg0.object<jcharArray>(),
			arg1.object<jbyteArray>(),
			arg2
		);
	}
	inline jint AndroidCharacter::getEastAsianWidth(jchar arg0)
	{
		return callStaticMethod<jint>(
			"android.text.AndroidCharacter",
			"getEastAsianWidth",
			"(C)I",
			arg0
		);
	}
	inline void AndroidCharacter::getEastAsianWidths(JCharArray arg0, jint arg1, jint arg2, JByteArray arg3)
	{
		callStaticMethod<void>(
			"android.text.AndroidCharacter",
			"getEastAsianWidths",
			"([CII[B)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3.object<jbyteArray>()
		);
	}
	inline jchar AndroidCharacter::getMirror(jchar arg0)
	{
		return callStaticMethod<jchar>(
			"android.text.AndroidCharacter",
			"getMirror",
			"(C)C",
			arg0
		);
	}
	inline jboolean AndroidCharacter::mirror(JCharArray arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jboolean>(
			"android.text.AndroidCharacter",
			"mirror",
			"([CII)Z",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
} // namespace android::text

// Base class headers

