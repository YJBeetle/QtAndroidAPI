#include "../../../JArray.hpp"
#include "./Transliterator_Position.hpp"
#include "./UnicodeFilter.hpp"
#include "./UnicodeSet.hpp"
#include "../util/ULocale.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.hpp"
#include "./Transliterator.hpp"

namespace android::icu::text
{
	// Fields
	jint Transliterator::FORWARD()
	{
		return getStaticField<jint>(
			"android.icu.text.Transliterator",
			"FORWARD"
		);
	}
	jint Transliterator::REVERSE()
	{
		return getStaticField<jint>(
			"android.icu.text.Transliterator",
			"REVERSE"
		);
	}
	
	// Constructors
	
	// Methods
	android::icu::text::Transliterator Transliterator::createFromRules(JString arg0, JString arg1, jint arg2)
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
	JObject Transliterator::getAvailableIDs()
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getAvailableIDs",
			"()Ljava/util/Enumeration;"
		);
	}
	JObject Transliterator::getAvailableSources()
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getAvailableSources",
			"()Ljava/util/Enumeration;"
		);
	}
	JObject Transliterator::getAvailableTargets(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getAvailableTargets",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0.object<jstring>()
		);
	}
	JObject Transliterator::getAvailableVariants(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getAvailableVariants",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString Transliterator::getDisplayName(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString Transliterator::getDisplayName(JString arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getDisplayName",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JString Transliterator::getDisplayName(JString arg0, java::util::Locale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getDisplayName",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::icu::text::Transliterator Transliterator::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getInstance",
			"(Ljava/lang/String;)Landroid/icu/text/Transliterator;",
			arg0.object<jstring>()
		);
	}
	android::icu::text::Transliterator Transliterator::getInstance(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getInstance",
			"(Ljava/lang/String;I)Landroid/icu/text/Transliterator;",
			arg0.object<jstring>(),
			arg1
		);
	}
	void Transliterator::filteredTransliterate(JObject arg0, android::icu::text::Transliterator_Position arg1, jboolean arg2) const
	{
		callMethod<void>(
			"filteredTransliterate",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void Transliterator::finishTransliteration(JObject arg0, android::icu::text::Transliterator_Position arg1) const
	{
		callMethod<void>(
			"finishTransliteration",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;)V",
			arg0.object(),
			arg1.object()
		);
	}
	JArray Transliterator::getElements() const
	{
		return callObjectMethod(
			"getElements",
			"()[Landroid/icu/text/Transliterator;"
		);
	}
	android::icu::text::UnicodeFilter Transliterator::getFilter() const
	{
		return callObjectMethod(
			"getFilter",
			"()Landroid/icu/text/UnicodeFilter;"
		);
	}
	JString Transliterator::getID() const
	{
		return callObjectMethod(
			"getID",
			"()Ljava/lang/String;"
		);
	}
	android::icu::text::Transliterator Transliterator::getInverse() const
	{
		return callObjectMethod(
			"getInverse",
			"()Landroid/icu/text/Transliterator;"
		);
	}
	jint Transliterator::getMaximumContextLength() const
	{
		return callMethod<jint>(
			"getMaximumContextLength",
			"()I"
		);
	}
	android::icu::text::UnicodeSet Transliterator::getSourceSet() const
	{
		return callObjectMethod(
			"getSourceSet",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	android::icu::text::UnicodeSet Transliterator::getTargetSet() const
	{
		return callObjectMethod(
			"getTargetSet",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	void Transliterator::setFilter(android::icu::text::UnicodeFilter arg0) const
	{
		callMethod<void>(
			"setFilter",
			"(Landroid/icu/text/UnicodeFilter;)V",
			arg0.object()
		);
	}
	JString Transliterator::toRules(jboolean arg0) const
	{
		return callObjectMethod(
			"toRules",
			"(Z)Ljava/lang/String;",
			arg0
		);
	}
	jint Transliterator::transliterate(JObject arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;II)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	JString Transliterator::transliterate(JString arg0) const
	{
		return callObjectMethod(
			"transliterate",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	void Transliterator::transliterate(JObject arg0) const
	{
		callMethod<void>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;)V",
			arg0.object()
		);
	}
	void Transliterator::transliterate(JObject arg0, android::icu::text::Transliterator_Position arg1) const
	{
		callMethod<void>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Transliterator::transliterate(JObject arg0, android::icu::text::Transliterator_Position arg1, jint arg2) const
	{
		callMethod<void>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void Transliterator::transliterate(JObject arg0, android::icu::text::Transliterator_Position arg1, JString arg2) const
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

