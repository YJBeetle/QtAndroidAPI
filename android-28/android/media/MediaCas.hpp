#pragma once

#include "../../__JniBaseClass.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCas(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaCas(QAndroidJniObject obj);
		
		// Constructors
		MediaCas(jint arg0);
		
		// Methods
		static jarray enumeratePlugins();
		static jboolean isSystemIdSupported(jint arg0);
		void close();
		android::media::MediaCas_Session openSession();
		void processEmm(jbyteArray arg0);
		void processEmm(jbyteArray arg0, jint arg1, jint arg2);
		void provision(jstring arg0);
		void refreshEntitlements(jint arg0, jbyteArray arg1);
		void sendEvent(jint arg0, jint arg1, jbyteArray arg2);
		void setEventListener(__JniBaseClass arg0, android::os::Handler arg1);
		void setPrivateData(jbyteArray arg0);
	};
} // namespace android::media

