#pragma once

#include "../../../JObject.hpp"


namespace android::hardware::camera2
{
	class CameraCharacteristics_Key : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CameraCharacteristics_Key(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CameraCharacteristics_Key(QAndroidJniObject obj);
		
		// Constructors
		CameraCharacteristics_Key(jstring arg0, jclass arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getName();
		jint hashCode();
		jstring toString();
	};
} // namespace android::hardware::camera2

