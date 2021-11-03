#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./DrmInfo.hpp"

namespace android::drm
{
	// Fields
	
	// QJniObject forward
	DrmInfo::DrmInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DrmInfo::DrmInfo(jint arg0, JByteArray arg1, JString arg2)
		: JObject(
			"android.drm.DrmInfo",
			"(I[BLjava/lang/String;)V",
			arg0,
			arg1.object<jbyteArray>(),
			arg2.object<jstring>()
		) {}
	DrmInfo::DrmInfo(jint arg0, JString arg1, JString arg2)
		: JObject(
			"android.drm.DrmInfo",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	JObject DrmInfo::get(JString arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	JByteArray DrmInfo::getData()
	{
		return callObjectMethod(
			"getData",
			"()[B"
		);
	}
	jint DrmInfo::getInfoType()
	{
		return callMethod<jint>(
			"getInfoType",
			"()I"
		);
	}
	JString DrmInfo::getMimeType()
	{
		return callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		);
	}
	JObject DrmInfo::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	JObject DrmInfo::keyIterator()
	{
		return callObjectMethod(
			"keyIterator",
			"()Ljava/util/Iterator;"
		);
	}
	void DrmInfo::put(JString arg0, JObject arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
} // namespace android::drm

