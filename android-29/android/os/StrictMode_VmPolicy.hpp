#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::util
{
	class HashMap;
}

namespace android::os
{
	class StrictMode_VmPolicy : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject LAX();
		
		StrictMode_VmPolicy(QAndroidJniObject obj);
		// Constructors
		StrictMode_VmPolicy() = default;
		
		// Methods
		jstring toString();
	};
} // namespace android::os

