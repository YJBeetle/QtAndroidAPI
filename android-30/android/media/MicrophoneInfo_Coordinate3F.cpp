#include "./MicrophoneInfo_Coordinate3F.hpp"

namespace android::media
{
	// Fields
	jfloat MicrophoneInfo_Coordinate3F::x()
	{
		return getField<jfloat>(
			"x"
		);
	}
	jfloat MicrophoneInfo_Coordinate3F::y()
	{
		return getField<jfloat>(
			"y"
		);
	}
	jfloat MicrophoneInfo_Coordinate3F::z()
	{
		return getField<jfloat>(
			"z"
		);
	}
	
	// QJniObject forward
	MicrophoneInfo_Coordinate3F::MicrophoneInfo_Coordinate3F(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean MicrophoneInfo_Coordinate3F::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace android::media

