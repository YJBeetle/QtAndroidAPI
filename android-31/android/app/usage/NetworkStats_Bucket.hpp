#pragma once

#include "./NetworkStats_Bucket.def.hpp"

namespace android::app::usage
{
	// Fields
	inline jint NetworkStats_Bucket::DEFAULT_NETWORK_ALL()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"DEFAULT_NETWORK_ALL"
		);
	}
	inline jint NetworkStats_Bucket::DEFAULT_NETWORK_NO()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"DEFAULT_NETWORK_NO"
		);
	}
	inline jint NetworkStats_Bucket::DEFAULT_NETWORK_YES()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"DEFAULT_NETWORK_YES"
		);
	}
	inline jint NetworkStats_Bucket::METERED_ALL()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"METERED_ALL"
		);
	}
	inline jint NetworkStats_Bucket::METERED_NO()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"METERED_NO"
		);
	}
	inline jint NetworkStats_Bucket::METERED_YES()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"METERED_YES"
		);
	}
	inline jint NetworkStats_Bucket::ROAMING_ALL()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"ROAMING_ALL"
		);
	}
	inline jint NetworkStats_Bucket::ROAMING_NO()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"ROAMING_NO"
		);
	}
	inline jint NetworkStats_Bucket::ROAMING_YES()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"ROAMING_YES"
		);
	}
	inline jint NetworkStats_Bucket::STATE_ALL()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"STATE_ALL"
		);
	}
	inline jint NetworkStats_Bucket::STATE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"STATE_DEFAULT"
		);
	}
	inline jint NetworkStats_Bucket::STATE_FOREGROUND()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"STATE_FOREGROUND"
		);
	}
	inline jint NetworkStats_Bucket::TAG_NONE()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"TAG_NONE"
		);
	}
	inline jint NetworkStats_Bucket::UID_ALL()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"UID_ALL"
		);
	}
	inline jint NetworkStats_Bucket::UID_REMOVED()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"UID_REMOVED"
		);
	}
	inline jint NetworkStats_Bucket::UID_TETHERING()
	{
		return getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"UID_TETHERING"
		);
	}
	
	// Constructors
	inline NetworkStats_Bucket::NetworkStats_Bucket()
		: JObject(
			"android.app.usage.NetworkStats$Bucket",
			"()V"
		) {}
	
	// Methods
	inline jint NetworkStats_Bucket::getDefaultNetworkStatus() const
	{
		return callMethod<jint>(
			"getDefaultNetworkStatus",
			"()I"
		);
	}
	inline jlong NetworkStats_Bucket::getEndTimeStamp() const
	{
		return callMethod<jlong>(
			"getEndTimeStamp",
			"()J"
		);
	}
	inline jint NetworkStats_Bucket::getMetered() const
	{
		return callMethod<jint>(
			"getMetered",
			"()I"
		);
	}
	inline jint NetworkStats_Bucket::getRoaming() const
	{
		return callMethod<jint>(
			"getRoaming",
			"()I"
		);
	}
	inline jlong NetworkStats_Bucket::getRxBytes() const
	{
		return callMethod<jlong>(
			"getRxBytes",
			"()J"
		);
	}
	inline jlong NetworkStats_Bucket::getRxPackets() const
	{
		return callMethod<jlong>(
			"getRxPackets",
			"()J"
		);
	}
	inline jlong NetworkStats_Bucket::getStartTimeStamp() const
	{
		return callMethod<jlong>(
			"getStartTimeStamp",
			"()J"
		);
	}
	inline jint NetworkStats_Bucket::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline jint NetworkStats_Bucket::getTag() const
	{
		return callMethod<jint>(
			"getTag",
			"()I"
		);
	}
	inline jlong NetworkStats_Bucket::getTxBytes() const
	{
		return callMethod<jlong>(
			"getTxBytes",
			"()J"
		);
	}
	inline jlong NetworkStats_Bucket::getTxPackets() const
	{
		return callMethod<jlong>(
			"getTxPackets",
			"()J"
		);
	}
	inline jint NetworkStats_Bucket::getUid() const
	{
		return callMethod<jint>(
			"getUid",
			"()I"
		);
	}
} // namespace android::app::usage

// Base class headers

