#include "../util/Pair.hpp"
#include "./MediaParser_SeekMap.hpp"

namespace android::media
{
	// Fields
	jint MediaParser_SeekMap::UNKNOWN_DURATION()
	{
		return getStaticField<jint>(
			"android.media.MediaParser$SeekMap",
			"UNKNOWN_DURATION"
		);
	}
	
	// QAndroidJniObject forward
	MediaParser_SeekMap::MediaParser_SeekMap(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jlong MediaParser_SeekMap::getDurationMicros()
	{
		return callMethod<jlong>(
			"getDurationMicros",
			"()J"
		);
	}
	android::util::Pair MediaParser_SeekMap::getSeekPoints(jlong arg0)
	{
		return callObjectMethod(
			"getSeekPoints",
			"(J)Landroid/util/Pair;",
			arg0
		);
	}
	jboolean MediaParser_SeekMap::isSeekable()
	{
		return callMethod<jboolean>(
			"isSeekable",
			"()Z"
		);
	}
} // namespace android::media

