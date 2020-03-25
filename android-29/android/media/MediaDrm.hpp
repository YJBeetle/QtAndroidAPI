#pragma once

#ifndef ANDROID_MEDIA_MEDIADRM
#define ANDROID_MEDIA_MEDIADRM

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class UUID;
}
namespace __jni_impl::android::media
{
	class MediaDrm_KeyRequest;
}
namespace __jni_impl::java::util
{
	class HashMap;
}
namespace __jni_impl::android::os
{
	class PersistableBundle;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::media
{
	class MediaDrm_ProvisionRequest;
}
namespace __jni_impl::android::media
{
	class MediaDrm_CryptoSession;
}

namespace __jni_impl::android::media
{
	class MediaDrm : public __JniBaseClass
	{
	public:
		// Fields
		static jint EVENT_KEY_EXPIRED();
		static jint EVENT_KEY_REQUIRED();
		static jint EVENT_PROVISION_REQUIRED();
		static jint EVENT_SESSION_RECLAIMED();
		static jint EVENT_VENDOR_DEFINED();
		static jint HDCP_LEVEL_UNKNOWN();
		static jint HDCP_NONE();
		static jint HDCP_NO_DIGITAL_OUTPUT();
		static jint HDCP_V1();
		static jint HDCP_V2();
		static jint HDCP_V2_1();
		static jint HDCP_V2_2();
		static jint HDCP_V2_3();
		static jint KEY_TYPE_OFFLINE();
		static jint KEY_TYPE_RELEASE();
		static jint KEY_TYPE_STREAMING();
		static jint OFFLINE_LICENSE_STATE_RELEASED();
		static jint OFFLINE_LICENSE_STATE_UNKNOWN();
		static jint OFFLINE_LICENSE_STATE_USABLE();
		static QAndroidJniObject PROPERTY_ALGORITHMS();
		static QAndroidJniObject PROPERTY_DESCRIPTION();
		static QAndroidJniObject PROPERTY_DEVICE_UNIQUE_ID();
		static QAndroidJniObject PROPERTY_VENDOR();
		static QAndroidJniObject PROPERTY_VERSION();
		static jint SECURITY_LEVEL_HW_SECURE_ALL();
		static jint SECURITY_LEVEL_HW_SECURE_CRYPTO();
		static jint SECURITY_LEVEL_HW_SECURE_DECODE();
		static jint SECURITY_LEVEL_SW_SECURE_CRYPTO();
		static jint SECURITY_LEVEL_SW_SECURE_DECODE();
		static jint SECURITY_LEVEL_UNKNOWN();
		
		// Constructors
		void __constructor(__jni_impl::java::util::UUID arg0);
		
