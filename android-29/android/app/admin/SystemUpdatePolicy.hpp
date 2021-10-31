#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::admin
{
	class SystemUpdatePolicy : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint TYPE_INSTALL_AUTOMATIC();
		static jint TYPE_INSTALL_WINDOWED();
		static jint TYPE_POSTPONE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SystemUpdatePolicy(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SystemUpdatePolicy(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::app::admin::SystemUpdatePolicy createAutomaticInstallPolicy();
		static android::app::admin::SystemUpdatePolicy createPostponeInstallPolicy();
		static android::app::admin::SystemUpdatePolicy createWindowedInstallPolicy(jint arg0, jint arg1);
		jint describeContents();
		__JniBaseClass getFreezePeriods();
		jint getInstallWindowEnd();
		jint getInstallWindowStart();
		jint getPolicyType();
		android::app::admin::SystemUpdatePolicy setFreezePeriods(__JniBaseClass arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::admin

