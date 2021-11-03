#pragma once

#include "../../../JObject.hpp"

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
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getBackoffPolicy();
		android::content::ClipData getClipData();
		jint getClipGrantFlags();
		jlong getEstimatedNetworkDownloadBytes();
		jlong getEstimatedNetworkUploadBytes();
		android::os::PersistableBundle getExtras();
		jlong getFlexMillis();
		jint getId();
		jlong getInitialBackoffMillis();
		jlong getIntervalMillis();
		jlong getMaxExecutionDelayMillis();
		jlong getMinLatencyMillis();
		jint getNetworkType();
		android::net::NetworkRequest getRequiredNetwork();
		android::content::ComponentName getService();
		android::os::Bundle getTransientExtras();
		jlong getTriggerContentMaxDelay();
		jlong getTriggerContentUpdateDelay();
		jarray getTriggerContentUris();
		jint hashCode();
		jboolean isImportantWhileForeground();
		jboolean isPeriodic();
		jboolean isPersisted();
		jboolean isPrefetch();
		jboolean isRequireBatteryNotLow();
		jboolean isRequireCharging();
		jboolean isRequireDeviceIdle();
		jboolean isRequireStorageNotLow();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::job

