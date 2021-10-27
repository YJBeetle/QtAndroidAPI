#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}

namespace android::app::job
{
	class JobInfo_TriggerContentUri : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint FLAG_NOTIFY_FOR_DESCENDANTS();
		
		JobInfo_TriggerContentUri(QAndroidJniObject obj);
		// Constructors
		JobInfo_TriggerContentUri(android::net::Uri &arg0, jint &arg1);
		JobInfo_TriggerContentUri() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getFlags();
		QAndroidJniObject getUri();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::job

