#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace android::hardware::camera2::params
{
	class InputConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		
		InputConfiguration(QAndroidJniObject obj);
		// Constructors
		InputConfiguration(jint &arg0, jint &arg1, jint &arg2);
		InputConfiguration() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jint getFormat();
		jint getHeight();
		jint getWidth();
		jint hashCode();
		jstring toString();
	};
} // namespace android::hardware::camera2::params

