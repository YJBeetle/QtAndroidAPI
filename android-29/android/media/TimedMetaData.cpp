#include "./TimedMetaData.hpp"

namespace android::media
{
	// Fields
	
	TimedMetaData::TimedMetaData(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TimedMetaData::TimedMetaData(jlong &arg0, jbyteArray &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.TimedMetaData",
			"(J[B)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jbyteArray TimedMetaData::getMetaData()
	{
		return __thiz.callObjectMethod(
			"getMetaData",
			"()[B"
		).object<jbyteArray>();
	}
	jlong TimedMetaData::getTimestamp()
	{
		return __thiz.callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
} // namespace android::media

