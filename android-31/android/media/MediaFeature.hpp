#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaFeature : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaFeature(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaFeature(QAndroidJniObject obj);
		
		// Constructors
		MediaFeature();
		
		// Methods
	};
} // namespace android::media

