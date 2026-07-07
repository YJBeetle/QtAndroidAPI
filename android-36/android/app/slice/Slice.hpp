#pragma once

#include "./SliceSpec.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./Slice.def.hpp"

namespace android::app::slice
{
	// Fields
	inline JObject Slice::CREATOR()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString Slice::EXTRA_RANGE_VALUE()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"EXTRA_RANGE_VALUE",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::EXTRA_TOGGLE_STATE()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"EXTRA_TOGGLE_STATE",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::HINT_ACTIONS()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_ACTIONS",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::HINT_ERROR()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_ERROR",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::HINT_HORIZONTAL()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_HORIZONTAL",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::HINT_KEYWORDS()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_KEYWORDS",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::HINT_LARGE()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_LARGE",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::HINT_LAST_UPDATED()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_LAST_UPDATED",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::HINT_LIST()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_LIST",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::HINT_LIST_ITEM()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_LIST_ITEM",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::HINT_NO_TINT()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_NO_TINT",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::HINT_PARTIAL()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_PARTIAL",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::HINT_PERMISSION_REQUEST()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_PERMISSION_REQUEST",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::HINT_SEE_MORE()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_SEE_MORE",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::HINT_SELECTED()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_SELECTED",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::HINT_SHORTCUT()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_SHORTCUT",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::HINT_SUMMARY()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_SUMMARY",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::HINT_TITLE()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_TITLE",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::HINT_TTL()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_TTL",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::SUBTYPE_COLOR()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_COLOR",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::SUBTYPE_CONTENT_DESCRIPTION()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_CONTENT_DESCRIPTION",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::SUBTYPE_LAYOUT_DIRECTION()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_LAYOUT_DIRECTION",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::SUBTYPE_MAX()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_MAX",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::SUBTYPE_MESSAGE()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_MESSAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::SUBTYPE_MILLIS()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_MILLIS",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::SUBTYPE_PRIORITY()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_PRIORITY",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::SUBTYPE_RANGE()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_RANGE",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::SUBTYPE_SOURCE()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_SOURCE",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::SUBTYPE_TOGGLE()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_TOGGLE",
			"Ljava/lang/String;"
		);
	}
	inline JString Slice::SUBTYPE_VALUE()
	{
		return getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_VALUE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint Slice::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject Slice::getHints() const
	{
		return callObjectMethod(
			"getHints",
			"()Ljava/util/List;"
		);
	}
	inline JObject Slice::getItems() const
	{
		return callObjectMethod(
			"getItems",
			"()Ljava/util/List;"
		);
	}
	inline android::app::slice::SliceSpec Slice::getSpec() const
	{
		return callObjectMethod(
			"getSpec",
			"()Landroid/app/slice/SliceSpec;"
		);
	}
	inline android::net::Uri Slice::getUri() const
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jboolean Slice::isCallerNeeded() const
	{
		return callMethod<jboolean>(
			"isCallerNeeded",
			"()Z"
		);
	}
	inline JString Slice::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Slice::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::slice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::slice;
#endif
