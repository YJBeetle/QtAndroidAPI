#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::drm
{
	class DrmInfoRequest : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACCOUNT_ID();
		static jstring SUBSCRIPTION_ID();
		static jint TYPE_REGISTRATION_INFO();
		static jint TYPE_RIGHTS_ACQUISITION_INFO();
		static jint TYPE_RIGHTS_ACQUISITION_PROGRESS_INFO();
		static jint TYPE_UNREGISTRATION_INFO();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrmInfoRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DrmInfoRequest(QAndroidJniObject obj);
		
		// Constructors
		DrmInfoRequest(jint arg0, jstring arg1);
		
		// Methods
		jobject get(jstring arg0);
		jint getInfoType();
		jstring getMimeType();
		QAndroidJniObject iterator();
		QAndroidJniObject keyIterator();
		void put(jstring arg0, jobject arg1);
	};
} // namespace android::drm

