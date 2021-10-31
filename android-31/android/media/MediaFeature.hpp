#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaFeature : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaFeature(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaFeature(QJniObject obj);
		
		// Constructors
		MediaFeature();
		
		// Methods
	};
} // namespace android::media

