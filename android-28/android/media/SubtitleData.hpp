#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class SubtitleData : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SubtitleData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SubtitleData(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JByteArray getData() const;
		jlong getDurationUs() const;
		jlong getStartTimeUs() const;
		jint getTrackIndex() const;
	};
} // namespace android::media

