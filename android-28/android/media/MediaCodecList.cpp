#include "../../JArray.hpp"
#include "./MediaCodecInfo.hpp"
#include "./MediaFormat.hpp"
#include "../../JString.hpp"
#include "./MediaCodecList.hpp"

namespace android::media
{
	// Fields
	jint MediaCodecList::ALL_CODECS()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecList",
			"ALL_CODECS"
		);
	}
	jint MediaCodecList::REGULAR_CODECS()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecList",
			"REGULAR_CODECS"
		);
	}
	
	// QJniObject forward
	MediaCodecList::MediaCodecList(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaCodecList::MediaCodecList(jint arg0)
		: JObject(
			"android.media.MediaCodecList",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint MediaCodecList::getCodecCount()
	{
		return callStaticMethod<jint>(
			"android.media.MediaCodecList",
			"getCodecCount",
			"()I"
		);
	}
	android::media::MediaCodecInfo MediaCodecList::getCodecInfoAt(jint arg0)
	{
		return callStaticObjectMethod(
			"android.media.MediaCodecList",
			"getCodecInfoAt",
			"(I)Landroid/media/MediaCodecInfo;",
			arg0
		);
	}
	JString MediaCodecList::findDecoderForFormat(android::media::MediaFormat arg0) const
	{
		return callObjectMethod(
			"findDecoderForFormat",
			"(Landroid/media/MediaFormat;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString MediaCodecList::findEncoderForFormat(android::media::MediaFormat arg0) const
	{
		return callObjectMethod(
			"findEncoderForFormat",
			"(Landroid/media/MediaFormat;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JArray MediaCodecList::getCodecInfos() const
	{
		return callObjectMethod(
			"getCodecInfos",
			"()[Landroid/media/MediaCodecInfo;"
		);
	}
} // namespace android::media

