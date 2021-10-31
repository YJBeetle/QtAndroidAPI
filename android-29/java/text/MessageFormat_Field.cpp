#include "./MessageFormat_Field.hpp"

namespace java::text
{
	// Fields
	java::text::MessageFormat_Field MessageFormat_Field::ARGUMENT()
	{
		return getStaticObjectField(
			"java.text.MessageFormat$Field",
			"ARGUMENT",
			"Ljava/text/MessageFormat$Field;"
		);
	}
	
	// QAndroidJniObject forward
	MessageFormat_Field::MessageFormat_Field(QAndroidJniObject obj) : java::text::Format_Field(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::text

