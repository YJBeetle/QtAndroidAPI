#pragma once

#include "../JObject.hpp"

class JString;

namespace android
{
	class Manifest_permission_group : public JObject
	{
	public:
		// Fields
		static JString ACTIVITY_RECOGNITION();
		static JString CALENDAR();
		static JString CALL_LOG();
		static JString CAMERA();
		static JString CONTACTS();
		static JString LOCATION();
		static JString MICROPHONE();
		static JString NEARBY_DEVICES();
		static JString PHONE();
		static JString SENSORS();
		static JString SMS();
		static JString STORAGE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Manifest_permission_group(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Manifest_permission_group(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Manifest_permission_group();
		
		// Methods
	};
} // namespace android

