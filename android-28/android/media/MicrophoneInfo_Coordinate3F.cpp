#include "../../JObject.hpp"
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
	
	// Constructors
	
	// Methods
	jboolean MicrophoneInfo_Coordinate3F::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
} // namespace android::media

