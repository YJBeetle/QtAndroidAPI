#include "./MediaParser_SeekPoint.hpp"

namespace android::media
{
	// Fields
	android::media::MediaParser_SeekPoint MediaParser_SeekPoint::START()
	{
		return getStaticObjectField(
			"android.media.MediaParser$SeekPoint",
			"START",
			"Landroid/media/MediaParser$SeekPoint;"
		);
	}
	jlong MediaParser_SeekPoint::position()
	{
		return getField<jlong>(
			"position"
		);
	}
	jlong MediaParser_SeekPoint::timeMicros()
	{
		return getField<jlong>(
			"timeMicros"
		);
	}
	
	// QAndroidJniObject forward
	MediaParser_SeekPoint::MediaParser_SeekPoint(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean MediaParser_SeekPoint::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint MediaParser_SeekPoint::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring MediaParser_SeekPoint::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media

