#include "./UFormat.hpp"

namespace android::icu::text
{
	// Fields
	
	UFormat::UFormat(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UFormat::UFormat()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UFormat",
			"()V"
		);
	}
	
	// Methods
} // namespace android::icu::text

