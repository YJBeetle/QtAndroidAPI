#pragma once

#include "../JObject.hpp"


namespace android
{
	class Manifest_permission_group : public JObject
	{
	public:
		// Fields
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Manifest_permission_group(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Manifest_permission_group(QAndroidJniObject obj);
		
		// Constructors
		Manifest_permission_group();
		
		// Methods
	};
} // namespace android

