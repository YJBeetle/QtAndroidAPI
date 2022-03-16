#include "../../JByteArray.hpp"
#include "./TimedMetaData.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	TimedMetaData::TimedMetaData(jlong arg0, JByteArray arg1)
		: JObject(
			"android.media.TimedMetaData",
			"(J[B)V",
			arg0,
			arg1.object<jbyteArray>()
		) {}
	
	// Methods
	JByteArray TimedMetaData::getMetaData() const
	{
		return callObjectMethod(
			"getMetaData",
			"()[B"
		);
	}
	jlong TimedMetaData::getTimestamp() const
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
} // namespace android::media

