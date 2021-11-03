#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics
{
	class SurfaceTexture;
}
namespace android::os
{
	class Parcel;
}
namespace android::view
{
	class SurfaceControl;
}

namespace android::view
{
	class Surface : public JObject
	{
	public:
		// Fields
		static jint CHANGE_FRAME_RATE_ALWAYS();
		static jint CHANGE_FRAME_RATE_ONLY_IF_SEAMLESS();
		static JObject CREATOR();
		static jint FRAME_RATE_COMPATIBILITY_DEFAULT();
		static jint FRAME_RATE_COMPATIBILITY_FIXED_SOURCE();
		static jint ROTATION_0();
		static jint ROTATION_180();
		static jint ROTATION_270();
		static jint ROTATION_90();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Surface(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Surface(QAndroidJniObject obj);
		
		// Constructors
		Surface(android::graphics::SurfaceTexture arg0);
		Surface(android::view::SurfaceControl arg0);
		
		// Methods
		jint describeContents();
		jboolean isValid();
		android::graphics::Canvas lockCanvas(android::graphics::Rect arg0);
		android::graphics::Canvas lockHardwareCanvas();
		void readFromParcel(android::os::Parcel arg0);
		void release();
		void setFrameRate(jfloat arg0, jint arg1);
		void setFrameRate(jfloat arg0, jint arg1, jint arg2);
		jstring toString();
		void unlockCanvas(android::graphics::Canvas arg0);
		void unlockCanvasAndPost(android::graphics::Canvas arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

