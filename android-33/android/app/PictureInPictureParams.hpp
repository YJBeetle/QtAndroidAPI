#pragma once

#include "./RemoteAction.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../util/Rational.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PictureInPictureParams.def.hpp"

namespace android::app
{
	// Fields
	inline JObject PictureInPictureParams::CREATOR()
	{
		return getStaticObjectField(
			"android.app.PictureInPictureParams",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PictureInPictureParams::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PictureInPictureParams::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject PictureInPictureParams::getActions() const
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/util/List;"
		);
	}
	inline android::util::Rational PictureInPictureParams::getAspectRatio() const
	{
		return callObjectMethod(
			"getAspectRatio",
			"()Landroid/util/Rational;"
		);
	}
	inline android::app::RemoteAction PictureInPictureParams::getCloseAction() const
	{
		return callObjectMethod(
			"getCloseAction",
			"()Landroid/app/RemoteAction;"
		);
	}
	inline android::util::Rational PictureInPictureParams::getExpandedAspectRatio() const
	{
		return callObjectMethod(
			"getExpandedAspectRatio",
			"()Landroid/util/Rational;"
		);
	}
	inline android::graphics::Rect PictureInPictureParams::getSourceRectHint() const
	{
		return callObjectMethod(
			"getSourceRectHint",
			"()Landroid/graphics/Rect;"
		);
	}
	inline JString PictureInPictureParams::getSubtitle() const
	{
		return callObjectMethod(
			"getSubtitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString PictureInPictureParams::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint PictureInPictureParams::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean PictureInPictureParams::isAutoEnterEnabled() const
	{
		return callMethod<jboolean>(
			"isAutoEnterEnabled",
			"()Z"
		);
	}
	inline jboolean PictureInPictureParams::isSeamlessResizeEnabled() const
	{
		return callMethod<jboolean>(
			"isSeamlessResizeEnabled",
			"()Z"
		);
	}
	inline JString PictureInPictureParams::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PictureInPictureParams::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
