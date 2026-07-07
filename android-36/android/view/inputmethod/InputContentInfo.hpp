#pragma once

#include "../../content/ClipDescription.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./InputContentInfo.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject InputContentInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InputContentInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline InputContentInfo::InputContentInfo(android::net::Uri arg0, android::content::ClipDescription arg1)
		: JObject(
			"android.view.inputmethod.InputContentInfo",
			"(Landroid/net/Uri;Landroid/content/ClipDescription;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline InputContentInfo::InputContentInfo(android::net::Uri arg0, android::content::ClipDescription arg1, android::net::Uri arg2)
		: JObject(
			"android.view.inputmethod.InputContentInfo",
			"(Landroid/net/Uri;Landroid/content/ClipDescription;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline jint InputContentInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::net::Uri InputContentInfo::getContentUri() const
	{
		return callObjectMethod(
			"getContentUri",
			"()Landroid/net/Uri;"
		);
	}
	inline android::content::ClipDescription InputContentInfo::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Landroid/content/ClipDescription;"
		);
	}
	inline android::net::Uri InputContentInfo::getLinkUri() const
	{
		return callObjectMethod(
			"getLinkUri",
			"()Landroid/net/Uri;"
		);
	}
	inline void InputContentInfo::releasePermission() const
	{
		callMethod<void>(
			"releasePermission",
			"()V"
		);
	}
	inline void InputContentInfo::requestPermission() const
	{
		callMethod<void>(
			"requestPermission",
			"()V"
		);
	}
	inline void InputContentInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
