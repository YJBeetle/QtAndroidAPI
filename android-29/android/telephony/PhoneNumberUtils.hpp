#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::text::style
{
	class TtsSpan;
}
namespace java::util
{
	class Locale;
}

namespace android::telephony
{
	class PhoneNumberUtils : public JObject
	{
	public:
		// Fields
		static jint BCD_EXTENDED_TYPE_CALLED_PARTY();
		static jint BCD_EXTENDED_TYPE_EF_ADN();
		static jint FORMAT_JAPAN();
		static jint FORMAT_NANP();
		static jint FORMAT_UNKNOWN();
		static jchar PAUSE();
		static jint TOA_International();
		static jint TOA_Unknown();
		static jchar WAIT();
		static jchar WILD();
		
		// QJniObject forward
		template<typename ...Ts> explicit PhoneNumberUtils(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PhoneNumberUtils(QJniObject obj);
		
		// Constructors
		PhoneNumberUtils();
		
		// Methods
		static void addTtsSpan(JObject arg0, jint arg1, jint arg2);
		static jstring calledPartyBCDFragmentToString(jbyteArray arg0, jint arg1, jint arg2);
		static jstring calledPartyBCDFragmentToString(jbyteArray arg0, jint arg1, jint arg2, jint arg3);
		static jstring calledPartyBCDToString(jbyteArray arg0, jint arg1, jint arg2);
		static jstring calledPartyBCDToString(jbyteArray arg0, jint arg1, jint arg2, jint arg3);
		static jboolean compare(jstring arg0, jstring arg1);
		static jboolean compare(android::content::Context arg0, jstring arg1, jstring arg2);
		static jstring convertKeypadLettersToDigits(jstring arg0);
		static android::text::style::TtsSpan createTtsSpan(jstring arg0);
		static jstring createTtsSpannable(jstring arg0);
		static jstring extractNetworkPortion(jstring arg0);
		static jstring extractPostDialPortion(jstring arg0);
		static void formatJapaneseNumber(JObject arg0);
		static void formatNanpNumber(JObject arg0);
		static jstring formatNumber(jstring arg0);
		static jstring formatNumber(jstring arg0, jstring arg1);
		static jstring formatNumber(jstring arg0, jstring arg1, jstring arg2);
		static void formatNumber(JObject arg0, jint arg1);
		static jstring formatNumberToE164(jstring arg0, jstring arg1);
		static jstring formatNumberToRFC3966(jstring arg0, jstring arg1);
		static jint getFormatTypeForLocale(java::util::Locale arg0);
		static jstring getNumberFromIntent(android::content::Intent arg0, android::content::Context arg1);
		static jstring getStrippedReversed(jstring arg0);
		static jboolean is12Key(jchar arg0);
		static jboolean isDialable(jchar arg0);
		static jboolean isEmergencyNumber(jstring arg0);
		static jboolean isGlobalPhoneNumber(jstring arg0);
		static jboolean isISODigit(jchar arg0);
		static jboolean isLocalEmergencyNumber(android::content::Context arg0, jstring arg1);
		static jboolean isNonSeparator(jchar arg0);
		static jboolean isReallyDialable(jchar arg0);
		static jboolean isStartsPostDial(jchar arg0);
		static jboolean isVoiceMailNumber(jstring arg0);
		static jboolean isWellFormedSmsAddress(jstring arg0);
		static jbyteArray networkPortionToCalledPartyBCD(jstring arg0);
		static jbyteArray networkPortionToCalledPartyBCDWithLength(jstring arg0);
		static jstring normalizeNumber(jstring arg0);
		static jbyteArray numberToCalledPartyBCD(jstring arg0);
		static jbyteArray numberToCalledPartyBCD(jstring arg0, jint arg1);
		static jstring replaceUnicodeDigits(jstring arg0);
		static jstring stringFromStringAndTOA(jstring arg0, jint arg1);
		static jstring stripSeparators(jstring arg0);
		static jstring toCallerIDMinMatch(jstring arg0);
		static jint toaFromString(jstring arg0);
	};
} // namespace android::telephony

