#include "./GestureStroke.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/Path.hpp"
#include "../graphics/RectF.hpp"
#include "../os/Parcel.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./Gesture.hpp"

namespace android::gesture
{
	// Fields
	QAndroidJniObject Gesture::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.gesture.Gesture",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	Gesture::Gesture(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Gesture::Gesture()
	{
		__thiz = QAndroidJniObject(
			"android.gesture.Gesture",
			"()V"
		);
	}
	
	// Methods
	void Gesture::addStroke(android::gesture::GestureStroke arg0)
	{
		__thiz.callMethod<void>(
			"addStroke",
			"(Landroid/gesture/GestureStroke;)V",
			arg0.__jniObject().object()
		);
	}
	jobject Gesture::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint Gesture::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject Gesture::getBoundingBox()
	{
		return __thiz.callObjectMethod(
			"getBoundingBox",
			"()Landroid/graphics/RectF;"
		);
	}
	jlong Gesture::getID()
	{
		return __thiz.callMethod<jlong>(
			"getID",
			"()J"
		);
	}
	jfloat Gesture::getLength()
	{
		return __thiz.callMethod<jfloat>(
			"getLength",
			"()F"
		);
	}
	QAndroidJniObject Gesture::getStrokes()
	{
		return __thiz.callObjectMethod(
			"getStrokes",
			"()Ljava/util/ArrayList;"
		);
	}
	jint Gesture::getStrokesCount()
	{
		return __thiz.callMethod<jint>(
			"getStrokesCount",
			"()I"
		);
	}
	QAndroidJniObject Gesture::toBitmap(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"toBitmap",
			"(IIII)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Gesture::toBitmap(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return __thiz.callObjectMethod(
			"toBitmap",
			"(IIIII)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject Gesture::toPath()
	{
		return __thiz.callObjectMethod(
			"toPath",
			"()Landroid/graphics/Path;"
		);
	}
	QAndroidJniObject Gesture::toPath(android::graphics::Path arg0)
	{
		return __thiz.callObjectMethod(
			"toPath",
			"(Landroid/graphics/Path;)Landroid/graphics/Path;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Gesture::toPath(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"toPath",
			"(IIII)Landroid/graphics/Path;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Gesture::toPath(android::graphics::Path arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return __thiz.callObjectMethod(
			"toPath",
			"(Landroid/graphics/Path;IIII)Landroid/graphics/Path;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Gesture::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::gesture

