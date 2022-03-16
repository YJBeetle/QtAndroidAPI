#include "./CollationKey_BoundMode.hpp"

namespace android::icu::text
{
	// Fields
	jint CollationKey_BoundMode::LOWER()
	{
		return getStaticField<jint>(
			"android.icu.text.CollationKey$BoundMode",
			"LOWER"
		);
	}
	jint CollationKey_BoundMode::UPPER()
	{
		return getStaticField<jint>(
			"android.icu.text.CollationKey$BoundMode",
			"UPPER"
		);
	}
	jint CollationKey_BoundMode::UPPER_LONG()
	{
		return getStaticField<jint>(
			"android.icu.text.CollationKey$BoundMode",
			"UPPER_LONG"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::icu::text

