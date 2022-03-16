#pragma once

#include "../../JByteArray.hpp"
#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../text/style/TtsSpan.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "../../java/util/Locale.def.hpp"
#include "./PhoneNumberUtils.def.hpp"

namespace android::telephony
{
	// Fields
	inline jint PhoneNumberUtils::BCD_EXTENDED_TYPE_CALLED_PARTY()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneNumberUtils",
			"BCD_EXTENDED_TYPE_CALLED_PARTY"
		);
	}
	inline jint PhoneNumberUtils::BCD_EXTENDED_TYPE_EF_ADN()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneNumberUtils",
			"BCD_EXTENDED_TYPE_EF_ADN"
		);
	}
	inline jint PhoneNumberUtils::FORMAT_JAPAN()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneNumberUtils",
			"FORMAT_JAPAN"
		);
	}
	inline jint PhoneNumberUtils::FORMAT_NANP()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneNumberUtils",
			"FORMAT_NANP"
		);
	}
	inline jint PhoneNumberUtils::FORMAT_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneNumberUtils",
			"FORMAT_UNKNOWN"
		);
	}
	inline jchar PhoneNumberUtils::PAUSE()
	{
		return getStaticField<jchar>(
			"android.telephony.PhoneNumberUtils",
			"PAUSE"
		);
	}
	inline jint PhoneNumberUtils::TOA_International()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneNumberUtils",
			"TOA_International"
		);
	}
	inline jint PhoneNumberUtils::TOA_Unknown()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneNumberUtils",
			"TOA_Unknown"
		);
	}
	inline jchar PhoneNumberUtils::WAIT()
	{
		return getStaticField<jchar>(
			"android.telephony.PhoneNumberUtils",
			"WAIT"
		);
	}
	inline jchar PhoneNumberUtils::WILD()
	{
		return getStaticField<jchar>(
			"android.telephony.PhoneNumberUtils",
			"WILD"
		);
	}
	
	// Constructors
	inline PhoneNumberUtils::PhoneNumberUtils()
		: JObject(
			"android.telephony.PhoneNumberUtils",
			"()V"
		) {}
	
	// Methods
	inline void PhoneNumberUtils::addTtsSpan(JObject arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.telephony.PhoneNumberUtils",
			"addTtsSpan",
			"(Landroid/text/Spannable;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline jboolean PhoneNumberUtils::areSamePhoneNumber(JString arg0, JString arg1, JString arg2)
	{
		return callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"areSamePhoneNumber",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline JString PhoneNumberUtils::calledPartyBCDFragmentToString(JByteArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"calledPartyBCDFragmentToString",
			"([BII)Ljava/lang/String;",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline JString PhoneNumberUtils::calledPartyBCDFragmentToString(JByteArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"calledPartyBCDFragmentToString",
			"([BIII)Ljava/lang/String;",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline JString PhoneNumberUtils::calledPartyBCDToString(JByteArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"calledPartyBCDToString",
			"([BII)Ljava/lang/String;",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline JString PhoneNumberUtils::calledPartyBCDToString(JByteArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"calledPartyBCDToString",
			"([BIII)Ljava/lang/String;",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline jboolean PhoneNumberUtils::compare(JString arg0, JString arg1)
	{
		return callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"compare",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jboolean PhoneNumberUtils::compare(android::content::Context arg0, JString arg1, JString arg2)
	{
		return callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"compare",
			"(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline JString PhoneNumberUtils::convertKeypadLettersToDigits(JString arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"convertKeypadLettersToDigits",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline android::text::style::TtsSpan PhoneNumberUtils::createTtsSpan(JString arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"createTtsSpan",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan;",
			arg0.object<jstring>()
		);
	}
	inline JString PhoneNumberUtils::createTtsSpannable(JString arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"createTtsSpannable",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object<jstring>()
		);
	}
	inline JString PhoneNumberUtils::extractNetworkPortion(JString arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"extractNetworkPortion",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString PhoneNumberUtils::extractPostDialPortion(JString arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"extractPostDialPortion",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline void PhoneNumberUtils::formatJapaneseNumber(JObject arg0)
	{
		callStaticMethod<void>(
			"android.telephony.PhoneNumberUtils",
			"formatJapaneseNumber",
			"(Landroid/text/Editable;)V",
			arg0.object()
		);
	}
	inline void PhoneNumberUtils::formatNanpNumber(JObject arg0)
	{
		callStaticMethod<void>(
			"android.telephony.PhoneNumberUtils",
			"formatNanpNumber",
			"(Landroid/text/Editable;)V",
			arg0.object()
		);
	}
	inline JString PhoneNumberUtils::formatNumber(JString arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"formatNumber",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString PhoneNumberUtils::formatNumber(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"formatNumber",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString PhoneNumberUtils::formatNumber(JString arg0, JString arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"formatNumber",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline void PhoneNumberUtils::formatNumber(JObject arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.telephony.PhoneNumberUtils",
			"formatNumber",
			"(Landroid/text/Editable;I)V",
			arg0.object(),
			arg1
		);
	}
	inline JString PhoneNumberUtils::formatNumberToE164(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"formatNumberToE164",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString PhoneNumberUtils::formatNumberToRFC3966(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"formatNumberToRFC3966",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jint PhoneNumberUtils::getFormatTypeForLocale(java::util::Locale arg0)
	{
		return callStaticMethod<jint>(
			"android.telephony.PhoneNumberUtils",
			"getFormatTypeForLocale",
			"(Ljava/util/Locale;)I",
			arg0.object()
		);
	}
	inline JString PhoneNumberUtils::getNumberFromIntent(android::content::Intent arg0, android::content::Context arg1)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"getNumberFromIntent",
			"(Landroid/content/Intent;Landroid/content/Context;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JString PhoneNumberUtils::getStrippedReversed(JString arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"getStrippedReversed",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline jboolean PhoneNumberUtils::is12Key(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"is12Key",
			"(C)Z",
			arg0
		);
	}
	inline jboolean PhoneNumberUtils::isDialable(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isDialable",
			"(C)Z",
			arg0
		);
	}
	inline jboolean PhoneNumberUtils::isEmergencyNumber(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isEmergencyNumber",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean PhoneNumberUtils::isGlobalPhoneNumber(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isGlobalPhoneNumber",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean PhoneNumberUtils::isISODigit(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isISODigit",
			"(C)Z",
			arg0
		);
	}
	inline jboolean PhoneNumberUtils::isLocalEmergencyNumber(android::content::Context arg0, JString arg1)
	{
		return callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isLocalEmergencyNumber",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jboolean PhoneNumberUtils::isNonSeparator(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isNonSeparator",
			"(C)Z",
			arg0
		);
	}
	inline jboolean PhoneNumberUtils::isReallyDialable(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isReallyDialable",
			"(C)Z",
			arg0
		);
	}
	inline jboolean PhoneNumberUtils::isStartsPostDial(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isStartsPostDial",
			"(C)Z",
			arg0
		);
	}
	inline jboolean PhoneNumberUtils::isVoiceMailNumber(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isVoiceMailNumber",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean PhoneNumberUtils::isWellFormedSmsAddress(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isWellFormedSmsAddress",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline JByteArray PhoneNumberUtils::networkPortionToCalledPartyBCD(JString arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"networkPortionToCalledPartyBCD",
			"(Ljava/lang/String;)[B",
			arg0.object<jstring>()
		);
	}
	inline JByteArray PhoneNumberUtils::networkPortionToCalledPartyBCDWithLength(JString arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"networkPortionToCalledPartyBCDWithLength",
			"(Ljava/lang/String;)[B",
			arg0.object<jstring>()
		);
	}
	inline JString PhoneNumberUtils::normalizeNumber(JString arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"normalizeNumber",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JByteArray PhoneNumberUtils::numberToCalledPartyBCD(JString arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"numberToCalledPartyBCD",
			"(Ljava/lang/String;)[B",
			arg0.object<jstring>()
		);
	}
	inline JByteArray PhoneNumberUtils::numberToCalledPartyBCD(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"numberToCalledPartyBCD",
			"(Ljava/lang/String;I)[B",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JString PhoneNumberUtils::replaceUnicodeDigits(JString arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"replaceUnicodeDigits",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString PhoneNumberUtils::stringFromStringAndTOA(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"stringFromStringAndTOA",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JString PhoneNumberUtils::stripSeparators(JString arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"stripSeparators",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString PhoneNumberUtils::toCallerIDMinMatch(JString arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"toCallerIDMinMatch",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline jint PhoneNumberUtils::toaFromString(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.telephony.PhoneNumberUtils",
			"toaFromString",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
} // namespace android::telephony

// Base class headers

