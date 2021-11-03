#pragma once

#include "../../../JObject.hpp"

class JArray;
class JArray;
namespace android::app::job
{
	class JobWorkItem;
}
namespace android::content
{
	class ClipData;
}
namespace android::net
{
	class Network;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class PersistableBundle;
}

namespace android::app::job
{
	class JobParameters : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JobParameters(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JobParameters(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void completeWork(android::app::job::JobWorkItem arg0) const;
		android::app::job::JobWorkItem dequeueWork() const;
		jint describeContents() const;
		android::content::ClipData getClipData() const;
		jint getClipGrantFlags() const;
		android::os::PersistableBundle getExtras() const;
		jint getJobId() const;
		android::net::Network getNetwork() const;
		android::os::Bundle getTransientExtras() const;
		JArray getTriggeredContentAuthorities() const;
		JArray getTriggeredContentUris() const;
		jboolean isOverrideDeadlineExpired() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::job

