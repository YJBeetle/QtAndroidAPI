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
	
	// QJniObject forward
	MediaTimestamp::MediaTimestamp(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaTimestamp::MediaTimestamp(jlong arg0, jlong arg1, jfloat arg2)
		: __JniBaseClass(
			"android.media.MediaTimestamp",
			"(JJF)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jboolean MediaTimestamp::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
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
	jstring MediaTimestamp::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media

