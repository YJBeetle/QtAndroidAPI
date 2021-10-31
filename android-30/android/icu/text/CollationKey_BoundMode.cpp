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
	
	// QAndroidJniObject forward
	CollationKey_BoundMode::CollationKey_BoundMode(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::icu::text

