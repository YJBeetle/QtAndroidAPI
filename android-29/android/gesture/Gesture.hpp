#pragma once

#include "../../__JniBaseClass.hpp"

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
namespace java::util
{
	class ArrayList;
}

namespace android::gesture
{
	class Gesture : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Gesture(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Gesture(QAndroidJniObject obj);
		
		// Constructors
		Gesture();
		
		// Methods
		void addStroke(android::gesture::GestureStroke arg0);
		jobject clone();
		jint describeContents();
		QAndroidJniObject getBoundingBox();
		jlong getID();
		jfloat getLength();
		QAndroidJniObject getStrokes();
		jint getStrokesCount();
		QAndroidJniObject toBitmap(jint arg0, jint arg1, jint arg2, jint arg3);
		QAndroidJniObject toBitmap(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		QAndroidJniObject toPath();
		QAndroidJniObject toPath(android::graphics::Path arg0);
		QAndroidJniObject toPath(jint arg0, jint arg1, jint arg2, jint arg3);
		QAndroidJniObject toPath(android::graphics::Path arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::gesture

