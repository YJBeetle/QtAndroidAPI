#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::admin
{
	class SecurityLog_SecurityEvent : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		SecurityLog_SecurityEvent(QAndroidJniObject obj);
		// Constructors
		SecurityLog_SecurityEvent() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jobject getData();
		jlong getId();
		jint getLogLevel();
		jint getTag();
		jlong getTimeNanos();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::admin

