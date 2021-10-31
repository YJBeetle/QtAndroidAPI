#include "./MessageFormat_Field.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject MessageFormat_Field::ARGUMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessageFormat$Field",
			"ARGUMENT",
			"Landroid/icu/text/MessageFormat$Field;"
		);
	}
	
	// QAndroidJniObject forward
	MessageFormat_Field::MessageFormat_Field(QAndroidJniObject obj) : java::text::Format_Field(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::icu::text

