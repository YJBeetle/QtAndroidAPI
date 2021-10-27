#include "./CollationKey_BoundMode.hpp"

namespace android::icu::text
{
	// Fields
	jint CollationKey_BoundMode::LOWER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.CollationKey$BoundMode",
			"LOWER"
		);
	}
	jint CollationKey_BoundMode::UPPER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.CollationKey$BoundMode",
			"UPPER"
		);
	}
	jint CollationKey_BoundMode::UPPER_LONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.CollationKey$BoundMode",
			"UPPER_LONG"
		);
	}
	
	CollationKey_BoundMode::CollationKey_BoundMode(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::icu::text

