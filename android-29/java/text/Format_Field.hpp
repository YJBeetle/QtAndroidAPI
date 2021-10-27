#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AttributedCharacterIterator_Attribute.hpp"


namespace java::text
{
	class Format_Field : public java::text::AttributedCharacterIterator_Attribute
	{
	public:
		// Fields
		
		Format_Field(QAndroidJniObject obj);
		// Constructors
		Format_Field() = default;
		
		// Methods
	};
} // namespace java::text

