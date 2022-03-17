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
class JString;

namespace android::view
{
	class Surface : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint ROTATION_0();
		static jint ROTATION_180();
		static jint ROTATION_270();
		static jint ROTATION_90();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Surface(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Surface(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Surface(android::graphics::SurfaceTexture arg0);
		
		// Methods
		jint describeContents() const;
		jboolean isValid() const;
		android::graphics::Canvas lockCanvas(android::graphics::Rect arg0) const;
		android::graphics::Canvas lockHardwareCanvas() const;
		void readFromParcel(android::os::Parcel arg0) const;
		void release() const;
		JString toString() const;
		void unlockCanvas(android::graphics::Canvas arg0) const;
		void unlockCanvasAndPost(android::graphics::Canvas arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view

