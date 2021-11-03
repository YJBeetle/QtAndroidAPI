#pragma once

#include "../../../JObject.hpp"
#include "../../../java/text/Format.hpp"


namespace android::icu::text
{
	class UFormat : public java::text::Format
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UFormat(const char *className, const char *sig, Ts...agv) : java::text::Format(className, sig, std::forward<Ts>(agv)...) {}
		UFormat(QJniObject obj);
		
		// Constructors
		UFormat();
		
		// Methods
	};
} // namespace android::icu::text

