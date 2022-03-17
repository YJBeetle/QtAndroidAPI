#pragma once

#include "../../JByteArray.hpp"
#include "./MediaDrm_CryptoSession.def.hpp"
#include "./MediaDrm_KeyRequest.def.hpp"
#include "./MediaDrm_PlaybackComponent.def.hpp"
#include "./MediaDrm_ProvisionRequest.def.hpp"
#include "../os/Handler.def.hpp"
#include "../os/PersistableBundle.def.hpp"
#include "../../JString.hpp"
#include "../../java/util/HashMap.def.hpp"
#include "../../java/util/UUID.def.hpp"
#include "./MediaDrm.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaDrm::EVENT_KEY_EXPIRED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"EVENT_KEY_EXPIRED"
		);
	}
	inline jint MediaDrm::EVENT_KEY_REQUIRED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"EVENT_KEY_REQUIRED"
		);
	}
	inline jint MediaDrm::EVENT_PROVISION_REQUIRED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"EVENT_PROVISION_REQUIRED"
		);
	}
	inline jint MediaDrm::EVENT_SESSION_RECLAIMED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"EVENT_SESSION_RECLAIMED"
		);
	}
	inline jint MediaDrm::EVENT_VENDOR_DEFINED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"EVENT_VENDOR_DEFINED"
		);
	}
	inline jint MediaDrm::HDCP_LEVEL_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_LEVEL_UNKNOWN"
		);
	}
	inline jint MediaDrm::HDCP_NONE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_NONE"
		);
	}
	inline jint MediaDrm::HDCP_NO_DIGITAL_OUTPUT()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_NO_DIGITAL_OUTPUT"
		);
	}
	inline jint MediaDrm::HDCP_V1()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_V1"
		);
	}
	inline jint MediaDrm::HDCP_V2()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_V2"
		);
	}
	inline jint MediaDrm::HDCP_V2_1()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_V2_1"
		);
	}
	inline jint MediaDrm::HDCP_V2_2()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_V2_2"
		);
	}
	inline jint MediaDrm::HDCP_V2_3()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_V2_3"
		);
	}
	inline jint MediaDrm::KEY_TYPE_OFFLINE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"KEY_TYPE_OFFLINE"
		);
	}
	inline jint MediaDrm::KEY_TYPE_RELEASE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"KEY_TYPE_RELEASE"
		);
	}
	inline jint MediaDrm::KEY_TYPE_STREAMING()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"KEY_TYPE_STREAMING"
		);
	}
	inline jint MediaDrm::OFFLINE_LICENSE_STATE_RELEASED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"OFFLINE_LICENSE_STATE_RELEASED"
		);
	}
	inline jint MediaDrm::OFFLINE_LICENSE_STATE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"OFFLINE_LICENSE_STATE_UNKNOWN"
		);
	}
	inline jint MediaDrm::OFFLINE_LICENSE_STATE_USABLE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"OFFLINE_LICENSE_STATE_USABLE"
		);
	}
	inline JString MediaDrm::PROPERTY_ALGORITHMS()
	{
		return getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_ALGORITHMS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaDrm::PROPERTY_DESCRIPTION()
	{
		return getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_DESCRIPTION",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaDrm::PROPERTY_DEVICE_UNIQUE_ID()
	{
		return getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_DEVICE_UNIQUE_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaDrm::PROPERTY_VENDOR()
	{
		return getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_VENDOR",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaDrm::PROPERTY_VERSION()
	{
		return getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_VERSION",
			"Ljava/lang/String;"
		);
	}
	inline jint MediaDrm::SECURITY_LEVEL_HW_SECURE_ALL()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_HW_SECURE_ALL"
		);
	}
	inline jint MediaDrm::SECURITY_LEVEL_HW_SECURE_CRYPTO()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_HW_SECURE_CRYPTO"
		);
	}
	inline jint MediaDrm::SECURITY_LEVEL_HW_SECURE_DECODE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_HW_SECURE_DECODE"
		);
	}
	inline jint MediaDrm::SECURITY_LEVEL_SW_SECURE_CRYPTO()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_SW_SECURE_CRYPTO"
		);
	}
	inline jint MediaDrm::SECURITY_LEVEL_SW_SECURE_DECODE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_SW_SECURE_DECODE"
		);
	}
	inline jint MediaDrm::SECURITY_LEVEL_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_UNKNOWN"
		);
	}
	
	// Constructors
	inline MediaDrm::MediaDrm(java::util::UUID arg0)
		: JObject(
			"android.media.MediaDrm",
			"(Ljava/util/UUID;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint MediaDrm::getMaxSecurityLevel()
	{
		return callStaticMethod<jint>(
			"android.media.MediaDrm",
			"getMaxSecurityLevel",
			"()I"
		);
	}
	inline JObject MediaDrm::getSupportedCryptoSchemes()
	{
		return callStaticObjectMethod(
			"android.media.MediaDrm",
			"getSupportedCryptoSchemes",
			"()Ljava/util/List;"
		);
	}
	inline jboolean MediaDrm::isCryptoSchemeSupported(java::util::UUID arg0)
	{
		return callStaticMethod<jboolean>(
			"android.media.MediaDrm",
			"isCryptoSchemeSupported",
			"(Ljava/util/UUID;)Z",
			arg0.object()
		);
	}
	inline jboolean MediaDrm::isCryptoSchemeSupported(java::util::UUID arg0, JString arg1)
	{
		return callStaticMethod<jboolean>(
			"android.media.MediaDrm",
			"isCryptoSchemeSupported",
			"(Ljava/util/UUID;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jboolean MediaDrm::isCryptoSchemeSupported(java::util::UUID arg0, JString arg1, jint arg2)
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
	inline void MediaDrm::clearOnEventListener() const
	{
		callMethod<void>(
			"clearOnEventListener",
			"()V"
		);
	}
	inline void MediaDrm::clearOnExpirationUpdateListener() const
	{
		callMethod<void>(
			"clearOnExpirationUpdateListener",
			"()V"
		);
	}
	inline void MediaDrm::clearOnKeyStatusChangeListener() const
	{
		callMethod<void>(
			"clearOnKeyStatusChangeListener",
			"()V"
		);
	}
	inline void MediaDrm::clearOnSessionLostStateListener() const
	{
		callMethod<void>(
			"clearOnSessionLostStateListener",
			"()V"
		);
	}
	inline void MediaDrm::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void MediaDrm::closeSession(JByteArray arg0) const
	{
		callMethod<void>(
			"closeSession",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline jint MediaDrm::getConnectedHdcpLevel() const
	{
		return callMethod<jint>(
			"getConnectedHdcpLevel",
			"()I"
		);
	}
	inline android::media::MediaDrm_CryptoSession MediaDrm::getCryptoSession(JByteArray arg0, JString arg1, JString arg2) const
	{
		return callObjectMethod(
			"getCryptoSession",
			"([BLjava/lang/String;Ljava/lang/String;)Landroid/media/MediaDrm$CryptoSession;",
			arg0.object<jbyteArray>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline android::media::MediaDrm_KeyRequest MediaDrm::getKeyRequest(JByteArray arg0, JByteArray arg1, JString arg2, jint arg3, java::util::HashMap arg4) const
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
	inline JObject MediaDrm::getLogMessages() const
	{
		return callObjectMethod(
			"getLogMessages",
			"()Ljava/util/List;"
		);
	}
	inline jint MediaDrm::getMaxHdcpLevel() const
	{
		return callMethod<jint>(
			"getMaxHdcpLevel",
			"()I"
		);
	}
	inline jint MediaDrm::getMaxSessionCount() const
	{
		return callMethod<jint>(
			"getMaxSessionCount",
			"()I"
		);
	}
	inline android::os::PersistableBundle MediaDrm::getMetrics() const
	{
		return callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline JObject MediaDrm::getOfflineLicenseKeySetIds() const
	{
		return callObjectMethod(
			"getOfflineLicenseKeySetIds",
			"()Ljava/util/List;"
		);
	}
	inline jint MediaDrm::getOfflineLicenseState(JByteArray arg0) const
	{
		return callMethod<jint>(
			"getOfflineLicenseState",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	inline jint MediaDrm::getOpenSessionCount() const
	{
		return callMethod<jint>(
			"getOpenSessionCount",
			"()I"
		);
	}
	inline android::media::MediaDrm_PlaybackComponent MediaDrm::getPlaybackComponent(JByteArray arg0) const
	{
		return callObjectMethod(
			"getPlaybackComponent",
			"([B)Landroid/media/MediaDrm$PlaybackComponent;",
			arg0.object<jbyteArray>()
		);
	}
	inline JByteArray MediaDrm::getPropertyByteArray(JString arg0) const
	{
		return callObjectMethod(
			"getPropertyByteArray",
			"(Ljava/lang/String;)[B",
			arg0.object<jstring>()
		);
	}
	inline JString MediaDrm::getPropertyString(JString arg0) const
	{
		return callObjectMethod(
			"getPropertyString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline android::media::MediaDrm_ProvisionRequest MediaDrm::getProvisionRequest() const
	{
		return callObjectMethod(
			"getProvisionRequest",
			"()Landroid/media/MediaDrm$ProvisionRequest;"
		);
	}
	inline JByteArray MediaDrm::getSecureStop(JByteArray arg0) const
	{
		return callObjectMethod(
			"getSecureStop",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	inline JObject MediaDrm::getSecureStopIds() const
	{
		return callObjectMethod(
			"getSecureStopIds",
			"()Ljava/util/List;"
		);
	}
	inline JObject MediaDrm::getSecureStops() const
	{
		return callObjectMethod(
			"getSecureStops",
			"()Ljava/util/List;"
		);
	}
	inline jint MediaDrm::getSecurityLevel(JByteArray arg0) const
	{
		return callMethod<jint>(
			"getSecurityLevel",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	inline JByteArray MediaDrm::openSession() const
	{
		return callObjectMethod(
			"openSession",
			"()[B"
		);
	}
	inline JByteArray MediaDrm::openSession(jint arg0) const
	{
		return callObjectMethod(
			"openSession",
			"(I)[B",
			arg0
		);
	}
	inline JByteArray MediaDrm::provideKeyResponse(JByteArray arg0, JByteArray arg1) const
	{
		return callObjectMethod(
			"provideKeyResponse",
			"([B[B)[B",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>()
		);
	}
	inline void MediaDrm::provideProvisionResponse(JByteArray arg0) const
	{
		callMethod<void>(
			"provideProvisionResponse",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline java::util::HashMap MediaDrm::queryKeyStatus(JByteArray arg0) const
	{
		return callObjectMethod(
			"queryKeyStatus",
			"([B)Ljava/util/HashMap;",
			arg0.object<jbyteArray>()
		);
	}
	inline void MediaDrm::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void MediaDrm::releaseAllSecureStops() const
	{
		callMethod<void>(
			"releaseAllSecureStops",
			"()V"
		);
	}
	inline void MediaDrm::releaseSecureStops(JByteArray arg0) const
	{
		callMethod<void>(
			"releaseSecureStops",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void MediaDrm::removeAllSecureStops() const
	{
		callMethod<void>(
			"removeAllSecureStops",
			"()V"
		);
	}
	inline void MediaDrm::removeKeys(JByteArray arg0) const
	{
		callMethod<void>(
			"removeKeys",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void MediaDrm::removeOfflineLicense(JByteArray arg0) const
	{
		callMethod<void>(
			"removeOfflineLicense",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void MediaDrm::removeSecureStop(JByteArray arg0) const
	{
		callMethod<void>(
			"removeSecureStop",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline jboolean MediaDrm::requiresSecureDecoder(JString arg0) const
	{
		return callMethod<jboolean>(
			"requiresSecureDecoder",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean MediaDrm::requiresSecureDecoder(JString arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"requiresSecureDecoder",
			"(Ljava/lang/String;I)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void MediaDrm::restoreKeys(JByteArray arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"restoreKeys",
			"([B[B)V",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>()
		);
	}
	inline void MediaDrm::setOnEventListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnEventListener",
			"(Landroid/media/MediaDrm$OnEventListener;)V",
			arg0.object()
		);
	}
	inline void MediaDrm::setOnEventListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setOnEventListener",
			"(Landroid/media/MediaDrm$OnEventListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaDrm::setOnEventListener(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"setOnEventListener",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaDrm$OnEventListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaDrm::setOnExpirationUpdateListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setOnExpirationUpdateListener",
			"(Landroid/media/MediaDrm$OnExpirationUpdateListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaDrm::setOnExpirationUpdateListener(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"setOnExpirationUpdateListener",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaDrm$OnExpirationUpdateListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaDrm::setOnKeyStatusChangeListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setOnKeyStatusChangeListener",
			"(Landroid/media/MediaDrm$OnKeyStatusChangeListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaDrm::setOnKeyStatusChangeListener(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"setOnKeyStatusChangeListener",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaDrm$OnKeyStatusChangeListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaDrm::setOnSessionLostStateListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setOnSessionLostStateListener",
			"(Landroid/media/MediaDrm$OnSessionLostStateListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaDrm::setOnSessionLostStateListener(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"setOnSessionLostStateListener",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaDrm$OnSessionLostStateListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaDrm::setPropertyByteArray(JString arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"setPropertyByteArray",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	inline void MediaDrm::setPropertyString(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"setPropertyString",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
} // namespace android::media

// Base class headers

