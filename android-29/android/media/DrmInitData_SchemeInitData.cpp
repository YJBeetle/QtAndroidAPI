#include "./DrmInitData_SchemeInitData.hpp"

namespace android::media
{
	// Fields
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

