#include "./UFormat.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	UFormat::UFormat(QJniObject obj) : java::text::Format(obj) {}
	
	// Constructors
	UFormat::UFormat()
		: java::text::Format(
			"android.icu.text.UFormat",
			"()V"
		) {}
	
	// Methods
} // namespace android::icu::text

