#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JArray;
namespace android::content
{
	class Context;
}
namespace android::media
{
	class MediaCas_Session;
}
namespace android::os
{
	class Handler;
}
class JString;

namespace android::media
{
	class MediaCas : public JObject
	{
	public:
		// Fields
		static jint PLUGIN_STATUS_PHYSICAL_MODULE_CHANGED();
		static jint PLUGIN_STATUS_SESSION_NUMBER_CHANGED();
		static jint SCRAMBLING_MODE_AES128();
		static jint SCRAMBLING_MODE_AES_ECB();
		static jint SCRAMBLING_MODE_AES_SCTE52();
		static jint SCRAMBLING_MODE_DVB_CISSA_V1();
		static jint SCRAMBLING_MODE_DVB_CSA1();
		static jint SCRAMBLING_MODE_DVB_CSA2();
		static jint SCRAMBLING_MODE_DVB_CSA3_ENHANCE();
		static jint SCRAMBLING_MODE_DVB_CSA3_MINIMAL();
		static jint SCRAMBLING_MODE_DVB_CSA3_STANDARD();
		static jint SCRAMBLING_MODE_DVB_IDSA();
		static jint SCRAMBLING_MODE_MULTI2();
		static jint SCRAMBLING_MODE_RESERVED();
		static jint SCRAMBLING_MODE_TDES_ECB();
		static jint SCRAMBLING_MODE_TDES_SCTE52();
		static jint SESSION_USAGE_LIVE();
		static jint SESSION_USAGE_PLAYBACK();
		static jint SESSION_USAGE_RECORD();
		static jint SESSION_USAGE_TIMESHIFT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCas(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCas(QAndroidJniObject obj);
		
		// Constructors
		MediaCas(jint arg0);
		MediaCas(android::content::Context arg0, jint arg1, JString arg2, jint arg3);
		
		// Methods
		static JArray enumeratePlugins();
		static jboolean isSystemIdSupported(jint arg0);
		void close() const;
		android::media::MediaCas_Session openSession() const;
		android::media::MediaCas_Session openSession(jint arg0, jint arg1) const;
		void processEmm(JByteArray arg0) const;
		void processEmm(JByteArray arg0, jint arg1, jint arg2) const;
		void provision(JString arg0) const;
		void refreshEntitlements(jint arg0, JByteArray arg1) const;
		void sendEvent(jint arg0, jint arg1, JByteArray arg2) const;
		void setEventListener(JObject arg0, android::os::Handler arg1) const;
		void setPrivateData(JByteArray arg0) const;
	};
} // namespace android::media

