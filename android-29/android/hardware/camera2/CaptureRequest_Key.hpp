#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::hardware::camera2
{
	class CaptureRequest_Key : public __JniBaseClass
	{
	public:
		// Fields
		
		CaptureRequest_Key(QAndroidJniObject obj);
		// Constructors
		CaptureRequest_Key(jstring &arg0, jclass &arg1);
		CaptureRequest_Key(const QString &arg0, jclass &arg1);
		CaptureRequest_Key() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getName();
		jint hashCode();
		jstring toString();
	};
} // namespace android::hardware::camera2

