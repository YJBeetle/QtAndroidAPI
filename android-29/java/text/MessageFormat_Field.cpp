#include "./MessageFormat_Field.hpp"

namespace java::text
{
	// Fields
	QAndroidJniObject MessageFormat_Field::ARGUMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.MessageFormat$Field",
			"ARGUMENT",
			"Ljava/text/MessageFormat$Field;"
		);
	}
	
	MessageFormat_Field::MessageFormat_Field(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace java::text

