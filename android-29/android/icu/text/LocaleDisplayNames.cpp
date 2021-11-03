#include "../../../JArray.hpp"
#include "./DisplayContext.hpp"
#include "./DisplayContext_Type.hpp"
#include "./LocaleDisplayNames_DialectHandling.hpp"
#include "../util/ULocale.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.hpp"
#include "./LocaleDisplayNames.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	LocaleDisplayNames::LocaleDisplayNames(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::LocaleDisplayNames LocaleDisplayNames::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/LocaleDisplayNames;",
			arg0.object()
		);
	}
	android::icu::text::LocaleDisplayNames LocaleDisplayNames::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/LocaleDisplayNames;",
			arg0.object()
		);
	}
	android::icu::text::LocaleDisplayNames LocaleDisplayNames::getInstance(android::icu::util::ULocale arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames",
			"getInstance",
			"(Landroid/icu/util/ULocale;[Landroid/icu/text/DisplayContext;)Landroid/icu/text/LocaleDisplayNames;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	android::icu::text::LocaleDisplayNames LocaleDisplayNames::getInstance(android::icu::util::ULocale arg0, android::icu::text::LocaleDisplayNames_DialectHandling arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames",
			"getInstance",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/LocaleDisplayNames$DialectHandling;)Landroid/icu/text/LocaleDisplayNames;",
			arg0.object(),
			arg1.object()
		);
	}
	android::icu::text::LocaleDisplayNames LocaleDisplayNames::getInstance(java::util::Locale arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames",
			"getInstance",
			"(Ljava/util/Locale;[Landroid/icu/text/DisplayContext;)Landroid/icu/text/LocaleDisplayNames;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	android::icu::text::DisplayContext LocaleDisplayNames::getContext(android::icu::text::DisplayContext_Type arg0)
	{
		return callObjectMethod(
			"getContext",
			"(Landroid/icu/text/DisplayContext$Type;)Landroid/icu/text/DisplayContext;",
			arg0.object()
		);
	}
	android::icu::text::LocaleDisplayNames_DialectHandling LocaleDisplayNames::getDialectHandling()
	{
		return callObjectMethod(
			"getDialectHandling",
			"()Landroid/icu/text/LocaleDisplayNames$DialectHandling;"
		);
	}
	android::icu::util::ULocale LocaleDisplayNames::getLocale()
	{
		return callObjectMethod(
			"getLocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	JObject LocaleDisplayNames::getUiList(JObject arg0, jboolean arg1, JObject arg2)
	{
		return callObjectMethod(
			"getUiList",
			"(Ljava/util/Set;ZLjava/util/Comparator;)Ljava/util/List;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	JObject LocaleDisplayNames::getUiListCompareWholeItems(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"getUiListCompareWholeItems",
			"(Ljava/util/Set;Ljava/util/Comparator;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
	JString LocaleDisplayNames::keyDisplayName(JString arg0)
	{
		return callObjectMethod(
			"keyDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString LocaleDisplayNames::keyValueDisplayName(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"keyValueDisplayName",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString LocaleDisplayNames::languageDisplayName(JString arg0)
	{
		return callObjectMethod(
			"languageDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString LocaleDisplayNames::localeDisplayName(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"localeDisplayName",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString LocaleDisplayNames::localeDisplayName(JString arg0)
	{
		return callObjectMethod(
			"localeDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString LocaleDisplayNames::localeDisplayName(java::util::Locale arg0)
	{
		return callObjectMethod(
			"localeDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString LocaleDisplayNames::regionDisplayName(JString arg0)
	{
		return callObjectMethod(
			"regionDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString LocaleDisplayNames::scriptDisplayName(jint arg0)
	{
		return callObjectMethod(
			"scriptDisplayName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString LocaleDisplayNames::scriptDisplayName(JString arg0)
	{
		return callObjectMethod(
			"scriptDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString LocaleDisplayNames::variantDisplayName(JString arg0)
	{
		return callObjectMethod(
			"variantDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
} // namespace android::icu::text

