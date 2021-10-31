#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaCommunicationManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCommunicationManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaCommunicationManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getSession2Tokens();
		jint getVersion();
	};
} // namespace android::media

