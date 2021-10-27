#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::text::style
{
	class TtsSpan;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::telephony
{
	class PhoneNumberUtils : public __JniBaseClass
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
		
		// Constructors
		void __constructor();
		
		// Methods
		static void addTtsSpan(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2);
		static jstring calledPartyBCDFragmentToString(jbyteArray arg0, jint arg1, jint arg2);
		static jstring calledPartyBCDFragmentToString(jbyteArray arg0, jint arg1, jint arg2, jint arg3);
		static jstring calledPartyBCDToString(jbyteArray arg0, jint arg1, jint arg2);
		static jstring calledPartyBCDToString(jbyteArray arg0, jint arg1, jint arg2, jint arg3);
		static jboolean compare(jstring arg0, jstring arg1);
		static jboolean compare(const QString &arg0, const QString &arg1);
		static jboolean compare(__jni_impl::android::content::Context arg0, jstring arg1, jstring arg2);
		static jboolean compare(__jni_impl::android::content::Context arg0, const QString &arg1, const QString &arg2);
		static jstring convertKeypadLettersToDigits(jstring arg0);
		static jstring convertKeypadLettersToDigits(const QString &arg0);
		static QAndroidJniObject createTtsSpan(jstring arg0);
		static QAndroidJniObject createTtsSpan(const QString &arg0);
		static jstring createTtsSpannable(jstring arg0);
		static jstring createTtsSpannable(const QString &arg0);
		static jstring extractNetworkPortion(jstring arg0);
		static jstring extractNetworkPortion(const QString &arg0);
		static jstring extractPostDialPortion(jstring arg0);
		static jstring extractPostDialPortion(const QString &arg0);
		static void formatJapaneseNumber(__jni_impl::__JniBaseClass arg0);
		static void formatNanpNumber(__jni_impl::__JniBaseClass arg0);
		static jstring formatNumber(jstring arg0);
		static jstring formatNumber(const QString &arg0);
		static jstring formatNumber(jstring arg0, jstring arg1);
		static jstring formatNumber(const QString &arg0, const QString &arg1);
		static jstring formatNumber(jstring arg0, jstring arg1, jstring arg2);
		static jstring formatNumber(const QString &arg0, const QString &arg1, const QString &arg2);
		static void formatNumber(__jni_impl::__JniBaseClass arg0, jint arg1);
		static jstring formatNumberToE164(jstring arg0, jstring arg1);
		static jstring formatNumberToE164(const QString &arg0, const QString &arg1);
		static jstring formatNumberToRFC3966(jstring arg0, jstring arg1);
		static jstring formatNumberToRFC3966(const QString &arg0, const QString &arg1);
		static jint getFormatTypeForLocale(__jni_impl::java::util::Locale arg0);
		static jstring getNumberFromIntent(__jni_impl::android::content::Intent arg0, __jni_impl::android::content::Context arg1);
		static jstring getStrippedReversed(jstring arg0);
		static jstring getStrippedReversed(const QString &arg0);
		static jboolean is12Key(jchar arg0);
		static jboolean isDialable(jchar arg0);
		static jboolean isEmergencyNumber(jstring arg0);
		static jboolean isEmergencyNumber(const QString &arg0);
		static jboolean isGlobalPhoneNumber(jstring arg0);
		static jboolean isGlobalPhoneNumber(const QString &arg0);
		static jboolean isISODigit(jchar arg0);
		static jboolean isLocalEmergencyNumber(__jni_impl::android::content::Context arg0, jstring arg1);
		static jboolean isLocalEmergencyNumber(__jni_impl::android::content::Context arg0, const QString &arg1);
		static jboolean isNonSeparator(jchar arg0);
		static jboolean isReallyDialable(jchar arg0);
		static jboolean isStartsPostDial(jchar arg0);
		static jboolean isVoiceMailNumber(jstring arg0);
		static jboolean isVoiceMailNumber(const QString &arg0);
		static jboolean isWellFormedSmsAddress(jstring arg0);
		static jboolean isWellFormedSmsAddress(const QString &arg0);
		static jbyteArray networkPortionToCalledPartyBCD(jstring arg0);
		static jbyteArray networkPortionToCalledPartyBCD(const QString &arg0);
		static jbyteArray networkPortionToCalledPartyBCDWithLength(jstring arg0);
		static jbyteArray networkPortionToCalledPartyBCDWithLength(const QString &arg0);
		static jstring normalizeNumber(jstring arg0);
		static jstring normalizeNumber(const QString &arg0);
		static jbyteArray numberToCalledPartyBCD(jstring arg0);
		static jbyteArray numberToCalledPartyBCD(const QString &arg0);
		static jbyteArray numberToCalledPartyBCD(jstring arg0, jint arg1);
		static jbyteArray numberToCalledPartyBCD(const QString &arg0, jint arg1);
		static jstring replaceUnicodeDigits(jstring arg0);
		static jstring replaceUnicodeDigits(const QString &arg0);
		static jstring stringFromStringAndTOA(jstring arg0, jint arg1);
		static jstring stringFromStringAndTOA(const QString &arg0, jint arg1);
		static jstring stripSeparators(jstring arg0);
		static jstring stripSeparators(const QString &arg0);
		static jstring toCallerIDMinMatch(jstring arg0);
		static jstring toCallerIDMinMatch(const QString &arg0);
		static jint toaFromString(jstring arg0);
		static jint toaFromString(const QString &arg0);
	};
} // namespace __jni_impl::android::telephony

