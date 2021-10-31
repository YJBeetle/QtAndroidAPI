#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::hardware::camera2
{
	class CaptureRequest_Key : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CaptureRequest_Key(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CaptureRequest_Key(QJniObject obj);
		
		// Constructors
		CaptureRequest_Key(jstring arg0, jclass arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getName();
		jint hashCode();
		jstring toString();
	};
} // namespace android::hardware::camera2

