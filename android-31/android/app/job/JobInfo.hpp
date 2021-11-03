#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::content
{
	class ClipData;
}
namespace android::content
{
	class ComponentName;
}
namespace android::net
{
	class NetworkRequest;
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
class JObject;
class JString;

namespace android::app::job
{
	class JobInfo : public JObject
	{
	public:
		// Fields
		static jint BACKOFF_POLICY_EXPONENTIAL();
		static jint BACKOFF_POLICY_LINEAR();
		static JObject CREATOR();
		static jlong DEFAULT_INITIAL_BACKOFF_MILLIS();
		static jlong MAX_BACKOFF_DELAY_MILLIS();
		static jint NETWORK_BYTES_UNKNOWN();
		static jint NETWORK_TYPE_ANY();
		static jint NETWORK_TYPE_CELLULAR();
		static jint NETWORK_TYPE_METERED();
		static jint NETWORK_TYPE_NONE();
		static jint NETWORK_TYPE_NOT_ROAMING();
		static jint NETWORK_TYPE_UNMETERED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JobInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JobInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jlong getMinFlexMillis();
		static jlong getMinPeriodMillis();
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getBackoffPolicy() const;
		android::content::ClipData getClipData() const;
		jint getClipGrantFlags() const;
		jlong getEstimatedNetworkDownloadBytes() const;
		jlong getEstimatedNetworkUploadBytes() const;
		android::os::PersistableBundle getExtras() const;
		jlong getFlexMillis() const;
		jint getId() const;
		jlong getInitialBackoffMillis() const;
		jlong getIntervalMillis() const;
		jlong getMaxExecutionDelayMillis() const;
		jlong getMinLatencyMillis() const;
		jint getNetworkType() const;
		android::net::NetworkRequest getRequiredNetwork() const;
		android::content::ComponentName getService() const;
		android::os::Bundle getTransientExtras() const;
		jlong getTriggerContentMaxDelay() const;
		jlong getTriggerContentUpdateDelay() const;
		JArray getTriggerContentUris() const;
		jint hashCode() const;
		jboolean isExpedited() const;
		jboolean isImportantWhileForeground() const;
		jboolean isPeriodic() const;
		jboolean isPersisted() const;
		jboolean isPrefetch() const;
		jboolean isRequireBatteryNotLow() const;
		jboolean isRequireCharging() const;
		jboolean isRequireDeviceIdle() const;
		jboolean isRequireStorageNotLow() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::job

