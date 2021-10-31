#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::hardware
{
	class SensorPrivacyManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SensorPrivacyManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SensorPrivacyManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean supportsSensorToggle(jint arg0);
	};
} // namespace android::hardware

