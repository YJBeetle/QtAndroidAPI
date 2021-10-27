#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::app
{
	class FragmentManagerNonConfig : public __JniBaseClass
	{
	public:
		// Fields
		
		FragmentManagerNonConfig(QAndroidJniObject obj);
		// Constructors
		FragmentManagerNonConfig() = default;
		
		// Methods
	};
} // namespace android::app

