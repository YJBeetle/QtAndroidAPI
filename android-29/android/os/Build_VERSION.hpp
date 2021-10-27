#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
{
	class Build_VERSION : public __JniBaseClass
	{
	public:
		// Fields
		static jstring BASE_OS();
		static jstring CODENAME();
		static jstring INCREMENTAL();
		static jint PREVIEW_SDK_INT();
		static jstring RELEASE();
		static jstring SDK();
		static jint SDK_INT();
		static jstring SECURITY_PATCH();
		
		Build_VERSION(QAndroidJniObject obj);
		// Constructors
		Build_VERSION();
		
		// Methods
	};
} // namespace android::os

