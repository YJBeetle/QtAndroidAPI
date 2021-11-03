#include "./NetworkStats_Bucket.hpp"

namespace android::app::usage
{
	// Fields
	jint NetworkStats_Bucket::DEFAULT_NETWORK_ALL()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"DEFAULT_NETWORK_ALL"
		);
	}
	jint NetworkStats_Bucket::DEFAULT_NETWORK_NO()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"DEFAULT_NETWORK_NO"
		);
	}
	jint NetworkStats_Bucket::DEFAULT_NETWORK_YES()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"DEFAULT_NETWORK_YES"
		);
	}
	jint NetworkStats_Bucket::METERED_ALL()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"METERED_ALL"
		);
	}
	jint NetworkStats_Bucket::METERED_NO()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"METERED_NO"
		);
	}
	jint NetworkStats_Bucket::METERED_YES()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"METERED_YES"
		);
	}
	jint NetworkStats_Bucket::ROAMING_ALL()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"ROAMING_ALL"
		);
	}
	jint NetworkStats_Bucket::ROAMING_NO()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"ROAMING_NO"
		);
	}
	jint NetworkStats_Bucket::ROAMING_YES()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"ROAMING_YES"
		);
	}
	jint NetworkStats_Bucket::STATE_ALL()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"STATE_ALL"
		);
	}
	jint NetworkStats_Bucket::STATE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"STATE_DEFAULT"
		);
	}
	jint NetworkStats_Bucket::STATE_FOREGROUND()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"STATE_FOREGROUND"
		);
	}
	jint NetworkStats_Bucket::TAG_NONE()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"TAG_NONE"
		);
	}
	jint NetworkStats_Bucket::UID_ALL()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"UID_ALL"
		);
	}
	jint NetworkStats_Bucket::UID_REMOVED()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"UID_REMOVED"
		);
	}
	jint NetworkStats_Bucket::UID_TETHERING()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"UID_TETHERING"
		);
	}
	
	// QJniObject forward
	NetworkStats_Bucket::NetworkStats_Bucket(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	NetworkStats_Bucket::NetworkStats_Bucket()
		: JObject(
			"android.app.usage.NetworkStats$Bucket",
			"()V"
		) {}
	
	// Methods
	jint NetworkStats_Bucket::getDefaultNetworkStatus() const
	{
		return callMethod<jint>(
			"getDefaultNetworkStatus",
			"()I"
		);
	}
	jlong NetworkStats_Bucket::getEndTimeStamp() const
	{
		return callMethod<jlong>(
			"getEndTimeStamp",
			"()J"
		);
	}
	jint NetworkStats_Bucket::getMetered() const
	{
		return callMethod<jint>(
			"getMetered",
			"()I"
		);
	}
	jint NetworkStats_Bucket::getRoaming() const
	{
		return callMethod<jint>(
			"getRoaming",
			"()I"
		);
	}
	jlong NetworkStats_Bucket::getRxBytes() const
	{
		return callMethod<jlong>(
			"getRxBytes",
			"()J"
		);
	}
	jlong NetworkStats_Bucket::getRxPackets() const
	{
		return callMethod<jlong>(
			"getRxPackets",
			"()J"
		);
	}
	jlong NetworkStats_Bucket::getStartTimeStamp() const
	{
		return callMethod<jlong>(
			"getStartTimeStamp",
			"()J"
		);
	}
	jint NetworkStats_Bucket::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jint NetworkStats_Bucket::getTag() const
	{
		return callMethod<jint>(
			"getTag",
			"()I"
		);
	}
	jlong NetworkStats_Bucket::getTxBytes() const
	{
		return callMethod<jlong>(
			"getTxBytes",
			"()J"
		);
	}
	jlong NetworkStats_Bucket::getTxPackets() const
	{
		return callMethod<jlong>(
			"getTxPackets",
			"()J"
		);
	}
	jint NetworkStats_Bucket::getUid() const
	{
		return callMethod<jint>(
			"getUid",
			"()I"
		);
	}
} // namespace android::app::usage

