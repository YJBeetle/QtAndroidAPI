#pragma once

#include "../../../java/text/Format.def.hpp"

namespace android::icu::text
{
	class UFormat : public java::text::Format
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UFormat(const char *className, const char *sig, Ts...agv) : java::text::Format(className, sig, std::forward<Ts>(agv)...) {}
		UFormat(QAndroidJniObject obj) : java::text::Format(obj) {}
		
		// Constructors
		UFormat();
		
		// Methods
	};
} // namespace android::icu::text

