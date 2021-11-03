#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/UUID.hpp"
#include "./DrmInitData_SchemeInitData.hpp"

namespace android::media
{
	// Fields
	java::util::UUID DrmInitData_SchemeInitData::UUID_NIL()
	{
		return getStaticObjectField(
			"android.media.DrmInitData$SchemeInitData",
			"UUID_NIL",
			"Ljava/util/UUID;"
		);
	}
	JByteArray DrmInitData_SchemeInitData::data()
	{
		return getObjectField(
			"data",
			"[B"
		);
	}
	JString DrmInitData_SchemeInitData::mimeType()
	{
		return getObjectField(
			"mimeType",
			"Ljava/lang/String;"
		);
	}
	java::util::UUID DrmInitData_SchemeInitData::uuid()
	{
		return getObjectField(
			"uuid",
			"Ljava/util/UUID;"
		);
	}
	
	// QAndroidJniObject forward
	DrmInitData_SchemeInitData::DrmInitData_SchemeInitData(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean DrmInitData_SchemeInitData::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint DrmInitData_SchemeInitData::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::media

