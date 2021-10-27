#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telecom
{
	class Conferenceable : public __JniBaseClass
	{
	public:
		// Fields
		
		Conferenceable(QAndroidJniObject obj);
		// Constructors
		Conferenceable() = default;
		
		// Methods
	};
} // namespace android::telecom

