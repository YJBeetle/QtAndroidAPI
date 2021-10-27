#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaCas;
}
namespace java::util
{
	class ArrayList;
}

namespace android::media
{
	class MediaCas_Session : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaCas_Session(QAndroidJniObject obj);
		// Constructors
		MediaCas_Session() = default;
		
		// Methods
		void close();
		jboolean equals(jobject arg0);
		void processEcm(jbyteArray arg0);
		void processEcm(jbyteArray arg0, jint arg1, jint arg2);
		void sendSessionEvent(jint arg0, jint arg1, jbyteArray arg2);
		void setPrivateData(jbyteArray arg0);
	};
} // namespace android::media

