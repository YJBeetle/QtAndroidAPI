#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "./AndroidCharacter.hpp"

namespace android::text
{
	// Fields
	jint AndroidCharacter::EAST_ASIAN_WIDTH_AMBIGUOUS()
	{
		return getStaticField<jint>(
			"android.text.AndroidCharacter",
			"EAST_ASIAN_WIDTH_AMBIGUOUS"
		);
	}
	jint AndroidCharacter::EAST_ASIAN_WIDTH_FULL_WIDTH()
	{
		return getStaticField<jint>(
			"android.text.AndroidCharacter",
			"EAST_ASIAN_WIDTH_FULL_WIDTH"
		);
	}
	jint AndroidCharacter::EAST_ASIAN_WIDTH_HALF_WIDTH()
	{
		return getStaticField<jint>(
			"android.text.AndroidCharacter",
			"EAST_ASIAN_WIDTH_HALF_WIDTH"
		);
	}
	jint AndroidCharacter::EAST_ASIAN_WIDTH_NARROW()
	{
		return getStaticField<jint>(
			"android.text.AndroidCharacter",
			"EAST_ASIAN_WIDTH_NARROW"
		);
	}
	jint AndroidCharacter::EAST_ASIAN_WIDTH_NEUTRAL()
	{
		return getStaticField<jint>(
			"android.text.AndroidCharacter",
			"EAST_ASIAN_WIDTH_NEUTRAL"
		);
	}
	jint AndroidCharacter::EAST_ASIAN_WIDTH_WIDE()
	{
		return getStaticField<jint>(
			"android.text.AndroidCharacter",
			"EAST_ASIAN_WIDTH_WIDE"
		);
	}
	
	// QAndroidJniObject forward
	AndroidCharacter::AndroidCharacter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AndroidCharacter::AndroidCharacter()
		: JObject(
			"android.text.AndroidCharacter",
			"()V"
		) {}
	
	// Methods
	void AndroidCharacter::getDirectionalities(JCharArray arg0, JByteArray arg1, jint arg2)
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
	jint AndroidCharacter::getEastAsianWidth(jchar arg0)
	{
		return callStaticMethod<jint>(
			"android.text.AndroidCharacter",
			"getEastAsianWidth",
			"(C)I",
			arg0
		);
	}
	void AndroidCharacter::getEastAsianWidths(JCharArray arg0, jint arg1, jint arg2, JByteArray arg3)
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
	jchar AndroidCharacter::getMirror(jchar arg0)
	{
		return callStaticMethod<jchar>(
			"android.text.AndroidCharacter",
			"getMirror",
			"(C)C",
			arg0
		);
	}
	jboolean AndroidCharacter::mirror(JCharArray arg0, jint arg1, jint arg2)
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

