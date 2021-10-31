#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaCommunicationManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCommunicationManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaCommunicationManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getSession2Tokens();
		jint getVersion();
	};
} // namespace android::media

