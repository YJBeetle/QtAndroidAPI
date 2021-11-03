#include "../../JByteArray.hpp"
#include "../os/Parcel.hpp"
#include "./SubtitleData.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	SubtitleData::SubtitleData(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JByteArray SubtitleData::getData()
	{
		return callObjectMethod(
			"getData",
			"()[B"
		);
	}
	jlong SubtitleData::getDurationUs()
	{
		return callMethod<jlong>(
			"getDurationUs",
			"()J"
		);
	}
	jlong SubtitleData::getStartTimeUs()
	{
		return callMethod<jlong>(
			"getStartTimeUs",
			"()J"
		);
	}
	jint SubtitleData::getTrackIndex()
	{
		return callMethod<jint>(
			"getTrackIndex",
			"()I"
		);
	}
} // namespace android::media

