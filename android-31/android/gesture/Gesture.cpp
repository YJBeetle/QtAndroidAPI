#include "./GestureStroke.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/Path.hpp"
#include "../graphics/RectF.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./Gesture.hpp"

namespace android::gesture
{
	// Fields
	JObject Gesture::CREATOR()
	{
		return getStaticObjectField(
			"android.gesture.Gesture",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	Gesture::Gesture(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Gesture::Gesture()
		: JObject(
			"android.gesture.Gesture",
			"()V"
		) {}
	
	// Methods
	void Gesture::addStroke(android::gesture::GestureStroke arg0) const
	{
		callMethod<void>(
			"addStroke",
			"(Landroid/gesture/GestureStroke;)V",
			arg0.object()
		);
	}
	JObject Gesture::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jint Gesture::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::graphics::RectF Gesture::getBoundingBox() const
	{
		return callObjectMethod(
			"getBoundingBox",
			"()Landroid/graphics/RectF;"
		);
	}
	jlong Gesture::getID() const
	{
		return callMethod<jlong>(
			"getID",
			"()J"
		);
	}
	jfloat Gesture::getLength() const
	{
		return callMethod<jfloat>(
			"getLength",
			"()F"
		);
	}
	java::util::ArrayList Gesture::getStrokes() const
	{
		return callObjectMethod(
			"getStrokes",
			"()Ljava/util/ArrayList;"
		);
	}
	jint Gesture::getStrokesCount() const
	{
		return callMethod<jint>(
			"getStrokesCount",
			"()I"
		);
	}
	android::graphics::Bitmap Gesture::toBitmap(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"toBitmap",
			"(IIII)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	android::graphics::Bitmap Gesture::toBitmap(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
	{
		return callObjectMethod(
			"toBitmap",
			"(IIIII)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	android::graphics::Path Gesture::toPath() const
	{
		return callObjectMethod(
			"toPath",
			"()Landroid/graphics/Path;"
		);
	}
	android::graphics::Path Gesture::toPath(android::graphics::Path arg0) const
	{
		return callObjectMethod(
			"toPath",
			"(Landroid/graphics/Path;)Landroid/graphics/Path;",
			arg0.object()
		);
	}
	android::graphics::Path Gesture::toPath(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"toPath",
			"(IIII)Landroid/graphics/Path;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	android::graphics::Path Gesture::toPath(android::graphics::Path arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
	{
		return callObjectMethod(
			"toPath",
			"(Landroid/graphics/Path;IIII)Landroid/graphics/Path;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Gesture::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::gesture

