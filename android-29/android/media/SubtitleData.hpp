#pragma once

#include "../../JObject.hpp"

class JByteArray;

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
		SubtitleData(jint arg0, jlong arg1, jlong arg2, JByteArray arg3);
		
		// Methods
		JByteArray getData();
		jlong getDurationUs();
		jlong getStartTimeUs();
		jint getTrackIndex();
	};
} // namespace android::media

