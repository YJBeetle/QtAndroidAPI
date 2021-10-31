#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../util/AndroidException.hpp"


namespace android::hardware::camera2
{
	class CameraAccessException : public android::util::AndroidException
	{
	public:
		// Fields
		static jint CAMERA_DISABLED();
		static jint CAMERA_DISCONNECTED();
		static jint CAMERA_ERROR();
		static jint CAMERA_IN_USE();
		static jint MAX_CAMERAS_IN_USE();
		
		// QJniObject forward
		template<typename ...Ts> explicit CameraAccessException(const char *className, const char *sig, Ts...agv) : android::util::AndroidException(className, sig, std::forward<Ts>(agv)...) {}
		CameraAccessException(QJniObject obj);
		
		// Constructors
		CameraAccessException(jint arg0);
		CameraAccessException(jint arg0, jstring arg1);
		CameraAccessException(jint arg0, jthrowable arg1);
		CameraAccessException(jint arg0, jstring arg1, jthrowable arg2);
		
		// Methods
		jint getReason();
	};
} // namespace android::hardware::camera2

