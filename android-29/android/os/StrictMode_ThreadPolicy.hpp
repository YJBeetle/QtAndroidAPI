#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
{
	class StrictMode_ThreadPolicy : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject LAX();
		
		StrictMode_ThreadPolicy(QAndroidJniObject obj);
		// Constructors
		StrictMode_ThreadPolicy() = default;
		
		// Methods
		jstring toString();
	};
} // namespace android::os

