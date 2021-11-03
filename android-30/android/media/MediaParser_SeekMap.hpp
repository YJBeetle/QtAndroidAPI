#pragma once

#include "../../JObject.hpp"

namespace android::util
{
	class Pair;
}

namespace android::media
{
	class MediaParser_SeekMap : public JObject
	{
	public:
		// Fields
		static jint UNKNOWN_DURATION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaParser_SeekMap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaParser_SeekMap(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jlong getDurationMicros() const;
		android::util::Pair getSeekPoints(jlong arg0) const;
		jboolean isSeekable() const;
	};
} // namespace android::media

