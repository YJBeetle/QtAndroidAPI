#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class Config : public __JniBaseClass
	{
	public:
		// Fields
		static jboolean DEBUG();
		static jboolean LOGD();
		static jboolean LOGV();
		static jboolean PROFILE();
		static jboolean RELEASE();
		
		Config(QAndroidJniObject obj);
		// Constructors
		Config() = default;
		
		// Methods
	};
} // namespace android::util

