#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
class JObject;

namespace android::app::job
{
	class JobInfo_TriggerContentUri : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_NOTIFY_FOR_DESCENDANTS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JobInfo_TriggerContentUri(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JobInfo_TriggerContentUri(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		JobInfo_TriggerContentUri(android::net::Uri arg0, jint arg1);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getFlags() const;
		android::net::Uri getUri() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::job

