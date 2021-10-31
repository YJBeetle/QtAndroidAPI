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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MessageFormat_Field(const char *className, const char *sig, Ts...agv) : java::text::Format_Field(className, sig, std::forward<Ts>(agv)...) {}
		MessageFormat_Field(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::text

