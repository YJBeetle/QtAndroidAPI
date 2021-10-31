#include "./MessageFormat_Field.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::MessageFormat_Field MessageFormat_Field::ARGUMENT()
	{
		return getStaticObjectField(
			"android.icu.text.MessageFormat$Field",
			"ARGUMENT",
			"Landroid/icu/text/MessageFormat$Field;"
		);
	}
	
	// QJniObject forward
	MessageFormat_Field::MessageFormat_Field(QJniObject obj) : java::text::Format_Field(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::icu::text

