#pragma once

#include "../content/Context.def.hpp"
#include "../content/res/Resources.def.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "./PointerIcon.def.hpp"

namespace android::view
{
	// Fields
	inline JObject PointerIcon::CREATOR()
	{
		return getStaticObjectField(
			"android.view.PointerIcon",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint PointerIcon::TYPE_ALIAS()
	{
		return getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_ALIAS"
		);
	}
	inline jint PointerIcon::TYPE_ALL_SCROLL()
	{
		return getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_ALL_SCROLL"
		);
	}
	inline jint PointerIcon::TYPE_ARROW()
	{
		return getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_ARROW"
		);
	}
	inline jint PointerIcon::TYPE_CELL()
	{
		return getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_CELL"
		);
	}
	inline jint PointerIcon::TYPE_CONTEXT_MENU()
	{
		return getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_CONTEXT_MENU"
		);
	}
	inline jint PointerIcon::TYPE_COPY()
	{
		return getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_COPY"
		);
	}
	inline jint PointerIcon::TYPE_CROSSHAIR()
	{
		return getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_CROSSHAIR"
		);
	}
	inline jint PointerIcon::TYPE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_DEFAULT"
		);
	}
	inline jint PointerIcon::TYPE_GRAB()
	{
		return getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_GRAB"
		);
	}
	inline jint PointerIcon::TYPE_GRABBING()
	{
		return getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_GRABBING"
		);
	}
	inline jint PointerIcon::TYPE_HAND()
	{
		return getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_HAND"
		);
	}
	inline jint PointerIcon::TYPE_HELP()
	{
		return getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_HELP"
		);
	}
	inline jint PointerIcon::TYPE_HORIZONTAL_DOUBLE_ARROW()
	{
		return getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_HORIZONTAL_DOUBLE_ARROW"
		);
	}
	inline jint PointerIcon::TYPE_NO_DROP()
	{
		return getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_NO_DROP"
		);
	}
	inline jint PointerIcon::TYPE_NULL()
	{
		return getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_NULL"
		);
	}
	inline jint PointerIcon::TYPE_TEXT()
	{
		return getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_TEXT"
		);
	}
	inline jint PointerIcon::TYPE_TOP_LEFT_DIAGONAL_DOUBLE_ARROW()
	{
		return getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_TOP_LEFT_DIAGONAL_DOUBLE_ARROW"
		);
	}
	inline jint PointerIcon::TYPE_TOP_RIGHT_DIAGONAL_DOUBLE_ARROW()
	{
		return getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_TOP_RIGHT_DIAGONAL_DOUBLE_ARROW"
		);
	}
	inline jint PointerIcon::TYPE_VERTICAL_DOUBLE_ARROW()
	{
		return getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_VERTICAL_DOUBLE_ARROW"
		);
	}
	inline jint PointerIcon::TYPE_VERTICAL_TEXT()
	{
		return getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_VERTICAL_TEXT"
		);
	}
	inline jint PointerIcon::TYPE_WAIT()
	{
		return getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_WAIT"
		);
	}
	inline jint PointerIcon::TYPE_ZOOM_IN()
	{
		return getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_ZOOM_IN"
		);
	}
	inline jint PointerIcon::TYPE_ZOOM_OUT()
	{
		return getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_ZOOM_OUT"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::view::PointerIcon PointerIcon::create(android::graphics::Bitmap arg0, jfloat arg1, jfloat arg2)
	{
		return callStaticObjectMethod(
			"android.view.PointerIcon",
			"create",
			"(Landroid/graphics/Bitmap;FF)Landroid/view/PointerIcon;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline android::view::PointerIcon PointerIcon::getSystemIcon(android::content::Context arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.view.PointerIcon",
			"getSystemIcon",
			"(Landroid/content/Context;I)Landroid/view/PointerIcon;",
			arg0.object(),
			arg1
		);
	}
	inline android::view::PointerIcon PointerIcon::load(android::content::res::Resources arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.view.PointerIcon",
			"load",
			"(Landroid/content/res/Resources;I)Landroid/view/PointerIcon;",
			arg0.object(),
			arg1
		);
	}
	inline jint PointerIcon::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PointerIcon::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void PointerIcon::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
