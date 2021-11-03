#include "./TimedMetaData.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	TimedMetaData::TimedMetaData(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TimedMetaData::TimedMetaData(jlong arg0, jbyteArray arg1)
		: JObject(
			"android.media.TimedMetaData",
			"(J[B)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jbyteArray TimedMetaData::getMetaData()
	{
		return callObjectMethod(
			"getMetaData",
			"()[B"
		).object<jbyteArray>();
	}
	jlong TimedMetaData::getTimestamp()
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
} // namespace android::media

