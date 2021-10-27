#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/text/AttributedCharacterIterator_Attribute.hpp"
#include "../../../java/text/Format_Field.hpp"


namespace android::icu::text
{
	class MessageFormat_Field : public java::text::Format_Field
	{
	public:
		// Fields
		static QAndroidJniObject ARGUMENT();
		
		MessageFormat_Field(QAndroidJniObject obj);
		// Constructors
		MessageFormat_Field() = default;
		
		// Methods
	};
} // namespace android::icu::text

