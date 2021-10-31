#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::util
{
	class Pair;
}

namespace android::media
{
	class MediaParser_SeekMap : public __JniBaseClass
	{
	public:
		// Fields
		static jint UNKNOWN_DURATION();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaParser_SeekMap(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaParser_SeekMap(QJniObject obj);
		
		// Constructors
		
		// Methods
		jlong getDurationMicros();
		android::util::Pair getSeekPoints(jlong arg0);
		jboolean isSeekable();
	};
} // namespace android::media

