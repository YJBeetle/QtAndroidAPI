#include "./UFormat.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	UFormat::UFormat(QAndroidJniObject obj) : java::text::Format(obj) {}
	
	// Constructors
	UFormat::UFormat()
		: java::text::Format(
			"android.icu.text.UFormat",
			"()V"
		) {}
	
	// Methods
} // namespace android::icu::text

