#pragma once

#include "../../JObject.hpp"


namespace android::drm
{
	class DrmStore_RightsStatus : public JObject
	{
	public:
		// Fields
		static jint RIGHTS_EXPIRED();
		static jint RIGHTS_INVALID();
		static jint RIGHTS_NOT_ACQUIRED();
		static jint RIGHTS_VALID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrmStore_RightsStatus(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmStore_RightsStatus(QAndroidJniObject obj);
		
		// Constructors
		DrmStore_RightsStatus();
		
		// Methods
	};
} // namespace android::drm

