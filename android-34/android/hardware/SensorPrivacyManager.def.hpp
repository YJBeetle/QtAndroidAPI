#pragma once

#include "../../JObject.hpp"

namespace android::hardware
{
	class SensorPrivacyManager : public JObject
	{
	public:
		// Fields
		static jint TOGGLE_TYPE_HARDWARE();
		static jint TOGGLE_TYPE_SOFTWARE();
		
		// QJniObject forward
		template<typename ...Ts> explicit SensorPrivacyManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SensorPrivacyManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean supportsSensorToggle(jint arg0) const;
		jboolean supportsSensorToggle(jint arg0, jint arg1) const;
	};
} // namespace android::hardware

