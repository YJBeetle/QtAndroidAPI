#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::drm
{
	class DrmStore_DrmObjectType : public __JniBaseClass
	{
	public:
		// Fields
		static jint CONTENT();
		static jint RIGHTS_OBJECT();
		static jint TRIGGER_OBJECT();
		static jint UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrmStore_DrmObjectType(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DrmStore_DrmObjectType(QAndroidJniObject obj);
		
		// Constructors
		DrmStore_DrmObjectType();
		
		// Methods
	};
} // namespace android::drm

