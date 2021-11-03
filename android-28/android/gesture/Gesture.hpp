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
		void addStroke(android::gesture::GestureStroke arg0) const;
		JObject clone() const;
		jint describeContents() const;
		android::graphics::RectF getBoundingBox() const;
		jlong getID() const;
		jfloat getLength() const;
		java::util::ArrayList getStrokes() const;
		jint getStrokesCount() const;
		android::graphics::Bitmap toBitmap(jint arg0, jint arg1, jint arg2, jint arg3) const;
		android::graphics::Bitmap toBitmap(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
		android::graphics::Path toPath() const;
		android::graphics::Path toPath(android::graphics::Path arg0) const;
		android::graphics::Path toPath(jint arg0, jint arg1, jint arg2, jint arg3) const;
		android::graphics::Path toPath(android::graphics::Path arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::gesture

