#pragma once

#include "../../../JArray.hpp"
#include "./Transliterator_Position.def.hpp"
#include "./UnicodeFilter.def.hpp"
#include "./UnicodeSet.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./Transliterator.def.hpp"

namespace android::icu::text
{
	// Fields
	inline jint Transliterator::FORWARD()
	{
		return getStaticField<jint>(
			"android.icu.text.Transliterator",
			"FORWARD"
		);
	}
	inline jint Transliterator::REVERSE()
	{
		return getStaticField<jint>(
			"android.icu.text.Transliterator",
			"REVERSE"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::Transliterator Transliterator::createFromRules(JString arg0, JString arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"createFromRules",
			"(Ljava/lang/String;Ljava/lang/String;I)Landroid/icu/text/Transliterator;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline JObject Transliterator::getAvailableIDs()
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getAvailableIDs",
			"()Ljava/util/Enumeration;"
		);
	}
	inline JObject Transliterator::getAvailableSources()
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getAvailableSources",
			"()Ljava/util/Enumeration;"
		);
	}
	inline JObject Transliterator::getAvailableTargets(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getAvailableTargets",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0.object<jstring>()
		);
	}
	inline JObject Transliterator::getAvailableVariants(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getAvailableVariants",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString Transliterator::getDisplayName(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString Transliterator::getDisplayName(JString arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getDisplayName",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString Transliterator::getDisplayName(JString arg0, java::util::Locale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getDisplayName",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::icu::text::Transliterator Transliterator::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getInstance",
			"(Ljava/lang/String;)Landroid/icu/text/Transliterator;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::Transliterator Transliterator::getInstance(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getInstance",
			"(Ljava/lang/String;I)Landroid/icu/text/Transliterator;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void Transliterator::filteredTransliterate(JObject arg0, android::icu::text::Transliterator_Position arg1, jboolean arg2) const
	{
		callMethod<void>(
			"filteredTransliterate",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void Transliterator::finishTransliteration(JObject arg0, android::icu::text::Transliterator_Position arg1) const
	{
		callMethod<void>(
			"finishTransliteration",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline JArray Transliterator::getElements() const
	{
		return callObjectMethod(
			"getElements",
			"()[Landroid/icu/text/Transliterator;"
		);
	}
	inline android::icu::text::UnicodeFilter Transliterator::getFilter() const
	{
		return callObjectMethod(
			"getFilter",
			"()Landroid/icu/text/UnicodeFilter;"
		);
	}
	inline JString Transliterator::getID() const
	{
		return callObjectMethod(
			"getID",
			"()Ljava/lang/String;"
		);
	}
	inline android::icu::text::Transliterator Transliterator::getInverse() const
	{
		return callObjectMethod(
			"getInverse",
			"()Landroid/icu/text/Transliterator;"
		);
	}
	inline jint Transliterator::getMaximumContextLength() const
	{
		return callMethod<jint>(
			"getMaximumContextLength",
			"()I"
		);
	}
	inline android::icu::text::UnicodeSet Transliterator::getSourceSet() const
	{
		return callObjectMethod(
			"getSourceSet",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	inline android::icu::text::UnicodeSet Transliterator::getTargetSet() const
	{
		return callObjectMethod(
			"getTargetSet",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	inline void Transliterator::setFilter(android::icu::text::UnicodeFilter arg0) const
	{
		callMethod<void>(
			"setFilter",
			"(Landroid/icu/text/UnicodeFilter;)V",
			arg0.object()
		);
	}
	inline JString Transliterator::toRules(jboolean arg0) const
	{
		return callObjectMethod(
			"toRules",
			"(Z)Ljava/lang/String;",
			arg0
		);
	}
	inline jint Transliterator::transliterate(JObject arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;II)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline JString Transliterator::transliterate(JString arg0) const
	{
		return callObjectMethod(
			"transliterate",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline void Transliterator::transliterate(JObject arg0) const
	{
		callMethod<void>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;)V",
			arg0.object()
		);
	}
	inline void Transliterator::transliterate(JObject arg0, android::icu::text::Transliterator_Position arg1) const
	{
		callMethod<void>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Transliterator::transliterate(JObject arg0, android::icu::text::Transliterator_Position arg1, jint arg2) const
	{
		callMethod<void>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void Transliterator::transliterate(JObject arg0, android::icu::text::Transliterator_Position arg1, JString arg2) const
	{
		callMethod<void>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
} // namespace android::icu::text

// Base class headers