#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../text/style/TtsSpan.hpp"
#include "../../java/util/Locale.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	jint PhoneNumberUtils::BCD_EXTENDED_TYPE_CALLED_PARTY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneNumberUtils",
			"BCD_EXTENDED_TYPE_CALLED_PARTY"
		);
	}
	jint PhoneNumberUtils::BCD_EXTENDED_TYPE_EF_ADN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneNumberUtils",
			"BCD_EXTENDED_TYPE_EF_ADN"
		);
	}
	jint PhoneNumberUtils::FORMAT_JAPAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneNumberUtils",
			"FORMAT_JAPAN"
		);
	}
	jint PhoneNumberUtils::FORMAT_NANP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneNumberUtils",
			"FORMAT_NANP"
		);
	}
	jint PhoneNumberUtils::FORMAT_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneNumberUtils",
			"FORMAT_UNKNOWN"
		);
	}
	jchar PhoneNumberUtils::PAUSE()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"android.telephony.PhoneNumberUtils",
			"PAUSE"
		);
	}
	jint PhoneNumberUtils::TOA_International()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneNumberUtils",
			"TOA_International"
		);
	}
	jint PhoneNumberUtils::TOA_Unknown()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneNumberUtils",
			"TOA_Unknown"
		);
	}
	jchar PhoneNumberUtils::WAIT()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"android.telephony.PhoneNumberUtils",
			"WAIT"
		);
	}
	jchar PhoneNumberUtils::WILD()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"android.telephony.PhoneNumberUtils",
			"WILD"
		);
	}
	
	// Constructors
	void PhoneNumberUtils::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.PhoneNumberUtils",
			"()V"
		);
	}
	
	// Methods
	void PhoneNumberUtils::addTtsSpan(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.telephony.PhoneNumberUtils",
			"addTtsSpan",
			"(Landroid/text/Spannable;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jstring PhoneNumberUtils::calledPartyBCDFragmentToString(jbyteArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"calledPartyBCDFragmentToString",
			"([BII)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jstring PhoneNumberUtils::calledPartyBCDFragmentToString(jbyteArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"calledPartyBCDFragmentToString",
			"([BIII)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3
		).object<jstring>();
	}
	jstring PhoneNumberUtils::calledPartyBCDToString(jbyteArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"calledPartyBCDToString",
			"([BII)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jstring PhoneNumberUtils::calledPartyBCDToString(jbyteArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"calledPartyBCDToString",
			"([BIII)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3
		).object<jstring>();
	}
	jboolean PhoneNumberUtils::compare(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"compare",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	jboolean PhoneNumberUtils::compare(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"compare",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean PhoneNumberUtils::compare(__jni_impl::android::content::Context arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"compare",
			"(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean PhoneNumberUtils::compare(__jni_impl::android::content::Context arg0, const QString &arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"compare",
			"(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	jstring PhoneNumberUtils::convertKeypadLettersToDigits(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"convertKeypadLettersToDigits",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring PhoneNumberUtils::convertKeypadLettersToDigits(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"convertKeypadLettersToDigits",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject PhoneNumberUtils::createTtsSpan(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"createTtsSpan",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan;",
			arg0
		);
	}
	QAndroidJniObject PhoneNumberUtils::createTtsSpan(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"createTtsSpan",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring PhoneNumberUtils::createTtsSpannable(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"createTtsSpannable",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jstring PhoneNumberUtils::createTtsSpannable(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"createTtsSpannable",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring PhoneNumberUtils::extractNetworkPortion(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"extractNetworkPortion",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring PhoneNumberUtils::extractNetworkPortion(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"extractNetworkPortion",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring PhoneNumberUtils::extractPostDialPortion(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"extractPostDialPortion",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring PhoneNumberUtils::extractPostDialPortion(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"extractPostDialPortion",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	void PhoneNumberUtils::formatJapaneseNumber(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.telephony.PhoneNumberUtils",
			"formatJapaneseNumber",
			"(Landroid/text/Editable;)V",
			arg0.__jniObject().object()
		);
	}
	void PhoneNumberUtils::formatNanpNumber(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.telephony.PhoneNumberUtils",
			"formatNanpNumber",
			"(Landroid/text/Editable;)V",
			arg0.__jniObject().object()
		);
	}
	jstring PhoneNumberUtils::formatNumber(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"formatNumber",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring PhoneNumberUtils::formatNumber(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"formatNumber",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring PhoneNumberUtils::formatNumber(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"formatNumber",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring PhoneNumberUtils::formatNumber(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"formatNumber",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	jstring PhoneNumberUtils::formatNumber(jstring arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"formatNumber",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jstring PhoneNumberUtils::formatNumber(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"formatNumber",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		).object<jstring>();
	}
	void PhoneNumberUtils::formatNumber(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.telephony.PhoneNumberUtils",
			"formatNumber",
			"(Landroid/text/Editable;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring PhoneNumberUtils::formatNumberToE164(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"formatNumberToE164",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring PhoneNumberUtils::formatNumberToE164(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"formatNumberToE164",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	jstring PhoneNumberUtils::formatNumberToRFC3966(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"formatNumberToRFC3966",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring PhoneNumberUtils::formatNumberToRFC3966(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"formatNumberToRFC3966",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	jint PhoneNumberUtils::getFormatTypeForLocale(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.telephony.PhoneNumberUtils",
			"getFormatTypeForLocale",
			"(Ljava/util/Locale;)I",
			arg0.__jniObject().object()
		);
	}
	jstring PhoneNumberUtils::getNumberFromIntent(__jni_impl::android::content::Intent arg0, __jni_impl::android::content::Context arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"getNumberFromIntent",
			"(Landroid/content/Intent;Landroid/content/Context;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring PhoneNumberUtils::getStrippedReversed(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"getStrippedReversed",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring PhoneNumberUtils::getStrippedReversed(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"getStrippedReversed",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jboolean PhoneNumberUtils::is12Key(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"is12Key",
			"(C)Z",
			arg0
		);
	}
	jboolean PhoneNumberUtils::isDialable(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isDialable",
			"(C)Z",
			arg0
		);
	}
	jboolean PhoneNumberUtils::isEmergencyNumber(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isEmergencyNumber",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean PhoneNumberUtils::isEmergencyNumber(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isEmergencyNumber",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean PhoneNumberUtils::isGlobalPhoneNumber(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isGlobalPhoneNumber",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean PhoneNumberUtils::isGlobalPhoneNumber(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isGlobalPhoneNumber",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean PhoneNumberUtils::isISODigit(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isISODigit",
			"(C)Z",
			arg0
		);
	}
	jboolean PhoneNumberUtils::isLocalEmergencyNumber(__jni_impl::android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isLocalEmergencyNumber",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean PhoneNumberUtils::isLocalEmergencyNumber(__jni_impl::android::content::Context arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isLocalEmergencyNumber",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean PhoneNumberUtils::isNonSeparator(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isNonSeparator",
			"(C)Z",
			arg0
		);
	}
	jboolean PhoneNumberUtils::isReallyDialable(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isReallyDialable",
			"(C)Z",
			arg0
		);
	}
	jboolean PhoneNumberUtils::isStartsPostDial(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isStartsPostDial",
			"(C)Z",
			arg0
		);
	}
	jboolean PhoneNumberUtils::isVoiceMailNumber(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isVoiceMailNumber",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean PhoneNumberUtils::isVoiceMailNumber(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isVoiceMailNumber",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean PhoneNumberUtils::isWellFormedSmsAddress(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isWellFormedSmsAddress",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean PhoneNumberUtils::isWellFormedSmsAddress(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telephony.PhoneNumberUtils",
			"isWellFormedSmsAddress",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jbyteArray PhoneNumberUtils::networkPortionToCalledPartyBCD(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"networkPortionToCalledPartyBCD",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	jbyteArray PhoneNumberUtils::networkPortionToCalledPartyBCD(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"networkPortionToCalledPartyBCD",
			"(Ljava/lang/String;)[B",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jbyteArray>();
	}
	jbyteArray PhoneNumberUtils::networkPortionToCalledPartyBCDWithLength(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"networkPortionToCalledPartyBCDWithLength",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	jbyteArray PhoneNumberUtils::networkPortionToCalledPartyBCDWithLength(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"networkPortionToCalledPartyBCDWithLength",
			"(Ljava/lang/String;)[B",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jbyteArray>();
	}
	jstring PhoneNumberUtils::normalizeNumber(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"normalizeNumber",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring PhoneNumberUtils::normalizeNumber(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"normalizeNumber",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jbyteArray PhoneNumberUtils::numberToCalledPartyBCD(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"numberToCalledPartyBCD",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	jbyteArray PhoneNumberUtils::numberToCalledPartyBCD(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"numberToCalledPartyBCD",
			"(Ljava/lang/String;)[B",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jbyteArray>();
	}
	jbyteArray PhoneNumberUtils::numberToCalledPartyBCD(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"numberToCalledPartyBCD",
			"(Ljava/lang/String;I)[B",
			arg0,
			arg1
		).object<jbyteArray>();
	}
	jbyteArray PhoneNumberUtils::numberToCalledPartyBCD(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"numberToCalledPartyBCD",
			"(Ljava/lang/String;I)[B",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		).object<jbyteArray>();
	}
	jstring PhoneNumberUtils::replaceUnicodeDigits(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"replaceUnicodeDigits",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring PhoneNumberUtils::replaceUnicodeDigits(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"replaceUnicodeDigits",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring PhoneNumberUtils::stringFromStringAndTOA(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"stringFromStringAndTOA",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring PhoneNumberUtils::stringFromStringAndTOA(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"stringFromStringAndTOA",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		).object<jstring>();
	}
	jstring PhoneNumberUtils::stripSeparators(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"stripSeparators",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring PhoneNumberUtils::stripSeparators(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"stripSeparators",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring PhoneNumberUtils::toCallerIDMinMatch(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"toCallerIDMinMatch",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring PhoneNumberUtils::toCallerIDMinMatch(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.PhoneNumberUtils",
			"toCallerIDMinMatch",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jint PhoneNumberUtils::toaFromString(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.telephony.PhoneNumberUtils",
			"toaFromString",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint PhoneNumberUtils::toaFromString(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.telephony.PhoneNumberUtils",
			"toaFromString",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class PhoneNumberUtils : public __jni_impl::android::telephony::PhoneNumberUtils
	{
	public:
		PhoneNumberUtils(QAndroidJniObject obj) { __thiz = obj; }
		PhoneNumberUtils()
		{
			__constructor();
		}
	};
} // namespace android::telephony

