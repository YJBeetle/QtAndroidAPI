#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::admin
{
	class SystemUpdateInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint SECURITY_PATCH_STATE_FALSE();
		static jint SECURITY_PATCH_STATE_TRUE();
		static jint SECURITY_PATCH_STATE_UNKNOWN();
		
		SystemUpdateInfo(QAndroidJniObject obj);
		// Constructors
		SystemUpdateInfo() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jlong getReceivedTime();
		jint getSecurityPatchState();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::admin

