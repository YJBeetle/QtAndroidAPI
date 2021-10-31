#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaCasException_1 : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCasException_1(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaCasException_1(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

