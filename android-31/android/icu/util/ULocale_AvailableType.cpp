#include "./ULocale_AvailableType.hpp"

namespace android::icu::util
{
	// Fields
	android::icu::util::ULocale_AvailableType ULocale_AvailableType::DEFAULT()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale$AvailableType",
			"DEFAULT",
			"Landroid/icu/util/ULocale$AvailableType;"
		);
	}
	android::icu::util::ULocale_AvailableType ULocale_AvailableType::ONLY_LEGACY_ALIASES()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale$AvailableType",
			"ONLY_LEGACY_ALIASES",
			"Landroid/icu/util/ULocale$AvailableType;"
		);
	}
	android::icu::util::ULocale_AvailableType ULocale_AvailableType::WITH_LEGACY_ALIASES()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale$AvailableType",
			"WITH_LEGACY_ALIASES",
			"Landroid/icu/util/ULocale$AvailableType;"
		);
	}
	
	// QJniObject forward
	ULocale_AvailableType::ULocale_AvailableType(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::util::ULocale_AvailableType ULocale_AvailableType::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale$AvailableType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$AvailableType;",
			arg0
		);
	}
	jarray ULocale_AvailableType::values()
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale$AvailableType",
			"values",
			"()[Landroid/icu/util/ULocale$AvailableType;"
		).object<jarray>();
	}
} // namespace android::icu::util

