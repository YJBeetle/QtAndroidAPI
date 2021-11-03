#include "./ULocale.hpp"
#include "./ULocale_Builder.hpp"

namespace android::icu::util
{
	// Fields
	
	// QJniObject forward
	ULocale_Builder::ULocale_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ULocale_Builder::ULocale_Builder()
		: JObject(
			"android.icu.util.ULocale$Builder",
			"()V"
		) {}
	
	// Methods
	android::icu::util::ULocale_Builder ULocale_Builder::addUnicodeLocaleAttribute(jstring arg0)
	{
		return callObjectMethod(
			"addUnicodeLocaleAttribute",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0
		);
	}
	android::icu::util::ULocale ULocale_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/icu/util/ULocale;"
		);
	}
	android::icu::util::ULocale_Builder ULocale_Builder::clear()
	{
		return callObjectMethod(
			"clear",
			"()Landroid/icu/util/ULocale$Builder;"
		);
	}
	android::icu::util::ULocale_Builder ULocale_Builder::clearExtensions()
	{
		return callObjectMethod(
			"clearExtensions",
			"()Landroid/icu/util/ULocale$Builder;"
		);
	}
	android::icu::util::ULocale_Builder ULocale_Builder::removeUnicodeLocaleAttribute(jstring arg0)
	{
		return callObjectMethod(
			"removeUnicodeLocaleAttribute",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0
		);
	}
	android::icu::util::ULocale_Builder ULocale_Builder::setExtension(jchar arg0, jstring arg1)
	{
		return callObjectMethod(
			"setExtension",
			"(CLjava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0,
			arg1
		);
	}
	android::icu::util::ULocale_Builder ULocale_Builder::setLanguage(jstring arg0)
	{
		return callObjectMethod(
			"setLanguage",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0
		);
	}
	android::icu::util::ULocale_Builder ULocale_Builder::setLanguageTag(jstring arg0)
	{
		return callObjectMethod(
			"setLanguageTag",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0
		);
	}
	android::icu::util::ULocale_Builder ULocale_Builder::setLocale(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"setLocale",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/ULocale$Builder;",
			arg0.object()
		);
	}
	android::icu::util::ULocale_Builder ULocale_Builder::setRegion(jstring arg0)
	{
		return callObjectMethod(
			"setRegion",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0
		);
	}
	android::icu::util::ULocale_Builder ULocale_Builder::setScript(jstring arg0)
	{
		return callObjectMethod(
			"setScript",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0
		);
	}
	android::icu::util::ULocale_Builder ULocale_Builder::setUnicodeLocaleKeyword(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"setUnicodeLocaleKeyword",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0,
			arg1
		);
	}
	android::icu::util::ULocale_Builder ULocale_Builder::setVariant(jstring arg0)
	{
		return callObjectMethod(
			"setVariant",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0
		);
	}
} // namespace android::icu::util

