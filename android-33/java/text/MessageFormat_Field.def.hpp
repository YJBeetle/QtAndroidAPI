#pragma once

#include "./Format_Field.def.hpp"

class JObject;
class JString;

namespace java::text
{
	class MessageFormat_Field : public java::text::Format_Field
	{
	public:
		// Fields
		static java::text::MessageFormat_Field ARGUMENT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MessageFormat_Field(const char *className, const char *sig, Ts...agv) : java::text::Format_Field(className, sig, std::forward<Ts>(agv)...) {}
		MessageFormat_Field(QAndroidJniObject obj) : java::text::Format_Field(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace java::text

