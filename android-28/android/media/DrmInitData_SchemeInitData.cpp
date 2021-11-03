#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./DrmInitData_SchemeInitData.hpp"

namespace android::media
{
	// Fields
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
	
	// QJniObject forward
	DrmInitData_SchemeInitData::DrmInitData_SchemeInitData(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean DrmInitData_SchemeInitData::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint DrmInitData_SchemeInitData::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::media

