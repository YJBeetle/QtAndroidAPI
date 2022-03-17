#pragma once

#include "../../JObject.hpp"

class JByteArray;
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
class JString;
class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PhoneNumberUtils(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PhoneNumberUtils(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		PhoneNumberUtils();
		
		// Methods
		static void addTtsSpan(JObject arg0, jint arg1, jint arg2);
		static JString calledPartyBCDFragmentToString(JByteArray arg0, jint arg1, jint arg2);
		static JString calledPartyBCDFragmentToString(JByteArray arg0, jint arg1, jint arg2, jint arg3);
		static JString calledPartyBCDToString(JByteArray arg0, jint arg1, jint arg2);
		static JString calledPartyBCDToString(JByteArray arg0, jint arg1, jint arg2, jint arg3);
		static jboolean compare(JString arg0, JString arg1);
		static jboolean compare(android::content::Context arg0, JString arg1, JString arg2);
		static JString convertKeypadLettersToDigits(JString arg0);
		static android::text::style::TtsSpan createTtsSpan(JString arg0);
		static JString createTtsSpannable(JString arg0);
		static JString extractNetworkPortion(JString arg0);
		static JString extractPostDialPortion(JString arg0);
		static void formatJapaneseNumber(JObject arg0);
		static void formatNanpNumber(JObject arg0);
		static JString formatNumber(JString arg0);
		static JString formatNumber(JString arg0, JString arg1);
		static JString formatNumber(JString arg0, JString arg1, JString arg2);
		static void formatNumber(JObject arg0, jint arg1);
		static JString formatNumberToE164(JString arg0, JString arg1);
		static JString formatNumberToRFC3966(JString arg0, JString arg1);
		static jint getFormatTypeForLocale(java::util::Locale arg0);
		static JString getNumberFromIntent(android::content::Intent arg0, android::content::Context arg1);
		static JString getStrippedReversed(JString arg0);
		static jboolean is12Key(jchar arg0);
		static jboolean isDialable(jchar arg0);
		static jboolean isEmergencyNumber(JString arg0);
		static jboolean isGlobalPhoneNumber(JString arg0);
		static jboolean isISODigit(jchar arg0);
		static jboolean isLocalEmergencyNumber(android::content::Context arg0, JString arg1);
		static jboolean isNonSeparator(jchar arg0);
		static jboolean isReallyDialable(jchar arg0);
		static jboolean isStartsPostDial(jchar arg0);
		static jboolean isVoiceMailNumber(JString arg0);
		static jboolean isWellFormedSmsAddress(JString arg0);
		static JByteArray networkPortionToCalledPartyBCD(JString arg0);
		static JByteArray networkPortionToCalledPartyBCDWithLength(JString arg0);
		static JString normalizeNumber(JString arg0);
		static JByteArray numberToCalledPartyBCD(JString arg0);
		static JByteArray numberToCalledPartyBCD(JString arg0, jint arg1);
		static JString replaceUnicodeDigits(JString arg0);
		static JString stringFromStringAndTOA(JString arg0, jint arg1);
		static JString stripSeparators(JString arg0);
		static JString toCallerIDMinMatch(JString arg0);
		static jint toaFromString(JString arg0);
	};
} // namespace android::telephony

