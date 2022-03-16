#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./Normalizer2_Mode.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::Normalizer2_Mode Normalizer2_Mode::COMPOSE()
	{
		return getStaticObjectField(
			"android.icu.text.Normalizer2$Mode",
			"COMPOSE",
			"Landroid/icu/text/Normalizer2$Mode;"
		);
	}
	android::icu::text::Normalizer2_Mode Normalizer2_Mode::COMPOSE_CONTIGUOUS()
	{
		return getStaticObjectField(
			"android.icu.text.Normalizer2$Mode",
			"COMPOSE_CONTIGUOUS",
			"Landroid/icu/text/Normalizer2$Mode;"
		);
	}
	android::icu::text::Normalizer2_Mode Normalizer2_Mode::DECOMPOSE()
	{
		return getStaticObjectField(
			"android.icu.text.Normalizer2$Mode",
			"DECOMPOSE",
			"Landroid/icu/text/Normalizer2$Mode;"
		);
	}
	android::icu::text::Normalizer2_Mode Normalizer2_Mode::FCD()
	{
		return getStaticObjectField(
			"android.icu.text.Normalizer2$Mode",
			"FCD",
			"Landroid/icu/text/Normalizer2$Mode;"
		);
	}
	
	// Constructors
	
	// Methods
	android::icu::text::Normalizer2_Mode Normalizer2_Mode::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.Normalizer2$Mode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/Normalizer2$Mode;",
			arg0.object<jstring>()
		);
	}
	JArray Normalizer2_Mode::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.Normalizer2$Mode",
			"values",
			"()[Landroid/icu/text/Normalizer2$Mode;"
		);
	}
} // namespace android::icu::text

