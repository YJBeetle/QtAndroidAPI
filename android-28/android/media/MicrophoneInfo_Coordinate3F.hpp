#pragma once

#include "../../JObject.hpp"

class JObject;

namespace android::media
{
	class MicrophoneInfo_Coordinate3F : public JObject
	{
	public:
		// Fields
		jfloat x();
		jfloat y();
		jfloat z();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MicrophoneInfo_Coordinate3F(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MicrophoneInfo_Coordinate3F(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
	};
} // namespace android::media

