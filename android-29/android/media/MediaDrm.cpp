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
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"EVENT_KEY_EXPIRED"
		);
	}
	jint MediaDrm::EVENT_KEY_REQUIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"EVENT_KEY_REQUIRED"
		);
	}
	jint MediaDrm::EVENT_PROVISION_REQUIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"EVENT_PROVISION_REQUIRED"
		);
	}
	jint MediaDrm::EVENT_SESSION_RECLAIMED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"EVENT_SESSION_RECLAIMED"
		);
	}
	jint MediaDrm::EVENT_VENDOR_DEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"EVENT_VENDOR_DEFINED"
		);
	}
	jint MediaDrm::HDCP_LEVEL_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_LEVEL_UNKNOWN"
		);
	}
	jint MediaDrm::HDCP_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_NONE"
		);
	}
	jint MediaDrm::HDCP_NO_DIGITAL_OUTPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_NO_DIGITAL_OUTPUT"
		);
	}
	jint MediaDrm::HDCP_V1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_V1"
		);
	}
	jint MediaDrm::HDCP_V2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_V2"
		);
	}
	jint MediaDrm::HDCP_V2_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_V2_1"
		);
	}
	jint MediaDrm::HDCP_V2_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_V2_2"
		);
	}
	jint MediaDrm::HDCP_V2_3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_V2_3"
		);
	}
	jint MediaDrm::KEY_TYPE_OFFLINE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"KEY_TYPE_OFFLINE"
		);
	}
	jint MediaDrm::KEY_TYPE_RELEASE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"KEY_TYPE_RELEASE"
		);
	}
	jint MediaDrm::KEY_TYPE_STREAMING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"KEY_TYPE_STREAMING"
		);
	}
	jint MediaDrm::OFFLINE_LICENSE_STATE_RELEASED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"OFFLINE_LICENSE_STATE_RELEASED"
		);
	}
	jint MediaDrm::OFFLINE_LICENSE_STATE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"OFFLINE_LICENSE_STATE_UNKNOWN"
		);
	}
	jint MediaDrm::OFFLINE_LICENSE_STATE_USABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"OFFLINE_LICENSE_STATE_USABLE"
		);
	}
	jstring MediaDrm::PROPERTY_ALGORITHMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_ALGORITHMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm::PROPERTY_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_DESCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm::PROPERTY_DEVICE_UNIQUE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_DEVICE_UNIQUE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm::PROPERTY_VENDOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_VENDOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaDrm::PROPERTY_VERSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_VERSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint MediaDrm::SECURITY_LEVEL_HW_SECURE_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_HW_SECURE_ALL"
		);
	}
	jint MediaDrm::SECURITY_LEVEL_HW_SECURE_CRYPTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_HW_SECURE_CRYPTO"
		);
	}
	jint MediaDrm::SECURITY_LEVEL_HW_SECURE_DECODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_HW_SECURE_DECODE"
		);
	}
	jint MediaDrm::SECURITY_LEVEL_SW_SECURE_CRYPTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_SW_SECURE_CRYPTO"
		);
	}
	jint MediaDrm::SECURITY_LEVEL_SW_SECURE_DECODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_SW_SECURE_DECODE"
		);
	}
	jint MediaDrm::SECURITY_LEVEL_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_UNKNOWN"
		);
	}
	
	MediaDrm::MediaDrm(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaDrm::MediaDrm(java::util::UUID &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDrm",
			"(Ljava/util/UUID;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint MediaDrm::getMaxSecurityLevel()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.media.MediaDrm",
			"getMaxSecurityLevel",
			"()I"
		);
	}
	jboolean MediaDrm::isCryptoSchemeSupported(java::util::UUID arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.MediaDrm",
			"isCryptoSchemeSupported",
			"(Ljava/util/UUID;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean MediaDrm::isCryptoSchemeSupported(java::util::UUID arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.MediaDrm",
			"isCryptoSchemeSupported",
			"(Ljava/util/UUID;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean MediaDrm::isCryptoSchemeSupported(java::util::UUID arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.MediaDrm",
			"isCryptoSchemeSupported",
			"(Ljava/util/UUID;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean MediaDrm::isCryptoSchemeSupported(java::util::UUID arg0, jstring arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.MediaDrm",
			"isCryptoSchemeSupported",
			"(Ljava/util/UUID;Ljava/lang/String;I)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean MediaDrm::isCryptoSchemeSupported(java::util::UUID arg0, const QString &arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.MediaDrm",
			"isCryptoSchemeSupported",
			"(Ljava/util/UUID;Ljava/lang/String;I)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void MediaDrm::clearOnEventListener()
	{
		__thiz.callMethod<void>(
			"clearOnEventListener",
			"()V"
		);
	}
	void MediaDrm::clearOnExpirationUpdateListener()
	{
		__thiz.callMethod<void>(
			"clearOnExpirationUpdateListener",
			"()V"
		);
	}
	void MediaDrm::clearOnKeyStatusChangeListener()
	{
		__thiz.callMethod<void>(
			"clearOnKeyStatusChangeListener",
			"()V"
		);
	}
	void MediaDrm::clearOnSessionLostStateListener()
	{
		__thiz.callMethod<void>(
			"clearOnSessionLostStateListener",
			"()V"
		);
	}
	void MediaDrm::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void MediaDrm::closeSession(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"closeSession",
			"([B)V",
			arg0
		);
	}
	jint MediaDrm::getConnectedHdcpLevel()
	{
		return __thiz.callMethod<jint>(
			"getConnectedHdcpLevel",
			"()I"
		);
	}
	QAndroidJniObject MediaDrm::getCryptoSession(jbyteArray arg0, jstring arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"getCryptoSession",
			"([BLjava/lang/String;Ljava/lang/String;)Landroid/media/MediaDrm$CryptoSession;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject MediaDrm::getCryptoSession(jbyteArray arg0, const QString &arg1, const QString &arg2)
	{
		return __thiz.callObjectMethod(
			"getCryptoSession",
			"([BLjava/lang/String;Ljava/lang/String;)Landroid/media/MediaDrm$CryptoSession;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	QAndroidJniObject MediaDrm::getKeyRequest(jbyteArray arg0, jbyteArray arg1, jstring arg2, jint arg3, java::util::HashMap arg4)
	{
		return __thiz.callObjectMethod(
			"getKeyRequest",
			"([B[BLjava/lang/String;ILjava/util/HashMap;)Landroid/media/MediaDrm$KeyRequest;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject MediaDrm::getKeyRequest(jbyteArray arg0, jbyteArray arg1, const QString &arg2, jint arg3, java::util::HashMap arg4)
	{
		return __thiz.callObjectMethod(
			"getKeyRequest",
			"([B[BLjava/lang/String;ILjava/util/HashMap;)Landroid/media/MediaDrm$KeyRequest;",
			arg0,
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			arg4.__jniObject().object()
		);
	}
	jint MediaDrm::getMaxHdcpLevel()
	{
		return __thiz.callMethod<jint>(
			"getMaxHdcpLevel",
			"()I"
		);
	}
	jint MediaDrm::getMaxSessionCount()
	{
		return __thiz.callMethod<jint>(
			"getMaxSessionCount",
			"()I"
		);
	}
	QAndroidJniObject MediaDrm::getMetrics()
	{
		return __thiz.callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;"
		);
	}
	QAndroidJniObject MediaDrm::getOfflineLicenseKeySetIds()
	{
		return __thiz.callObjectMethod(
			"getOfflineLicenseKeySetIds",
			"()Ljava/util/List;"
		);
	}
	jint MediaDrm::getOfflineLicenseState(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"getOfflineLicenseState",
			"([B)I",
			arg0
		);
	}
	jint MediaDrm::getOpenSessionCount()
	{
		return __thiz.callMethod<jint>(
			"getOpenSessionCount",
			"()I"
		);
	}
	jbyteArray MediaDrm::getPropertyByteArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getPropertyByteArray",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	jbyteArray MediaDrm::getPropertyByteArray(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getPropertyByteArray",
			"(Ljava/lang/String;)[B",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jbyteArray>();
	}
	jstring MediaDrm::getPropertyString(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getPropertyString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring MediaDrm::getPropertyString(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getPropertyString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject MediaDrm::getProvisionRequest()
	{
		return __thiz.callObjectMethod(
			"getProvisionRequest",
			"()Landroid/media/MediaDrm$ProvisionRequest;"
		);
	}
	jbyteArray MediaDrm::getSecureStop(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"getSecureStop",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	QAndroidJniObject MediaDrm::getSecureStopIds()
	{
		return __thiz.callObjectMethod(
			"getSecureStopIds",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject MediaDrm::getSecureStops()
	{
		return __thiz.callObjectMethod(
			"getSecureStops",
			"()Ljava/util/List;"
		);
	}
	jint MediaDrm::getSecurityLevel(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"getSecurityLevel",
			"([B)I",
			arg0
		);
	}
	jbyteArray MediaDrm::openSession()
	{
		return __thiz.callObjectMethod(
			"openSession",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray MediaDrm::openSession(jint arg0)
	{
		return __thiz.callObjectMethod(
			"openSession",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	jbyteArray MediaDrm::provideKeyResponse(jbyteArray arg0, jbyteArray arg1)
	{
		return __thiz.callObjectMethod(
			"provideKeyResponse",
			"([B[B)[B",
			arg0,
			arg1
		).object<jbyteArray>();
	}
	void MediaDrm::provideProvisionResponse(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"provideProvisionResponse",
			"([B)V",
			arg0
		);
	}
	QAndroidJniObject MediaDrm::queryKeyStatus(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"queryKeyStatus",
			"([B)Ljava/util/HashMap;",
			arg0
		);
	}
	void MediaDrm::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void MediaDrm::releaseAllSecureStops()
	{
		__thiz.callMethod<void>(
			"releaseAllSecureStops",
			"()V"
		);
	}
	void MediaDrm::releaseSecureStops(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"releaseSecureStops",
			"([B)V",
			arg0
		);
	}
	void MediaDrm::removeAllSecureStops()
	{
		__thiz.callMethod<void>(
			"removeAllSecureStops",
			"()V"
		);
	}
	void MediaDrm::removeKeys(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"removeKeys",
			"([B)V",
			arg0
		);
	}
	void MediaDrm::removeOfflineLicense(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"removeOfflineLicense",
			"([B)V",
			arg0
		);
	}
	void MediaDrm::removeSecureStop(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"removeSecureStop",
			"([B)V",
			arg0
		);
	}
	void MediaDrm::restoreKeys(jbyteArray arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"restoreKeys",
			"([B[B)V",
			arg0,
			arg1
		);
	}
	void MediaDrm::setOnEventListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnEventListener",
			"(Landroid/media/MediaDrm$OnEventListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaDrm::setOnEventListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnEventListener",
			"(Landroid/media/MediaDrm$OnEventListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaDrm::setOnEventListener(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setOnEventListener",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaDrm$OnEventListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaDrm::setOnExpirationUpdateListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnExpirationUpdateListener",
			"(Landroid/media/MediaDrm$OnExpirationUpdateListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaDrm::setOnExpirationUpdateListener(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setOnExpirationUpdateListener",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaDrm$OnExpirationUpdateListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaDrm::setOnKeyStatusChangeListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnKeyStatusChangeListener",
			"(Landroid/media/MediaDrm$OnKeyStatusChangeListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaDrm::setOnKeyStatusChangeListener(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setOnKeyStatusChangeListener",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaDrm$OnKeyStatusChangeListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaDrm::setOnSessionLostStateListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnSessionLostStateListener",
			"(Landroid/media/MediaDrm$OnSessionLostStateListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaDrm::setOnSessionLostStateListener(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setOnSessionLostStateListener",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaDrm$OnSessionLostStateListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaDrm::setPropertyByteArray(jstring arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"setPropertyByteArray",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		);
	}
	void MediaDrm::setPropertyByteArray(const QString &arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"setPropertyByteArray",
			"(Ljava/lang/String;[B)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void MediaDrm::setPropertyString(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setPropertyString",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void MediaDrm::setPropertyString(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setPropertyString",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
} // namespace android::media

