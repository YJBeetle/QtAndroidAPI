#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ClipData;
}
namespace android::content
{
	class ClipDescription;
}
namespace android::os
{
	class Parcel;
}

namespace android::view
{
	class DragEvent : public __JniBaseClass
	{
	public:
		// Fields
		static jint ACTION_DRAG_ENDED();
		static jint ACTION_DRAG_ENTERED();
		static jint ACTION_DRAG_EXITED();
		static jint ACTION_DRAG_LOCATION();
		static jint ACTION_DRAG_STARTED();
		static jint ACTION_DROP();
		static QAndroidJniObject CREATOR();
		
		DragEvent(QAndroidJniObject obj);
		// Constructors
		DragEvent() = default;
		
		// Methods
		jint describeContents();
		jint getAction();
		QAndroidJniObject getClipData();
		QAndroidJniObject getClipDescription();
		jobject getLocalState();
		jboolean getResult();
		jfloat getX();
		jfloat getY();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

