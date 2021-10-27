#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class Telephony : public __JniBaseClass
	{
	public:
		// Fields
		
		Telephony(QAndroidJniObject obj);
		// Constructors
		Telephony() = default;
		
		// Methods
	};
} // namespace android::provider

