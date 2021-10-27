#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::os::strictmode
{
	class Violation : public __JniBaseClass
	{
	public:
		// Fields
		
		Violation(QAndroidJniObject obj);
		// Constructors
		Violation() = default;
		
		// Methods
	};
} // namespace android::os::strictmode

