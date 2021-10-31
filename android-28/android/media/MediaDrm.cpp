#include "./MediaDrm_CryptoSession.hpp"
#include "./MediaDrm_KeyRequest.hpp"
#include "./MediaDrm_ProvisionRequest.hpp"
#include "../os/Handler.hpp"
#include "../os/PersistableBundle.hpp"
#include "../../java/util/HashMap.hpp"
#include "../../java/util/UUID.hpp"
#include "./MediaDrm.hpp"

namespace android::media
{
	// Fields
	jint MediaDrm::EVENT_KEY_EXPIRED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"EVENT_KEY_EXPIRED"
		);
	}
	jint MediaDrm::EVENT_KEY_REQUIRED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"EVENT_KEY_REQUIRED"
		);
	}
	jint MediaDrm::EVENT_PROVISION_REQUIRED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"EVENT_PROVISION_REQUIRED"
		);
	}
	jint MediaDrm::EVENT_SESSION_RECLAIMED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"EVENT_SESSION_RECLAIMED"
		);
	}
	jint MediaDrm::EVENT_VENDOR_DEFINED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"EVENT_VENDOR_DEFINED"
		);
	}
	jint MediaDrm::HDCP_LEVEL_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_LEVEL_UNKNOWN"
		);
	}
	jint MediaDrm::HDCP_NONE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_NONE"
		);
	}
	jint MediaDrm::HDCP_NO_DIGITAL_OUTPUT()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_NO_DIGITAL_OUTPUT"
		);
	}
	jint MediaDrm::HDCP_V1()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_V1"
		);
	}
	jint MediaDrm::HDCP_V2()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_V2"
		);
	}
	jint MediaDrm::HDCP_V2_1()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_V2_1"
		);
	}
	jint MediaDrm::HDCP_V2_2()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_V2_2"
		);
	}
	jint MediaDrm::KEY_TYPE_OFFLINE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"KEY_TYPE_OFFLINE"
		);
	}
	jint MediaDrm::KEY_TYPE_RELEASE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"KEY_TYPE_RELEASE"
		);
	}
	jint MediaDrm::KEY_TYPE_STREAMING()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"KEY_TYPE_STREAMING"
		);
	}
	jstring MediaDrm::PROPERTY_ALGORITHMS()
	{
		return getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_ALGORITHMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm::PROPERTY_DESCRIPTION()
	{
		return getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_DESCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm::PROPERTY_DEVICE_UNIQUE_ID()
	{
		return getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_DEVICE_UNIQUE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm::PROPERTY_VENDOR()
	{
		return getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_VENDOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm::PROPERTY_VERSION()
	{
		return getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_VERSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint MediaDrm::SECURITY_LEVEL_HW_SECURE_ALL()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_HW_SECURE_ALL"
		);
	}
	jint MediaDrm::SECURITY_LEVEL_HW_SECURE_CRYPTO()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_HW_SECURE_CRYPTO"
		);
	}
	jint MediaDrm::SECURITY_LEVEL_HW_SECURE_DECODE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_HW_SECURE_DECODE"
		);
	}
	jint MediaDrm::SECURITY_LEVEL_SW_SECURE_CRYPTO()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_SW_SECURE_CRYPTO"
		);
	}
	jint MediaDrm::SECURITY_LEVEL_SW_SECURE_DECODE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_SW_SECURE_DECODE"
		);
	}
	jint MediaDrm::SECURITY_LEVEL_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	MediaDrm::MediaDrm(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaDrm::MediaDrm(java::util::UUID arg0)
		: __JniBaseClass(
			"android.media.MediaDrm",
			"(Ljava/util/UUID;)V",
			arg0.object()
		) {}
	
	// Methods
	jint MediaDrm::getMaxSecurityLevel()
	{
		return callStaticMethod<jint>(
			"android.media.MediaDrm",
			"getMaxSecurityLevel",
			"()I"
		);
	}
	jboolean MediaDrm::isCryptoSchemeSupported(java::util::UUID arg0)
	{
		return callStaticMethod<jboolean>(
			"android.media.MediaDrm",
			"isCryptoSchemeSupported",
			"(Ljava/util/UUID;)Z",
			arg0.object()
		);
	}
	jboolean MediaDrm::isCryptoSchemeSupported(java::util::UUID arg0, jstring arg1)
	{
		return callStaticMethod<jboolean>(
			"android.media.MediaDrm",
			"isCryptoSchemeSupported",
			"(Ljava/util/UUID;Ljava/lang/String;)Z",
			arg0.object(),
			arg1
		);
	}
	void MediaDrm::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void MediaDrm::closeSession(jbyteArray arg0)
	{
		callMethod<void>(
			"closeSession",
			"([B)V",
			arg0
		);
	}
	jint MediaDrm::getConnectedHdcpLevel()
	{
		return callMethod<jint>(
			"getConnectedHdcpLevel",
			"()I"
		);
	}
	android::media::MediaDrm_CryptoSession MediaDrm::getCryptoSession(jbyteArray arg0, jstring arg1, jstring arg2)
	{
		return callObjectMethod(
			"getCryptoSession",
			"([BLjava/lang/String;Ljava/lang/String;)Landroid/media/MediaDrm$CryptoSession;",
			arg0,
			arg1,
			arg2
		);
	}
	android::media::MediaDrm_KeyRequest MediaDrm::getKeyRequest(jbyteArray arg0, jbyteArray arg1, jstring arg2, jint arg3, java::util::HashMap arg4)
	{
		return callObjectMethod(
			"getKeyRequest",
			"([B[BLjava/lang/String;ILjava/util/HashMap;)Landroid/media/MediaDrm$KeyRequest;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	jint MediaDrm::getMaxHdcpLevel()
	{
		return callMethod<jint>(
			"getMaxHdcpLevel",
			"()I"
		);
	}
	jint MediaDrm::getMaxSessionCount()
	{
		return callMethod<jint>(
			"getMaxSessionCount",
			"()I"
		);
	}
	android::os::PersistableBundle MediaDrm::getMetrics()
	{
		return callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;"
		);
	}
	jint MediaDrm::getOpenSessionCount()
	{
		return callMethod<jint>(
			"getOpenSessionCount",
			"()I"
		);
	}
	jbyteArray MediaDrm::getPropertyByteArray(jstring arg0)
	{
		return callObjectMethod(
			"getPropertyByteArray",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	jstring MediaDrm::getPropertyString(jstring arg0)
	{
		return callObjectMethod(
			"getPropertyString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	android::media::MediaDrm_ProvisionRequest MediaDrm::getProvisionRequest()
	{
		return callObjectMethod(
			"getProvisionRequest",
			"()Landroid/media/MediaDrm$ProvisionRequest;"
		);
	}
	jbyteArray MediaDrm::getSecureStop(jbyteArray arg0)
	{
		return callObjectMethod(
			"getSecureStop",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	__JniBaseClass MediaDrm::getSecureStopIds()
	{
		return callObjectMethod(
			"getSecureStopIds",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass MediaDrm::getSecureStops()
	{
		return callObjectMethod(
			"getSecureStops",
			"()Ljava/util/List;"
		);
	}
	jint MediaDrm::getSecurityLevel(jbyteArray arg0)
	{
		return callMethod<jint>(
			"getSecurityLevel",
			"([B)I",
			arg0
		);
	}
	jbyteArray MediaDrm::openSession()
	{
		return callObjectMethod(
			"openSession",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray MediaDrm::openSession(jint arg0)
	{
		return callObjectMethod(
			"openSession",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	jbyteArray MediaDrm::provideKeyResponse(jbyteArray arg0, jbyteArray arg1)
	{
		return callObjectMethod(
			"provideKeyResponse",
			"([B[B)[B",
			arg0,
			arg1
		).object<jbyteArray>();
	}
	void MediaDrm::provideProvisionResponse(jbyteArray arg0)
	{
		callMethod<void>(
			"provideProvisionResponse",
			"([B)V",
			arg0
		);
	}
	java::util::HashMap MediaDrm::queryKeyStatus(jbyteArray arg0)
	{
		return callObjectMethod(
			"queryKeyStatus",
			"([B)Ljava/util/HashMap;",
			arg0
		);
	}
	void MediaDrm::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void MediaDrm::releaseAllSecureStops()
	{
		callMethod<void>(
			"releaseAllSecureStops",
			"()V"
		);
	}
	void MediaDrm::releaseSecureStops(jbyteArray arg0)
	{
		callMethod<void>(
			"releaseSecureStops",
			"([B)V",
			arg0
		);
	}
	void MediaDrm::removeAllSecureStops()
	{
		callMethod<void>(
			"removeAllSecureStops",
			"()V"
		);
	}
	void MediaDrm::removeKeys(jbyteArray arg0)
	{
		callMethod<void>(
			"removeKeys",
			"([B)V",
			arg0
		);
	}
	void MediaDrm::removeSecureStop(jbyteArray arg0)
	{
		callMethod<void>(
			"removeSecureStop",
			"([B)V",
			arg0
		);
	}
	void MediaDrm::restoreKeys(jbyteArray arg0, jbyteArray arg1)
	{
		callMethod<void>(
			"restoreKeys",
			"([B[B)V",
			arg0,
			arg1
		);
	}
	void MediaDrm::setOnEventListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnEventListener",
			"(Landroid/media/MediaDrm$OnEventListener;)V",
			arg0.object()
		);
	}
	void MediaDrm::setOnExpirationUpdateListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"setOnExpirationUpdateListener",
			"(Landroid/media/MediaDrm$OnExpirationUpdateListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaDrm::setOnKeyStatusChangeListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"setOnKeyStatusChangeListener",
			"(Landroid/media/MediaDrm$OnKeyStatusChangeListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaDrm::setPropertyByteArray(jstring arg0, jbyteArray arg1)
	{
		callMethod<void>(
			"setPropertyByteArray",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		);
	}
	void MediaDrm::setPropertyString(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"setPropertyString",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
} // namespace android::media

