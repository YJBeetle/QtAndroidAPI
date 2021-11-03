#include "../../JByteArray.hpp"
#include "./MediaDrm_CryptoSession.hpp"
#include "./MediaDrm_KeyRequest.hpp"
#include "./MediaDrm_ProvisionRequest.hpp"
#include "../os/Handler.hpp"
#include "../os/PersistableBundle.hpp"
#include "../../JString.hpp"
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
	jint MediaDrm::HDCP_V2_3()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_V2_3"
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
	jint MediaDrm::OFFLINE_LICENSE_STATE_RELEASED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"OFFLINE_LICENSE_STATE_RELEASED"
		);
	}
	jint MediaDrm::OFFLINE_LICENSE_STATE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"OFFLINE_LICENSE_STATE_UNKNOWN"
		);
	}
	jint MediaDrm::OFFLINE_LICENSE_STATE_USABLE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"OFFLINE_LICENSE_STATE_USABLE"
		);
	}
	JString MediaDrm::PROPERTY_ALGORITHMS()
	{
		return getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_ALGORITHMS",
			"Ljava/lang/String;"
		);
	}
	JString MediaDrm::PROPERTY_DESCRIPTION()
	{
		return getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_DESCRIPTION",
			"Ljava/lang/String;"
		);
	}
	JString MediaDrm::PROPERTY_DEVICE_UNIQUE_ID()
	{
		return getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_DEVICE_UNIQUE_ID",
			"Ljava/lang/String;"
		);
	}
	JString MediaDrm::PROPERTY_VENDOR()
	{
		return getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_VENDOR",
			"Ljava/lang/String;"
		);
	}
	JString MediaDrm::PROPERTY_VERSION()
	{
		return getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_VERSION",
			"Ljava/lang/String;"
		);
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
	
	// QJniObject forward
	MediaDrm::MediaDrm(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaDrm::MediaDrm(java::util::UUID arg0)
		: JObject(
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
	JObject MediaDrm::getSupportedCryptoSchemes()
	{
		return callStaticObjectMethod(
			"android.media.MediaDrm",
			"getSupportedCryptoSchemes",
			"()Ljava/util/List;"
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
	jboolean MediaDrm::isCryptoSchemeSupported(java::util::UUID arg0, JString arg1)
	{
		return callStaticMethod<jboolean>(
			"android.media.MediaDrm",
			"isCryptoSchemeSupported",
			"(Ljava/util/UUID;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jboolean MediaDrm::isCryptoSchemeSupported(java::util::UUID arg0, JString arg1, jint arg2)
	{
		return callStaticMethod<jboolean>(
			"android.media.MediaDrm",
			"isCryptoSchemeSupported",
			"(Ljava/util/UUID;Ljava/lang/String;I)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	void MediaDrm::clearOnEventListener()
	{
		callMethod<void>(
			"clearOnEventListener",
			"()V"
		);
	}
	void MediaDrm::clearOnExpirationUpdateListener()
	{
		callMethod<void>(
			"clearOnExpirationUpdateListener",
			"()V"
		);
	}
	void MediaDrm::clearOnKeyStatusChangeListener()
	{
		callMethod<void>(
			"clearOnKeyStatusChangeListener",
			"()V"
		);
	}
	void MediaDrm::clearOnSessionLostStateListener()
	{
		callMethod<void>(
			"clearOnSessionLostStateListener",
			"()V"
		);
	}
	void MediaDrm::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void MediaDrm::closeSession(JByteArray arg0)
	{
		callMethod<void>(
			"closeSession",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	jint MediaDrm::getConnectedHdcpLevel()
	{
		return callMethod<jint>(
			"getConnectedHdcpLevel",
			"()I"
		);
	}
	android::media::MediaDrm_CryptoSession MediaDrm::getCryptoSession(JByteArray arg0, JString arg1, JString arg2)
	{
		return callObjectMethod(
			"getCryptoSession",
			"([BLjava/lang/String;Ljava/lang/String;)Landroid/media/MediaDrm$CryptoSession;",
			arg0.object<jbyteArray>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	android::media::MediaDrm_KeyRequest MediaDrm::getKeyRequest(JByteArray arg0, JByteArray arg1, JString arg2, jint arg3, java::util::HashMap arg4)
	{
		return callObjectMethod(
			"getKeyRequest",
			"([B[BLjava/lang/String;ILjava/util/HashMap;)Landroid/media/MediaDrm$KeyRequest;",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>(),
			arg2.object<jstring>(),
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
	JObject MediaDrm::getOfflineLicenseKeySetIds()
	{
		return callObjectMethod(
			"getOfflineLicenseKeySetIds",
			"()Ljava/util/List;"
		);
	}
	jint MediaDrm::getOfflineLicenseState(JByteArray arg0)
	{
		return callMethod<jint>(
			"getOfflineLicenseState",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	jint MediaDrm::getOpenSessionCount()
	{
		return callMethod<jint>(
			"getOpenSessionCount",
			"()I"
		);
	}
	JByteArray MediaDrm::getPropertyByteArray(JString arg0)
	{
		return callObjectMethod(
			"getPropertyByteArray",
			"(Ljava/lang/String;)[B",
			arg0.object<jstring>()
		);
	}
	JString MediaDrm::getPropertyString(JString arg0)
	{
		return callObjectMethod(
			"getPropertyString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	android::media::MediaDrm_ProvisionRequest MediaDrm::getProvisionRequest()
	{
		return callObjectMethod(
			"getProvisionRequest",
			"()Landroid/media/MediaDrm$ProvisionRequest;"
		);
	}
	JByteArray MediaDrm::getSecureStop(JByteArray arg0)
	{
		return callObjectMethod(
			"getSecureStop",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	JObject MediaDrm::getSecureStopIds()
	{
		return callObjectMethod(
			"getSecureStopIds",
			"()Ljava/util/List;"
		);
	}
	JObject MediaDrm::getSecureStops()
	{
		return callObjectMethod(
			"getSecureStops",
			"()Ljava/util/List;"
		);
	}
	jint MediaDrm::getSecurityLevel(JByteArray arg0)
	{
		return callMethod<jint>(
			"getSecurityLevel",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	JByteArray MediaDrm::openSession()
	{
		return callObjectMethod(
			"openSession",
			"()[B"
		);
	}
	JByteArray MediaDrm::openSession(jint arg0)
	{
		return callObjectMethod(
			"openSession",
			"(I)[B",
			arg0
		);
	}
	JByteArray MediaDrm::provideKeyResponse(JByteArray arg0, JByteArray arg1)
	{
		return callObjectMethod(
			"provideKeyResponse",
			"([B[B)[B",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>()
		);
	}
	void MediaDrm::provideProvisionResponse(JByteArray arg0)
	{
		callMethod<void>(
			"provideProvisionResponse",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	java::util::HashMap MediaDrm::queryKeyStatus(JByteArray arg0)
	{
		return callObjectMethod(
			"queryKeyStatus",
			"([B)Ljava/util/HashMap;",
			arg0.object<jbyteArray>()
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
	void MediaDrm::releaseSecureStops(JByteArray arg0)
	{
		callMethod<void>(
			"releaseSecureStops",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void MediaDrm::removeAllSecureStops()
	{
		callMethod<void>(
			"removeAllSecureStops",
			"()V"
		);
	}
	void MediaDrm::removeKeys(JByteArray arg0)
	{
		callMethod<void>(
			"removeKeys",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void MediaDrm::removeOfflineLicense(JByteArray arg0)
	{
		callMethod<void>(
			"removeOfflineLicense",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void MediaDrm::removeSecureStop(JByteArray arg0)
	{
		callMethod<void>(
			"removeSecureStop",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void MediaDrm::restoreKeys(JByteArray arg0, JByteArray arg1)
	{
		callMethod<void>(
			"restoreKeys",
			"([B[B)V",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>()
		);
	}
	void MediaDrm::setOnEventListener(JObject arg0)
	{
		callMethod<void>(
			"setOnEventListener",
			"(Landroid/media/MediaDrm$OnEventListener;)V",
			arg0.object()
		);
	}
	void MediaDrm::setOnEventListener(JObject arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"setOnEventListener",
			"(Landroid/media/MediaDrm$OnEventListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaDrm::setOnEventListener(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"setOnEventListener",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaDrm$OnEventListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaDrm::setOnExpirationUpdateListener(JObject arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"setOnExpirationUpdateListener",
			"(Landroid/media/MediaDrm$OnExpirationUpdateListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaDrm::setOnExpirationUpdateListener(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"setOnExpirationUpdateListener",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaDrm$OnExpirationUpdateListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaDrm::setOnKeyStatusChangeListener(JObject arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"setOnKeyStatusChangeListener",
			"(Landroid/media/MediaDrm$OnKeyStatusChangeListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaDrm::setOnKeyStatusChangeListener(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"setOnKeyStatusChangeListener",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaDrm$OnKeyStatusChangeListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaDrm::setOnSessionLostStateListener(JObject arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"setOnSessionLostStateListener",
			"(Landroid/media/MediaDrm$OnSessionLostStateListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaDrm::setOnSessionLostStateListener(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"setOnSessionLostStateListener",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaDrm$OnSessionLostStateListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaDrm::setPropertyByteArray(JString arg0, JByteArray arg1)
	{
		callMethod<void>(
			"setPropertyByteArray",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	void MediaDrm::setPropertyString(JString arg0, JString arg1)
	{
		callMethod<void>(
			"setPropertyString",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
} // namespace android::media

