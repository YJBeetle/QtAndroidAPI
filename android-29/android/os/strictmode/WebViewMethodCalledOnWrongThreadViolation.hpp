#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"


namespace android::os::strictmode
{
	class WebViewMethodCalledOnWrongThreadViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		WebViewMethodCalledOnWrongThreadViolation(QAndroidJniObject obj);
		// Constructors
		WebViewMethodCalledOnWrongThreadViolation() = default;
		
		// Methods
	};
} // namespace android::os::strictmode

