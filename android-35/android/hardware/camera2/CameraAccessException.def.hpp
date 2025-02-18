#pragma once

#include "../../util/AndroidException.def.hpp"

class JString;
class JThrowable;

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
		CameraAccessException(QJniObject obj) : android::util::AndroidException(obj) {}
		
		// Constructors
		CameraAccessException(jint arg0);
		CameraAccessException(jint arg0, JString arg1);
		CameraAccessException(jint arg0, JThrowable arg1);
		CameraAccessException(jint arg0, JString arg1, JThrowable arg2);
		
		// Methods
		jint getReason() const;
	};
} // namespace android::hardware::camera2

