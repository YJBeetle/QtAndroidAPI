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
	
	// QAndroidJniObject forward
	DrmInitData_SchemeInitData::DrmInitData_SchemeInitData(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DrmInitData_SchemeInitData::DrmInitData_SchemeInitData(java::util::UUID arg0, jstring arg1, jbyteArray arg2)
		: __JniBaseClass(
			"android.media.DrmInitData$SchemeInitData",
			"(Ljava/util/UUID;Ljava/lang/String;[B)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
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

