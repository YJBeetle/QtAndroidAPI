#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/text/Format.hpp"


namespace android::icu::text
{
	class UFormat : public java::text::Format
	{
	public:
		// Fields
		
		UFormat(QAndroidJniObject obj);
		// Constructors
		UFormat();
		
		// Methods
	};
} // namespace android::icu::text

