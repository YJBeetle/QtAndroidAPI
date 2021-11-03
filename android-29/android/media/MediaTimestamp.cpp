#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MediaTimestamp.hpp"

namespace android::media
{
	// Fields
	android::media::MediaTimestamp MediaTimestamp::TIMESTAMP_UNKNOWN()
	{
		return getStaticObjectField(
			"android.media.MediaTimestamp",
			"TIMESTAMP_UNKNOWN",
			"Landroid/media/MediaTimestamp;"
		);
	}
	
	// QAndroidJniObject forward
	MediaTimestamp::MediaTimestamp(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaTimestamp::MediaTimestamp(jlong arg0, jlong arg1, jfloat arg2)
		: JObject(
			"android.media.MediaTimestamp",
			"(JJF)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jboolean MediaTimestamp::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jlong MediaTimestamp::getAnchorMediaTimeUs()
	{
		return callMethod<jlong>(
			"getAnchorMediaTimeUs",
			"()J"
		);
	}
	jlong MediaTimestamp::getAnchorSystemNanoTime()
	{
		return callMethod<jlong>(
			"getAnchorSystemNanoTime",
			"()J"
		);
	}
	jlong MediaTimestamp::getAnchorSytemNanoTime()
	{
		return callMethod<jlong>(
			"getAnchorSytemNanoTime",
			"()J"
		);
	}
	jfloat MediaTimestamp::getMediaClockRate()
	{
		return callMethod<jfloat>(
			"getMediaClockRate",
			"()F"
		);
	}
	JString MediaTimestamp::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

