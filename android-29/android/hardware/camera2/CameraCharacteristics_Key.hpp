#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::hardware::camera2
{
	class CameraCharacteristics_Key : public __JniBaseClass
	{
	public:
		// Fields
		
		CameraCharacteristics_Key(QAndroidJniObject obj);
		// Constructors
		CameraCharacteristics_Key(jstring arg0, jclass arg1);
		CameraCharacteristics_Key() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getName();
		jint hashCode();
		jstring toString();
	};
} // namespace android::hardware::camera2

