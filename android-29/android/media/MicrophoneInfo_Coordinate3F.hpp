#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MicrophoneInfo_Coordinate3F : public __JniBaseClass
	{
	public:
		// Fields
		jfloat x();
		jfloat y();
		jfloat z();
		
		MicrophoneInfo_Coordinate3F(QAndroidJniObject obj);
		// Constructors
		MicrophoneInfo_Coordinate3F() = default;
		
		// Methods
		jboolean equals(jobject arg0);
	};
} // namespace android::media

