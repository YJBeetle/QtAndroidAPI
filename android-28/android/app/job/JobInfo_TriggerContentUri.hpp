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
		static __JniBaseClass CREATOR();
		static jint FLAG_NOTIFY_FOR_DESCENDANTS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JobInfo_TriggerContentUri(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		JobInfo_TriggerContentUri(QAndroidJniObject obj);
		
		// Constructors
		JobInfo_TriggerContentUri(android::net::Uri arg0, jint arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getFlags();
		android::net::Uri getUri();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::job

