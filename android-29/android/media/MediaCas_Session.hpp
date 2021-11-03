#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::media
{
	class MediaCas;
}
class JObject;
namespace java::util
{
	class ArrayList;
}

namespace android::media
{
	class MediaCas_Session : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCas_Session(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCas_Session(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jboolean equals(JObject arg0);
		void processEcm(JByteArray arg0);
		void processEcm(JByteArray arg0, jint arg1, jint arg2);
		void sendSessionEvent(jint arg0, jint arg1, JByteArray arg2);
		void setPrivateData(JByteArray arg0);
	};
} // namespace android::media

