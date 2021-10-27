#pragma once

#include "../__JniBaseClass.hpp"


namespace android
{
	class Manifest_permission_group : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTIVITY_RECOGNITION();
		static jstring CALENDAR();
		static jstring CALL_LOG();
		static jstring CAMERA();
		static jstring CONTACTS();
		static jstring LOCATION();
		static jstring MICROPHONE();
		static jstring PHONE();
		static jstring SENSORS();
		static jstring SMS();
		static jstring STORAGE();
		
		Manifest_permission_group(QAndroidJniObject obj);
		// Constructors
		Manifest_permission_group();
		
		// Methods
	};
} // namespace android

