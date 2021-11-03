#pragma once

#include "./AttributedCharacterIterator_Attribute.hpp"

class JString;

namespace java::text
{
	class Format_Field : public java::text::AttributedCharacterIterator_Attribute
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Format_Field(const char *className, const char *sig, Ts...agv) : java::text::AttributedCharacterIterator_Attribute(className, sig, std::forward<Ts>(agv)...) {}
		Format_Field(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::text

