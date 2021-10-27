#include "./MicrophoneInfo_Coordinate3F.hpp"

namespace android::media
{
	// Fields
	jfloat MicrophoneInfo_Coordinate3F::x()
	{
		return __thiz.getField<jfloat>(
			"x"
		);
	}
	jfloat MicrophoneInfo_Coordinate3F::y()
	{
		return __thiz.getField<jfloat>(
			"y"
		);
	}
	jfloat MicrophoneInfo_Coordinate3F::z()
	{
		return __thiz.getField<jfloat>(
			"z"
		);
	}
	
	MicrophoneInfo_Coordinate3F::MicrophoneInfo_Coordinate3F(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean MicrophoneInfo_Coordinate3F::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace android::media

