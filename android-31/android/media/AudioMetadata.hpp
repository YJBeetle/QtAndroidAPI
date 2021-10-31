#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class AudioMetadata : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioMetadata(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioMetadata(QJniObject obj);
		
		// Constructors
		
		// Methods
		static __JniBaseClass createMap();
	};
} // namespace android::media

