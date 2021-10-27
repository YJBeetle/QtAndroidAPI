#include "./NetworkStats_Bucket.hpp"

namespace android::app::usage
{
	// Fields
	jint NetworkStats_Bucket::DEFAULT_NETWORK_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"DEFAULT_NETWORK_ALL"
		);
	}
	jint NetworkStats_Bucket::DEFAULT_NETWORK_NO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"DEFAULT_NETWORK_NO"
		);
	}
	jint NetworkStats_Bucket::DEFAULT_NETWORK_YES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"DEFAULT_NETWORK_YES"
		);
	}
	jint NetworkStats_Bucket::METERED_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"METERED_ALL"
		);
	}
	jint NetworkStats_Bucket::METERED_NO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"METERED_NO"
		);
	}
	jint NetworkStats_Bucket::METERED_YES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"METERED_YES"
		);
	}
	jint NetworkStats_Bucket::ROAMING_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"ROAMING_ALL"
		);
	}
	jint NetworkStats_Bucket::ROAMING_NO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"ROAMING_NO"
		);
	}
	jint NetworkStats_Bucket::ROAMING_YES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"ROAMING_YES"
		);
	}
	jint NetworkStats_Bucket::STATE_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"STATE_ALL"
		);
	}
	jint NetworkStats_Bucket::STATE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"STATE_DEFAULT"
		);
	}
	jint NetworkStats_Bucket::STATE_FOREGROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"STATE_FOREGROUND"
		);
	}
	jint NetworkStats_Bucket::TAG_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"TAG_NONE"
		);
	}
	jint NetworkStats_Bucket::UID_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"UID_ALL"
		);
	}
	jint NetworkStats_Bucket::UID_REMOVED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"UID_REMOVED"
		);
	}
	jint NetworkStats_Bucket::UID_TETHERING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.NetworkStats$Bucket",
			"UID_TETHERING"
		);
	}
	
	NetworkStats_Bucket::NetworkStats_Bucket(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NetworkStats_Bucket::NetworkStats_Bucket()
	{
		__thiz = QAndroidJniObject(
			"android.app.usage.NetworkStats$Bucket",
			"()V"
		);
	}
	
	// Methods
	jint NetworkStats_Bucket::getDefaultNetworkStatus()
	{
		return __thiz.callMethod<jint>(
			"getDefaultNetworkStatus",
			"()I"
		);
	}
	jlong NetworkStats_Bucket::getEndTimeStamp()
	{
		return __thiz.callMethod<jlong>(
			"getEndTimeStamp",
			"()J"
		);
	}
	jint NetworkStats_Bucket::getMetered()
	{
		return __thiz.callMethod<jint>(
			"getMetered",
			"()I"
		);
	}
	jint NetworkStats_Bucket::getRoaming()
	{
		return __thiz.callMethod<jint>(
			"getRoaming",
			"()I"
		);
	}
	jlong NetworkStats_Bucket::getRxBytes()
	{
		return __thiz.callMethod<jlong>(
			"getRxBytes",
			"()J"
		);
	}
	jlong NetworkStats_Bucket::getRxPackets()
	{
		return __thiz.callMethod<jlong>(
			"getRxPackets",
			"()J"
		);
	}
	jlong NetworkStats_Bucket::getStartTimeStamp()
	{
		return __thiz.callMethod<jlong>(
			"getStartTimeStamp",
			"()J"
		);
	}
	jint NetworkStats_Bucket::getState()
	{
		return __thiz.callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jint NetworkStats_Bucket::getTag()
	{
		return __thiz.callMethod<jint>(
			"getTag",
			"()I"
		);
	}
	jlong NetworkStats_Bucket::getTxBytes()
	{
		return __thiz.callMethod<jlong>(
			"getTxBytes",
			"()J"
		);
	}
	jlong NetworkStats_Bucket::getTxPackets()
	{
		return __thiz.callMethod<jlong>(
			"getTxPackets",
			"()J"
		);
	}
	jint NetworkStats_Bucket::getUid()
	{
		return __thiz.callMethod<jint>(
			"getUid",
			"()I"
		);
	}
} // namespace android::app::usage

