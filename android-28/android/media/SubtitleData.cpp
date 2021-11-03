#include "../../JByteArray.hpp"
#include "../os/Parcel.hpp"
#include "./SubtitleData.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	SubtitleData::SubtitleData(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
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

