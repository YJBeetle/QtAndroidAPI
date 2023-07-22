#pragma once

#include "./IDNA_Info.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/lang/StringBuilder.def.hpp"
#include "./IDNA.def.hpp"

namespace android::icu::text
{
	// Fields
	inline jint IDNA::CHECK_BIDI()
	{
		return getStaticField<jint>(
			"android.icu.text.IDNA",
			"CHECK_BIDI"
		);
	}
	inline jint IDNA::CHECK_CONTEXTJ()
	{
		return getStaticField<jint>(
			"android.icu.text.IDNA",
			"CHECK_CONTEXTJ"
		);
	}
	inline jint IDNA::CHECK_CONTEXTO()
	{
		return getStaticField<jint>(
			"android.icu.text.IDNA",
			"CHECK_CONTEXTO"
		);
	}
	inline jint IDNA::DEFAULT()
	{
		return getStaticField<jint>(
			"android.icu.text.IDNA",
			"DEFAULT"
		);
	}
	inline jint IDNA::NONTRANSITIONAL_TO_ASCII()
	{
		return getStaticField<jint>(
			"android.icu.text.IDNA",
			"NONTRANSITIONAL_TO_ASCII"
		);
	}
	inline jint IDNA::NONTRANSITIONAL_TO_UNICODE()
	{
		return getStaticField<jint>(
			"android.icu.text.IDNA",
			"NONTRANSITIONAL_TO_UNICODE"
		);
	}
	inline jint IDNA::USE_STD3_RULES()
	{
		return getStaticField<jint>(
			"android.icu.text.IDNA",
			"USE_STD3_RULES"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::IDNA IDNA::getUTS46Instance(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.IDNA",
			"getUTS46Instance",
			"(I)Landroid/icu/text/IDNA;",
			arg0
		);
	}
	inline java::lang::StringBuilder IDNA::labelToASCII(JString arg0, java::lang::StringBuilder arg1, android::icu::text::IDNA_Info arg2) const
	{
		return callObjectMethod(
			"labelToASCII",
			"(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;Landroid/icu/text/IDNA$Info;)Ljava/lang/StringBuilder;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::lang::StringBuilder IDNA::labelToUnicode(JString arg0, java::lang::StringBuilder arg1, android::icu::text::IDNA_Info arg2) const
	{
		return callObjectMethod(
			"labelToUnicode",
			"(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;Landroid/icu/text/IDNA$Info;)Ljava/lang/StringBuilder;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::lang::StringBuilder IDNA::nameToASCII(JString arg0, java::lang::StringBuilder arg1, android::icu::text::IDNA_Info arg2) const
	{
		return callObjectMethod(
			"nameToASCII",
			"(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;Landroid/icu/text/IDNA$Info;)Ljava/lang/StringBuilder;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::lang::StringBuilder IDNA::nameToUnicode(JString arg0, java::lang::StringBuilder arg1, android::icu::text::IDNA_Info arg2) const
	{
		return callObjectMethod(
			"nameToUnicode",
			"(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;Landroid/icu/text/IDNA$Info;)Ljava/lang/StringBuilder;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::icu::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
