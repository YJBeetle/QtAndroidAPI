#pragma once

#include "../content/ClipData.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./ContentInfo.def.hpp"

namespace android::view
{
	// Fields
	inline JObject ContentInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.ContentInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ContentInfo::FLAG_CONVERT_TO_PLAIN_TEXT()
	{
		return getStaticField<jint>(
			"android.view.ContentInfo",
			"FLAG_CONVERT_TO_PLAIN_TEXT"
		);
	}
	inline jint ContentInfo::SOURCE_APP()
	{
		return getStaticField<jint>(
			"android.view.ContentInfo",
			"SOURCE_APP"
		);
	}
	inline jint ContentInfo::SOURCE_AUTOFILL()
	{
		return getStaticField<jint>(
			"android.view.ContentInfo",
			"SOURCE_AUTOFILL"
		);
	}
	inline jint ContentInfo::SOURCE_CLIPBOARD()
	{
		return getStaticField<jint>(
			"android.view.ContentInfo",
			"SOURCE_CLIPBOARD"
		);
	}
	inline jint ContentInfo::SOURCE_DRAG_AND_DROP()
	{
		return getStaticField<jint>(
			"android.view.ContentInfo",
			"SOURCE_DRAG_AND_DROP"
		);
	}
	inline jint ContentInfo::SOURCE_INPUT_METHOD()
	{
		return getStaticField<jint>(
			"android.view.ContentInfo",
			"SOURCE_INPUT_METHOD"
		);
	}
	inline jint ContentInfo::SOURCE_PROCESS_TEXT()
	{
		return getStaticField<jint>(
			"android.view.ContentInfo",
			"SOURCE_PROCESS_TEXT"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ContentInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::content::ClipData ContentInfo::getClip() const
	{
		return callObjectMethod(
			"getClip",
			"()Landroid/content/ClipData;"
		);
	}
	inline android::os::Bundle ContentInfo::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint ContentInfo::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	inline android::net::Uri ContentInfo::getLinkUri() const
	{
		return callObjectMethod(
			"getLinkUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jint ContentInfo::getSource() const
	{
		return callMethod<jint>(
			"getSource",
			"()I"
		);
	}
	inline JString ContentInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ContentInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
