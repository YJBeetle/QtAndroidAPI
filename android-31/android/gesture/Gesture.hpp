#pragma once

#include "./GestureStroke.def.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "../graphics/Path.def.hpp"
#include "../graphics/RectF.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "./Gesture.def.hpp"

namespace android::gesture
{
	// Fields
	inline JObject Gesture::CREATOR()
	{
		return getStaticObjectField(
			"android.gesture.Gesture",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline Gesture::Gesture()
		: JObject(
			"android.gesture.Gesture",
			"()V"
		) {}
	
	// Methods
	inline void Gesture::addStroke(android::gesture::GestureStroke arg0) const
	{
		callMethod<void>(
			"addStroke",
			"(Landroid/gesture/GestureStroke;)V",
			arg0.object()
		);
	}
	inline JObject Gesture::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jint Gesture::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::graphics::RectF Gesture::getBoundingBox() const
	{
		return callObjectMethod(
			"getBoundingBox",
			"()Landroid/graphics/RectF;"
		);
	}
	inline jlong Gesture::getID() const
	{
		return callMethod<jlong>(
			"getID",
			"()J"
		);
	}
	inline jfloat Gesture::getLength() const
	{
		return callMethod<jfloat>(
			"getLength",
			"()F"
		);
	}
	inline java::util::ArrayList Gesture::getStrokes() const
	{
		return callObjectMethod(
			"getStrokes",
			"()Ljava/util/ArrayList;"
		);
	}
	inline jint Gesture::getStrokesCount() const
	{
		return callMethod<jint>(
			"getStrokesCount",
			"()I"
		);
	}
	inline android::graphics::Bitmap Gesture::toBitmap(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	inline android::graphics::Bitmap Gesture::toBitmap(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
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
	inline android::graphics::Path Gesture::toPath() const
	{
		return callObjectMethod(
			"toPath",
			"()Landroid/graphics/Path;"
		);
	}
	inline android::graphics::Path Gesture::toPath(android::graphics::Path arg0) const
	{
		return callObjectMethod(
			"toPath",
			"(Landroid/graphics/Path;)Landroid/graphics/Path;",
			arg0.object()
		);
	}
	inline android::graphics::Path Gesture::toPath(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	inline android::graphics::Path Gesture::toPath(android::graphics::Path arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
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
	inline void Gesture::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::gesture

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::gesture;
#endif
