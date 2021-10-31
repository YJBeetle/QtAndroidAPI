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
	jbyteArray DrmInitData_SchemeInitData::data()
	{
		return getObjectField(
			"data",
			"[B"
		).object<jbyteArray>();
	}
	jstring DrmInitData_SchemeInitData::mimeType()
	{
		return getObjectField(
			"mimeType",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	java::util::UUID DrmInitData_SchemeInitData::uuid()
	{
		return getObjectField(
			"uuid",
			"Ljava/util/UUID;"
		);
	}
	
	// QJniObject forward
	DrmInitData_SchemeInitData::DrmInitData_SchemeInitData(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean DrmInitData_SchemeInitData::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
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

