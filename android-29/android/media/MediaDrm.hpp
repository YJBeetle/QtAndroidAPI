#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaDrm_CryptoSession;
}
namespace android::media
{
	class MediaDrm_KeyRequest;
}
namespace android::media
{
	class MediaDrm_ProvisionRequest;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class PersistableBundle;
}
namespace java::util
{
	class HashMap;
}
namespace java::util
{
	class UUID;
}

namespace android::media
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
		static jstring PROPERTY_ALGORITHMS();
		static jstring PROPERTY_DESCRIPTION();
		static jstring PROPERTY_DEVICE_UNIQUE_ID();
		static jstring PROPERTY_VENDOR();
		static jstring PROPERTY_VERSION();
		static jint SECURITY_LEVEL_HW_SECURE_ALL();
		static jint SECURITY_LEVEL_HW_SECURE_CRYPTO();
		static jint SECURITY_LEVEL_HW_SECURE_DECODE();
		static jint SECURITY_LEVEL_SW_SECURE_CRYPTO();
		static jint SECURITY_LEVEL_SW_SECURE_DECODE();
		static jint SECURITY_LEVEL_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaDrm(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrm(QAndroidJniObject obj);
		
		// Constructors
		MediaDrm(java::util::UUID arg0);
		
		// Methods
		static jint getMaxSecurityLevel();
		static jboolean isCryptoSchemeSupported(java::util::UUID arg0);
		static jboolean isCryptoSchemeSupported(java::util::UUID arg0, jstring arg1);
		static jboolean isCryptoSchemeSupported(java::util::UUID arg0, jstring arg1, jint arg2);
		void clearOnEventListener();
		void clearOnExpirationUpdateListener();
		void clearOnKeyStatusChangeListener();
		void clearOnSessionLostStateListener();
		void close();
		void closeSession(jbyteArray arg0);
		jint getConnectedHdcpLevel();
		android::media::MediaDrm_CryptoSession getCryptoSession(jbyteArray arg0, jstring arg1, jstring arg2);
		android::media::MediaDrm_KeyRequest getKeyRequest(jbyteArray arg0, jbyteArray arg1, jstring arg2, jint arg3, java::util::HashMap arg4);
		jint getMaxHdcpLevel();
		jint getMaxSessionCount();
		android::os::PersistableBundle getMetrics();
		__JniBaseClass getOfflineLicenseKeySetIds();
		jint getOfflineLicenseState(jbyteArray arg0);
		jint getOpenSessionCount();
		jbyteArray getPropertyByteArray(jstring arg0);
		jstring getPropertyString(jstring arg0);
		android::media::MediaDrm_ProvisionRequest getProvisionRequest();
		jbyteArray getSecureStop(jbyteArray arg0);
		__JniBaseClass getSecureStopIds();
		__JniBaseClass getSecureStops();
		jint getSecurityLevel(jbyteArray arg0);
		jbyteArray openSession();
		jbyteArray openSession(jint arg0);
		jbyteArray provideKeyResponse(jbyteArray arg0, jbyteArray arg1);
		void provideProvisionResponse(jbyteArray arg0);
		java::util::HashMap queryKeyStatus(jbyteArray arg0);
		void release();
		void releaseAllSecureStops();
		void releaseSecureStops(jbyteArray arg0);
		void removeAllSecureStops();
		void removeKeys(jbyteArray arg0);
		void removeOfflineLicense(jbyteArray arg0);
		void removeSecureStop(jbyteArray arg0);
		void restoreKeys(jbyteArray arg0, jbyteArray arg1);
		void setOnEventListener(__JniBaseClass arg0);
		void setOnEventListener(__JniBaseClass arg0, android::os::Handler arg1);
		void setOnEventListener(__JniBaseClass arg0, __JniBaseClass arg1);
		void setOnExpirationUpdateListener(__JniBaseClass arg0, android::os::Handler arg1);
		void setOnExpirationUpdateListener(__JniBaseClass arg0, __JniBaseClass arg1);
		void setOnKeyStatusChangeListener(__JniBaseClass arg0, android::os::Handler arg1);
		void setOnKeyStatusChangeListener(__JniBaseClass arg0, __JniBaseClass arg1);
		void setOnSessionLostStateListener(__JniBaseClass arg0, android::os::Handler arg1);
		void setOnSessionLostStateListener(__JniBaseClass arg0, __JniBaseClass arg1);
		void setPropertyByteArray(jstring arg0, jbyteArray arg1);
		void setPropertyString(jstring arg0, jstring arg1);
	};
} // namespace android::media

