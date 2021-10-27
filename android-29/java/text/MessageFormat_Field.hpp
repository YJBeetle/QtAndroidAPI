#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AttributedCharacterIterator_Attribute.hpp"
#include "./Format_Field.hpp"


namespace java::text
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
} // namespace java::text

