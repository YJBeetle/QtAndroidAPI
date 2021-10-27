#include "./MediaTimestamp.hpp"

namespace android::media
{
	// Fields
	QAndroidJniObject MediaTimestamp::TIMESTAMP_UNKNOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaTimestamp",
			"TIMESTAMP_UNKNOWN",
			"Landroid/media/MediaTimestamp;"
		);
	}
	
	MediaTimestamp::MediaTimestamp(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaTimestamp::MediaTimestamp(jlong &arg0, jlong &arg1, jfloat &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaTimestamp",
			"(JJF)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jboolean MediaTimestamp::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong MediaTimestamp::getAnchorMediaTimeUs()
	{
		return __thiz.callMethod<jlong>(
			"getAnchorMediaTimeUs",
			"()J"
		);
	}
	jlong MediaTimestamp::getAnchorSystemNanoTime()
	{
		return __thiz.callMethod<jlong>(
			"getAnchorSystemNanoTime",
			"()J"
		);
	}
	jlong MediaTimestamp::getAnchorSytemNanoTime()
	{
		return __thiz.callMethod<jlong>(
			"getAnchorSytemNanoTime",
			"()J"
		);
	}
	jfloat MediaTimestamp::getMediaClockRate()
	{
		return __thiz.callMethod<jfloat>(
			"getMediaClockRate",
			"()F"
		);
	}
	jstring MediaTimestamp::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media

