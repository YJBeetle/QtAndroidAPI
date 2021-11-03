#include "./DrmInfo.hpp"

namespace android::drm
{
	// Fields
	
	// QJniObject forward
	DrmInfo::DrmInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DrmInfo::DrmInfo(jint arg0, jbyteArray arg1, jstring arg2)
		: JObject(
			"android.drm.DrmInfo",
			"(I[BLjava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	DrmInfo::DrmInfo(jint arg0, jstring arg1, jstring arg2)
		: JObject(
			"android.drm.DrmInfo",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jobject DrmInfo::get(jstring arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jbyteArray DrmInfo::getData()
	{
		return callObjectMethod(
			"getData",
			"()[B"
		).object<jbyteArray>();
	}
	jint DrmInfo::getInfoType()
	{
		return callMethod<jint>(
			"getInfoType",
			"()I"
		);
	}
	jstring DrmInfo::getMimeType()
	{
		return callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	void DrmInfo::put(jstring arg0, jobject arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
} // namespace android::drm

