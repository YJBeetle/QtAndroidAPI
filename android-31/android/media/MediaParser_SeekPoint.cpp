#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	
	// QJniObject forward
	MediaParser_SeekPoint::MediaParser_SeekPoint(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean MediaParser_SeekPoint::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint MediaParser_SeekPoint::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString MediaParser_SeekPoint::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

