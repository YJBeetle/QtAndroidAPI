#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::media
{
	class MediaCas : public __JniBaseClass
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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCas(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaCas(QJniObject obj);
		
		// Constructors
		MediaCas(jint arg0);
		MediaCas(android::content::Context arg0, jint arg1, jstring arg2, jint arg3);
		
		// Methods
		static jarray enumeratePlugins();
		static jboolean isSystemIdSupported(jint arg0);
		void close();
		android::media::MediaCas_Session openSession();
		android::media::MediaCas_Session openSession(jint arg0, jint arg1);
		void processEmm(jbyteArray arg0);
		void processEmm(jbyteArray arg0, jint arg1, jint arg2);
		void provision(jstring arg0);
		void refreshEntitlements(jint arg0, jbyteArray arg1);
		void sendEvent(jint arg0, jint arg1, jbyteArray arg2);
		void setEventListener(__JniBaseClass arg0, android::os::Handler arg1);
		void setPrivateData(jbyteArray arg0);
	};
} // namespace android::media

