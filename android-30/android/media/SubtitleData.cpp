#include "../../JByteArray.hpp"
#include "./SubtitleData.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	SubtitleData::SubtitleData(jint arg0, jlong arg1, jlong arg2, JByteArray arg3)
		: JObject(
			"android.media.SubtitleData",
			"(IJJ[B)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jbyteArray>()
		) {}
	
	// Methods
	JByteArray SubtitleData::getData() const
	{
		return callObjectMethod(
			"getData",
			"()[B"
		);
	}
	jlong SubtitleData::getDurationUs() const
	{
		return callMethod<jlong>(
			"getDurationUs",
			"()J"
		);
	}
	jlong SubtitleData::getStartTimeUs() const
	{
		return callMethod<jlong>(
			"getStartTimeUs",
			"()J"
		);
	}
	jint SubtitleData::getTrackIndex() const
	{
		return callMethod<jint>(
			"getTrackIndex",
			"()I"
		);
	}
} // namespace android::media

