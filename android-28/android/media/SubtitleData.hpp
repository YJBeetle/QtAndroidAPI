#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class SubtitleData : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SubtitleData(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SubtitleData(QJniObject obj);
		
		// Constructors
		
		// Methods
		jbyteArray getData();
		jlong getDurationUs();
		jlong getStartTimeUs();
		jint getTrackIndex();
	};
} // namespace android::media

