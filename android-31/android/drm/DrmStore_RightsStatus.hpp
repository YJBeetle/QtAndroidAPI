#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::drm
{
	class DrmStore_RightsStatus : public __JniBaseClass
	{
	public:
		// Fields
		static jint RIGHTS_EXPIRED();
		static jint RIGHTS_INVALID();
		static jint RIGHTS_NOT_ACQUIRED();
		static jint RIGHTS_VALID();
		
		// QJniObject forward
		template<typename ...Ts> explicit DrmStore_RightsStatus(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DrmStore_RightsStatus(QJniObject obj);
		
		// Constructors
		DrmStore_RightsStatus();
		
		// Methods
	};
} // namespace android::drm

