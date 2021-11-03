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
	
	// QJniObject forward
	MediaParser_SeekMap::MediaParser_SeekMap(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jlong MediaParser_SeekMap::getDurationMicros() const
	{
		return callMethod<jlong>(
			"getDurationMicros",
			"()J"
		);
	}
	android::util::Pair MediaParser_SeekMap::getSeekPoints(jlong arg0) const
	{
		return callObjectMethod(
			"getSeekPoints",
			"(J)Landroid/util/Pair;",
			arg0
		);
	}
	jboolean MediaParser_SeekMap::isSeekable() const
	{
		return callMethod<jboolean>(
			"isSeekable",
			"()Z"
		);
	}
} // namespace android::media

