#include "./DrmInitData_SchemeInitData.hpp"

namespace android::media
{
	// Fields
	jbyteArray DrmInitData_SchemeInitData::data()
	{
		return __thiz.getObjectField(
			"data",
			"[B"
		).object<jbyteArray>();
	}
	jstring DrmInitData_SchemeInitData::mimeType()
	{
		return __thiz.getObjectField(
			"mimeType",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	DrmInitData_SchemeInitData::DrmInitData_SchemeInitData(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean DrmInitData_SchemeInitData::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint DrmInitData_SchemeInitData::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::media

