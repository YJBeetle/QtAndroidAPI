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
		static jstring NEARBY_DEVICES();
		static jstring PHONE();
		static jstring SENSORS();
		static jstring SMS();
		static jstring STORAGE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Manifest_permission_group(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Manifest_permission_group(QAndroidJniObject obj);
		
		// Constructors
		Manifest_permission_group();
		
		// Methods
	};
} // namespace android

