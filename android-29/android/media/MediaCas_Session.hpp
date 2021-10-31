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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCas_Session(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaCas_Session(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jboolean equals(jobject arg0);
		void processEcm(jbyteArray arg0);
		void processEcm(jbyteArray arg0, jint arg1, jint arg2);
		void sendSessionEvent(jint arg0, jint arg1, jbyteArray arg2);
		void setPrivateData(jbyteArray arg0);
	};
} // namespace android::media

