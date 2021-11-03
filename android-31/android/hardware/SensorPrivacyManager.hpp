#pragma once

#include "../../JObject.hpp"

namespace android::hardware
{
	class SensorPrivacyManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SensorPrivacyManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SensorPrivacyManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean supportsSensorToggle(jint arg0);
	};
} // namespace android::hardware

