#pragma once

#include "../../JObject.hpp"

namespace android::gesture
{
	class GestureStroke;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class Path;
}
namespace android::graphics
{
	class RectF;
}
namespace android::os
{
	class Parcel;
}
class JObject;
namespace java::util
{
	class ArrayList;
}

namespace android::gesture
{
	class Gesture : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Gesture(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Gesture(QAndroidJniObject obj);
		
		// Constructors
		Gesture();
		
		// Methods
		void addStroke(android::gesture::GestureStroke arg0);
		JObject clone();
		jint describeContents();
		android::graphics::RectF getBoundingBox();
		jlong getID();
		jfloat getLength();
		java::util::ArrayList getStrokes();
		jint getStrokesCount();
		android::graphics::Bitmap toBitmap(jint arg0, jint arg1, jint arg2, jint arg3);
		android::graphics::Bitmap toBitmap(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		android::graphics::Path toPath();
		android::graphics::Path toPath(android::graphics::Path arg0);
		android::graphics::Path toPath(jint arg0, jint arg1, jint arg2, jint arg3);
		android::graphics::Path toPath(android::graphics::Path arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::gesture

