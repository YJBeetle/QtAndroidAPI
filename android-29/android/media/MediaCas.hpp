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
		
		MediaCas(QAndroidJniObject obj);
		// Constructors
		MediaCas(jint &arg0);
		MediaCas() = default;
		
		// Methods
		static jarray enumeratePlugins();
		static jboolean isSystemIdSupported(jint arg0);
		void close();
		QAndroidJniObject openSession();
		void processEmm(jbyteArray arg0);
		void processEmm(jbyteArray arg0, jint arg1, jint arg2);
		void provision(jstring arg0);
		void provision(const QString &arg0);
		void refreshEntitlements(jint arg0, jbyteArray arg1);
		void sendEvent(jint arg0, jint arg1, jbyteArray arg2);
		void setEventListener(__JniBaseClass arg0, android::os::Handler arg1);
		void setPrivateData(jbyteArray arg0);
	};
} // namespace android::media