		// Methods
		void close();
		void release();
		QAndroidJniObject getKeyRequest(jbyteArray arg0, jbyteArray arg1, jstring arg2, jint arg3, __jni_impl::java::util::HashMap arg4);
		QAndroidJniObject provideKeyResponse(jbyteArray arg0, jbyteArray arg1);
		void restoreKeys(jbyteArray arg0, jbyteArray arg1);
		QAndroidJniObject getMetrics();
		static jboolean isCryptoSchemeSupported(__jni_impl::java::util::UUID arg0, jstring arg1);
		static jboolean isCryptoSchemeSupported(__jni_impl::java::util::UUID arg0);
		static jboolean isCryptoSchemeSupported(__jni_impl::java::util::UUID arg0, jstring arg1, jint arg2);
		QAndroidJniObject openSession(jint arg0);
		QAndroidJniObject openSession();
		void setOnEventListener(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		void setOnEventListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		void setOnEventListener(__jni_impl::__JniBaseClass arg0);
		void setOnExpirationUpdateListener(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		void setOnExpirationUpdateListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		void clearOnExpirationUpdateListener();
		void setOnKeyStatusChangeListener(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		void setOnKeyStatusChangeListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		void clearOnKeyStatusChangeListener();
		void setOnSessionLostStateListener(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		void setOnSessionLostStateListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		void clearOnSessionLostStateListener();
		void clearOnEventListener();
		void closeSession(jbyteArray arg0);
		void removeKeys(jbyteArray arg0);
		QAndroidJniObject queryKeyStatus(jbyteArray arg0);
		QAndroidJniObject getProvisionRequest();
		void provideProvisionResponse(jbyteArray arg0);
		QAndroidJniObject getOfflineLicenseKeySetIds();
		void removeOfflineLicense(jbyteArray arg0);
		jint getOfflineLicenseState(jbyteArray arg0);
		QAndroidJniObject getSecureStops();
		QAndroidJniObject getSecureStopIds();
		QAndroidJniObject getSecureStop(jbyteArray arg0);
		void releaseSecureStops(jbyteArray arg0);
		void removeSecureStop(jbyteArray arg0);
		void removeAllSecureStops();
		void releaseAllSecureStops();
		jint getConnectedHdcpLevel();
		jint getMaxHdcpLevel();
		jint getOpenSessionCount();
		jint getMaxSessionCount();
		static jint getMaxSecurityLevel();
		jint getSecurityLevel(jbyteArray arg0);
		QAndroidJniObject getPropertyString(jstring arg0);
		void setPropertyString(jstring arg0, jstring arg1);
		QAndroidJniObject getPropertyByteArray(jstring arg0);
		void setPropertyByteArray(jstring arg0, jbyteArray arg1);
		QAndroidJniObject getCryptoSession(jbyteArray arg0, jstring arg1, jstring arg2);
	};
} // namespace __jni_impl::android::media

#include "../../java/util/UUID.hpp"
#include "MediaDrm_KeyRequest.hpp"
#include "../../java/util/HashMap.hpp"
#include "../os/PersistableBundle.hpp"
#include "../os/Handler.hpp"
#include "MediaDrm_ProvisionRequest.hpp"
#include "MediaDrm_CryptoSession.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint MediaDrm::EVENT_KEY_EXPIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"EVENT_KEY_EXPIRED");
	}
	jint MediaDrm::EVENT_KEY_REQUIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"EVENT_KEY_REQUIRED");
	}
	jint MediaDrm::EVENT_PROVISION_REQUIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"EVENT_PROVISION_REQUIRED");
	}
	jint MediaDrm::EVENT_SESSION_RECLAIMED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"EVENT_SESSION_RECLAIMED");
	}
	jint MediaDrm::EVENT_VENDOR_DEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"EVENT_VENDOR_DEFINED");
	}
	jint MediaDrm::HDCP_LEVEL_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_LEVEL_UNKNOWN");
	}
	jint MediaDrm::HDCP_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_NONE");
	}
	jint MediaDrm::HDCP_NO_DIGITAL_OUTPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_NO_DIGITAL_OUTPUT");
	}
	jint MediaDrm::HDCP_V1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_V1");
	}
	jint MediaDrm::HDCP_V2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_V2");
	}
	jint MediaDrm::HDCP_V2_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_V2_1");
	}
	jint MediaDrm::HDCP_V2_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_V2_2");
	}
	jint MediaDrm::HDCP_V2_3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"HDCP_V2_3");
	}
	jint MediaDrm::KEY_TYPE_OFFLINE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"KEY_TYPE_OFFLINE");
	}
	jint MediaDrm::KEY_TYPE_RELEASE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"KEY_TYPE_RELEASE");
	}
	jint MediaDrm::KEY_TYPE_STREAMING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"KEY_TYPE_STREAMING");
	}
	jint MediaDrm::OFFLINE_LICENSE_STATE_RELEASED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"OFFLINE_LICENSE_STATE_RELEASED");
	}
	jint MediaDrm::OFFLINE_LICENSE_STATE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"OFFLINE_LICENSE_STATE_UNKNOWN");
	}
	jint MediaDrm::OFFLINE_LICENSE_STATE_USABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"OFFLINE_LICENSE_STATE_USABLE");
	}
	QAndroidJniObject MediaDrm::PROPERTY_ALGORITHMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_ALGORITHMS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaDrm::PROPERTY_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_DESCRIPTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaDrm::PROPERTY_DEVICE_UNIQUE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_DEVICE_UNIQUE_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaDrm::PROPERTY_VENDOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_VENDOR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaDrm::PROPERTY_VERSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDrm",
			"PROPERTY_VERSION",
			"Ljava/lang/String;");
	}
	jint MediaDrm::SECURITY_LEVEL_HW_SECURE_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_HW_SECURE_ALL");
	}
	jint MediaDrm::SECURITY_LEVEL_HW_SECURE_CRYPTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_HW_SECURE_CRYPTO");
	}
	jint MediaDrm::SECURITY_LEVEL_HW_SECURE_DECODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_HW_SECURE_DECODE");
	}
	jint MediaDrm::SECURITY_LEVEL_SW_SECURE_CRYPTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_SW_SECURE_CRYPTO");
	}
	jint MediaDrm::SECURITY_LEVEL_SW_SECURE_DECODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_SW_SECURE_DECODE");
	}
	jint MediaDrm::SECURITY_LEVEL_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaDrm",
			"SECURITY_LEVEL_UNKNOWN");
	}
	
	// Constructors
	void MediaDrm::__constructor(__jni_impl::java::util::UUID arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDrm",
			"(Ljava/util/UUID;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void MediaDrm::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	void MediaDrm::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V");
	}
	QAndroidJniObject MediaDrm::getKeyRequest(jbyteArray arg0, jbyteArray arg1, jstring arg2, jint arg3, __jni_impl::java::util::HashMap arg4)
	{
		return __thiz.callObjectMethod(
			"getKeyRequest",
			"([B[BLjava/lang/String;ILjava/util/HashMap;)Landroid/media/MediaDrm$KeyRequest;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object());
	}
	QAndroidJniObject MediaDrm::provideKeyResponse(jbyteArray arg0, jbyteArray arg1)
	{
		return __thiz.callObjectMethod(
			"provideKeyResponse",
			"([B[B)[B",
			arg0,
			arg1);
	}
	void MediaDrm::restoreKeys(jbyteArray arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"restoreKeys",
			"([B[B)V",
			arg0,
			arg1);
	}
	QAndroidJniObject MediaDrm::getMetrics()
	{
		return __thiz.callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;");
	}
	jboolean MediaDrm::isCryptoSchemeSupported(__jni_impl::java::util::UUID arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.MediaDrm",
			"isCryptoSchemeSupported",
			"(Ljava/util/UUID;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1);
	}
	jboolean MediaDrm::isCryptoSchemeSupported(__jni_impl::java::util::UUID arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.MediaDrm",
			"isCryptoSchemeSupported",
			"(Ljava/util/UUID;)Z",
			arg0.__jniObject().object());
	}
	jboolean MediaDrm::isCryptoSchemeSupported(__jni_impl::java::util::UUID arg0, jstring arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.MediaDrm",
			"isCryptoSchemeSupported",
			"(Ljava/util/UUID;Ljava/lang/String;I)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	QAndroidJniObject MediaDrm::openSession(jint arg0)
	{
		return __thiz.callObjectMethod(
			"openSession",
			"(I)[B",
			arg0);
	}
	QAndroidJniObject MediaDrm::openSession()
	{
		return __thiz.callObjectMethod(
			"openSession",
			"()[B");
	}
	void MediaDrm::setOnEventListener(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setOnEventListener",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaDrm$OnEventListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void MediaDrm::setOnEventListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnEventListener",
			"(Landroid/media/MediaDrm$OnEventListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void MediaDrm::setOnEventListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnEventListener",
			"(Landroid/media/MediaDrm$OnEventListener;)V",
			arg0.__jniObject().object());
	}
	void MediaDrm::setOnExpirationUpdateListener(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setOnExpirationUpdateListener",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaDrm$OnExpirationUpdateListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void MediaDrm::setOnExpirationUpdateListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnExpirationUpdateListener",
			"(Landroid/media/MediaDrm$OnExpirationUpdateListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void MediaDrm::clearOnExpirationUpdateListener()
	{
		__thiz.callMethod<void>(
			"clearOnExpirationUpdateListener",
			"()V");
	}
	void MediaDrm::setOnKeyStatusChangeListener(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setOnKeyStatusChangeListener",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaDrm$OnKeyStatusChangeListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void MediaDrm::setOnKeyStatusChangeListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnKeyStatusChangeListener",
			"(Landroid/media/MediaDrm$OnKeyStatusChangeListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void MediaDrm::clearOnKeyStatusChangeListener()
	{
		__thiz.callMethod<void>(
			"clearOnKeyStatusChangeListener",
			"()V");
	}
	void MediaDrm::setOnSessionLostStateListener(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setOnSessionLostStateListener",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaDrm$OnSessionLostStateListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void MediaDrm::setOnSessionLostStateListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnSessionLostStateListener",
			"(Landroid/media/MediaDrm$OnSessionLostStateListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void MediaDrm::clearOnSessionLostStateListener()
	{
		__thiz.callMethod<void>(
			"clearOnSessionLostStateListener",
			"()V");
	}
	void MediaDrm::clearOnEventListener()
	{
		__thiz.callMethod<void>(
			"clearOnEventListener",
			"()V");
	}
	void MediaDrm::closeSession(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"closeSession",
			"([B)V",
			arg0);
	}
	void MediaDrm::removeKeys(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"removeKeys",
			"([B)V",
			arg0);
	}
	QAndroidJniObject MediaDrm::queryKeyStatus(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"queryKeyStatus",
			"([B)Ljava/util/HashMap;",
			arg0);
	}
	QAndroidJniObject MediaDrm::getProvisionRequest()
	{
		return __thiz.callObjectMethod(
			"getProvisionRequest",
			"()Landroid/media/MediaDrm$ProvisionRequest;");
	}
	void MediaDrm::provideProvisionResponse(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"provideProvisionResponse",
			"([B)V",
			arg0);
	}
	QAndroidJniObject MediaDrm::getOfflineLicenseKeySetIds()
	{
		return __thiz.callObjectMethod(
			"getOfflineLicenseKeySetIds",
			"()Ljava/util/List;");
	}
	void MediaDrm::removeOfflineLicense(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"removeOfflineLicense",
			"([B)V",
			arg0);
	}
	jint MediaDrm::getOfflineLicenseState(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"getOfflineLicenseState",
			"([B)I",
			arg0);
	}
	QAndroidJniObject MediaDrm::getSecureStops()
	{
		return __thiz.callObjectMethod(
			"getSecureStops",
			"()Ljava/util/List;");
	}
	QAndroidJniObject MediaDrm::getSecureStopIds()
	{
		return __thiz.callObjectMethod(
			"getSecureStopIds",
			"()Ljava/util/List;");
	}
	QAndroidJniObject MediaDrm::getSecureStop(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"getSecureStop",
			"([B)[B",
			arg0);
	}
	void MediaDrm::releaseSecureStops(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"releaseSecureStops",
			"([B)V",
			arg0);
	}
	void MediaDrm::removeSecureStop(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"removeSecureStop",
			"([B)V",
			arg0);
	}
	void MediaDrm::removeAllSecureStops()
	{
		__thiz.callMethod<void>(
			"removeAllSecureStops",
			"()V");
	}
	void MediaDrm::releaseAllSecureStops()
	{
		__thiz.callMethod<void>(
			"releaseAllSecureStops",
			"()V");
	}
	jint MediaDrm::getConnectedHdcpLevel()
	{
		return __thiz.callMethod<jint>(
			"getConnectedHdcpLevel",
			"()I");
	}
	jint MediaDrm::getMaxHdcpLevel()
	{
		return __thiz.callMethod<jint>(
			"getMaxHdcpLevel",
			"()I");
	}
	jint MediaDrm::getOpenSessionCount()
	{
		return __thiz.callMethod<jint>(
			"getOpenSessionCount",
			"()I");
	}
	jint MediaDrm::getMaxSessionCount()
	{
		return __thiz.callMethod<jint>(
			"getMaxSessionCount",
			"()I");
	}
	jint MediaDrm::getMaxSecurityLevel()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.media.MediaDrm",
			"getMaxSecurityLevel",
			"()I");
	}
	jint MediaDrm::getSecurityLevel(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"getSecurityLevel",
			"([B)I",
			arg0);
	}
	QAndroidJniObject MediaDrm::getPropertyString(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getPropertyString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	void MediaDrm::setPropertyString(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setPropertyString",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	QAndroidJniObject MediaDrm::getPropertyByteArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getPropertyByteArray",
			"(Ljava/lang/String;)[B",
			arg0);
	}
	void MediaDrm::setPropertyByteArray(jstring arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"setPropertyByteArray",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1);
	}
	QAndroidJniObject MediaDrm::getCryptoSession(jbyteArray arg0, jstring arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"getCryptoSession",
			"([BLjava/lang/String;Ljava/lang/String;)Landroid/media/MediaDrm$CryptoSession;",
			arg0,
			arg1,
			arg2);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaDrm : public __jni_impl::android::media::MediaDrm
	{
	public:
		MediaDrm(QAndroidJniObject obj) { __thiz = obj; }
		MediaDrm(__jni_impl::java::util::UUID arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIADRM

