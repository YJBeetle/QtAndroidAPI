#pragma once

#include "../../__JniBaseClass.hpp"

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
	class Surface : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint ROTATION_0();
		static jint ROTATION_180();
		static jint ROTATION_270();
		static jint ROTATION_90();
		
		Surface(QAndroidJniObject obj);
		// Constructors
		Surface(android::graphics::SurfaceTexture arg0);
		Surface(android::view::SurfaceControl arg0);
		Surface() = default;
		
		// Methods
		jint describeContents();
		jboolean isValid();
		QAndroidJniObject lockCanvas(android::graphics::Rect arg0);
		QAndroidJniObject lockHardwareCanvas();
		void readFromParcel(android::os::Parcel arg0);
		void release();
		jstring toString();
		void unlockCanvas(android::graphics::Canvas arg0);
		void unlockCanvasAndPost(android::graphics::Canvas arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

