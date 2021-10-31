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
		
		// QJniObject forward
		template<typename ...Ts> explicit MicrophoneInfo_Coordinate3F(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MicrophoneInfo_Coordinate3F(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
	};
} // namespace android::media

