#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JArray;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCas(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCas(QAndroidJniObject obj);
		
		// Constructors
		MediaCas(jint arg0);
		
		// Methods
		static JArray enumeratePlugins();
		static jboolean isSystemIdSupported(jint arg0);
		void close();
		android::media::MediaCas_Session openSession();
		void processEmm(JByteArray arg0);
		void processEmm(JByteArray arg0, jint arg1, jint arg2);
		void provision(JString arg0);
		void refreshEntitlements(jint arg0, JByteArray arg1);
		void sendEvent(jint arg0, jint arg1, JByteArray arg2);
		void setEventListener(JObject arg0, android::os::Handler arg1);
		void setPrivateData(JByteArray arg0);
	};
} // namespace android::media

