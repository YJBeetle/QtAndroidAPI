#pragma once

#include "../../JObject.hpp"

class JByteArray;
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
class JString;
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
	class MediaDrm : public JObject
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
		static jint KEY_TYPE_OFFLINE();
		static jint KEY_TYPE_RELEASE();
		static jint KEY_TYPE_STREAMING();
		static JString PROPERTY_ALGORITHMS();
		static JString PROPERTY_DESCRIPTION();
		static JString PROPERTY_DEVICE_UNIQUE_ID();
		static JString PROPERTY_VENDOR();
		static JString PROPERTY_VERSION();
		static jint SECURITY_LEVEL_HW_SECURE_ALL();
		static jint SECURITY_LEVEL_HW_SECURE_CRYPTO();
		static jint SECURITY_LEVEL_HW_SECURE_DECODE();
		static jint SECURITY_LEVEL_SW_SECURE_CRYPTO();
		static jint SECURITY_LEVEL_SW_SECURE_DECODE();
		static jint SECURITY_LEVEL_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaDrm(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrm(QAndroidJniObject obj);
		
		// Constructors
		MediaDrm(java::util::UUID arg0);
		
		// Methods
		static jint getMaxSecurityLevel();
		static jboolean isCryptoSchemeSupported(java::util::UUID arg0);
		static jboolean isCryptoSchemeSupported(java::util::UUID arg0, JString arg1);
		void close();
		void closeSession(JByteArray arg0);
		jint getConnectedHdcpLevel();
		android::media::MediaDrm_CryptoSession getCryptoSession(JByteArray arg0, JString arg1, JString arg2);
		android::media::MediaDrm_KeyRequest getKeyRequest(JByteArray arg0, JByteArray arg1, JString arg2, jint arg3, java::util::HashMap arg4);
		jint getMaxHdcpLevel();
		jint getMaxSessionCount();
		android::os::PersistableBundle getMetrics();
		jint getOpenSessionCount();
		JByteArray getPropertyByteArray(JString arg0);
		JString getPropertyString(JString arg0);
		android::media::MediaDrm_ProvisionRequest getProvisionRequest();
		JByteArray getSecureStop(JByteArray arg0);
		JObject getSecureStopIds();
		JObject getSecureStops();
		jint getSecurityLevel(JByteArray arg0);
		JByteArray openSession();
		JByteArray openSession(jint arg0);
		JByteArray provideKeyResponse(JByteArray arg0, JByteArray arg1);
		void provideProvisionResponse(JByteArray arg0);
		java::util::HashMap queryKeyStatus(JByteArray arg0);
		void release();
		void releaseAllSecureStops();
		void releaseSecureStops(JByteArray arg0);
		void removeAllSecureStops();
		void removeKeys(JByteArray arg0);
		void removeSecureStop(JByteArray arg0);
		void restoreKeys(JByteArray arg0, JByteArray arg1);
		void setOnEventListener(JObject arg0);
		void setOnExpirationUpdateListener(JObject arg0, android::os::Handler arg1);
		void setOnKeyStatusChangeListener(JObject arg0, android::os::Handler arg1);
		void setPropertyByteArray(JString arg0, JByteArray arg1);
		void setPropertyString(JString arg0, JString arg1);
	};
} // namespace android::media

