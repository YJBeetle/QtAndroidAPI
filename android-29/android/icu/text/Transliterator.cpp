#include "./Transliterator_Position.hpp"
#include "./UnicodeFilter.hpp"
#include "./UnicodeSet.hpp"
#include "../util/ULocale.hpp"
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
	
	// QAndroidJniObject forward
	Transliterator::Transliterator(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::Transliterator Transliterator::createFromRules(jstring arg0, jstring arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"createFromRules",
			"(Ljava/lang/String;Ljava/lang/String;I)Landroid/icu/text/Transliterator;",
			arg0,
			arg1,
			arg2
		);
	}
	__JniBaseClass Transliterator::getAvailableIDs()
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getAvailableIDs",
			"()Ljava/util/Enumeration;"
		);
	}
	__JniBaseClass Transliterator::getAvailableSources()
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getAvailableSources",
			"()Ljava/util/Enumeration;"
		);
	}
	__JniBaseClass Transliterator::getAvailableTargets(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getAvailableTargets",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0
		);
	}
	__JniBaseClass Transliterator::getAvailableVariants(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getAvailableVariants",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0,
			arg1
		);
	}
	jstring Transliterator::getDisplayName(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Transliterator::getDisplayName(jstring arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getDisplayName",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	jstring Transliterator::getDisplayName(jstring arg0, java::util::Locale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getDisplayName",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	android::icu::text::Transliterator Transliterator::getInstance(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getInstance",
			"(Ljava/lang/String;)Landroid/icu/text/Transliterator;",
			arg0
		);
	}
	android::icu::text::Transliterator Transliterator::getInstance(jstring arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getInstance",
			"(Ljava/lang/String;I)Landroid/icu/text/Transliterator;",
			arg0,
			arg1
		);
	}
	void Transliterator::filteredTransliterate(__JniBaseClass arg0, android::icu::text::Transliterator_Position arg1, jboolean arg2)
	{
		callMethod<void>(
			"filteredTransliterate",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void Transliterator::finishTransliteration(__JniBaseClass arg0, android::icu::text::Transliterator_Position arg1)
	{
		callMethod<void>(
			"finishTransliteration",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jarray Transliterator::getElements()
	{
		return callObjectMethod(
			"getElements",
			"()[Landroid/icu/text/Transliterator;"
		).object<jarray>();
	}
	android::icu::text::UnicodeFilter Transliterator::getFilter()
	{
		return callObjectMethod(
			"getFilter",
			"()Landroid/icu/text/UnicodeFilter;"
		);
	}
	jstring Transliterator::getID()
	{
		return callObjectMethod(
			"getID",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::icu::text::Transliterator Transliterator::getInverse()
	{
		return callObjectMethod(
			"getInverse",
			"()Landroid/icu/text/Transliterator;"
		);
	}
	jint Transliterator::getMaximumContextLength()
	{
		return callMethod<jint>(
			"getMaximumContextLength",
			"()I"
		);
	}
	android::icu::text::UnicodeSet Transliterator::getSourceSet()
	{
		return callObjectMethod(
			"getSourceSet",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	android::icu::text::UnicodeSet Transliterator::getTargetSet()
	{
		return callObjectMethod(
			"getTargetSet",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	void Transliterator::setFilter(android::icu::text::UnicodeFilter arg0)
	{
		callMethod<void>(
			"setFilter",
			"(Landroid/icu/text/UnicodeFilter;)V",
			arg0.object()
		);
	}
	jstring Transliterator::toRules(jboolean arg0)
	{
		return callObjectMethod(
			"toRules",
			"(Z)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint Transliterator::transliterate(__JniBaseClass arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;II)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jstring Transliterator::transliterate(jstring arg0)
	{
		return callObjectMethod(
			"transliterate",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void Transliterator::transliterate(__JniBaseClass arg0)
	{
		callMethod<void>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;)V",
			arg0.object()
		);
	}
	void Transliterator::transliterate(__JniBaseClass arg0, android::icu::text::Transliterator_Position arg1)
	{
		callMethod<void>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Transliterator::transliterate(__JniBaseClass arg0, android::icu::text::Transliterator_Position arg1, jint arg2)
	{
		callMethod<void>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void Transliterator::transliterate(__JniBaseClass arg0, android::icu::text::Transliterator_Position arg1, jstring arg2)
	{
		callMethod<void>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
} // namespace android::icu::text

