#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::hardware::camera2
{
	class CaptureResult_Key : public __JniBaseClass
	{
	public:
		// Fields
		
		CaptureResult_Key(QAndroidJniObject obj);
		// Constructors
		CaptureResult_Key(jstring arg0, jclass arg1);
		CaptureResult_Key() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getName();
		jint hashCode();
		jstring toString();
	};
} // namespace android::hardware::camera2

