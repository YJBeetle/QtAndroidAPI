#pragma once

#include "../../../JObject.hpp"
#include "../../../java/text/AttributedCharacterIterator_Attribute.hpp"
#include "../../../java/text/Format_Field.hpp"


namespace android::icu::text
{
	class MessageFormat_Field : public java::text::Format_Field
	{
	public:
		// Fields
		static android::icu::text::MessageFormat_Field ARGUMENT();
		
		// QJniObject forward
		template<typename ...Ts> explicit MessageFormat_Field(const char *className, const char *sig, Ts...agv) : java::text::Format_Field(className, sig, std::forward<Ts>(agv)...) {}
		MessageFormat_Field(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::icu::text

