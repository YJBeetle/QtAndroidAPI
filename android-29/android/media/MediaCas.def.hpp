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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCas(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCas(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaCas(jint arg0);
		
		// Methods
		static JArray enumeratePlugins();
		static jboolean isSystemIdSupported(jint arg0);
		void close() const;
		android::media::MediaCas_Session openSession() const;
		void processEmm(JByteArray arg0) const;
		void processEmm(JByteArray arg0, jint arg1, jint arg2) const;
		void provision(JString arg0) const;
		void refreshEntitlements(jint arg0, JByteArray arg1) const;
		void sendEvent(jint arg0, jint arg1, JByteArray arg2) const;
		void setEventListener(JObject arg0, android::os::Handler arg1) const;
		void setPrivateData(JByteArray arg0) const;
	};
} // namespace android::media

