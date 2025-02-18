#pragma once

#include "../graphics/Bitmap.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MediaDescription.def.hpp"

namespace android::media
{
	// Fields
	inline jlong MediaDescription::BT_FOLDER_TYPE_ALBUMS()
	{
		return getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_ALBUMS"
		);
	}
	inline jlong MediaDescription::BT_FOLDER_TYPE_ARTISTS()
	{
		return getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_ARTISTS"
		);
	}
	inline jlong MediaDescription::BT_FOLDER_TYPE_GENRES()
	{
		return getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_GENRES"
		);
	}
	inline jlong MediaDescription::BT_FOLDER_TYPE_MIXED()
	{
		return getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_MIXED"
		);
	}
	inline jlong MediaDescription::BT_FOLDER_TYPE_PLAYLISTS()
	{
		return getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_PLAYLISTS"
		);
	}
	inline jlong MediaDescription::BT_FOLDER_TYPE_TITLES()
	{
		return getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_TITLES"
		);
	}
	inline jlong MediaDescription::BT_FOLDER_TYPE_YEARS()
	{
		return getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_YEARS"
		);
	}
	inline JObject MediaDescription::CREATOR()
	{
		return getStaticObjectField(
			"android.media.MediaDescription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString MediaDescription::EXTRA_BT_FOLDER_TYPE()
	{
		return getStaticObjectField(
			"android.media.MediaDescription",
			"EXTRA_BT_FOLDER_TYPE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint MediaDescription::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean MediaDescription::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString MediaDescription::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::os::Bundle MediaDescription::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline android::graphics::Bitmap MediaDescription::getIconBitmap() const
	{
		return callObjectMethod(
			"getIconBitmap",
			"()Landroid/graphics/Bitmap;"
		);
	}
	inline android::net::Uri MediaDescription::getIconUri() const
	{
		return callObjectMethod(
			"getIconUri",
			"()Landroid/net/Uri;"
		);
	}
	inline JString MediaDescription::getMediaId() const
	{
		return callObjectMethod(
			"getMediaId",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::Uri MediaDescription::getMediaUri() const
	{
		return callObjectMethod(
			"getMediaUri",
			"()Landroid/net/Uri;"
		);
	}
	inline JString MediaDescription::getSubtitle() const
	{
		return callObjectMethod(
			"getSubtitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString MediaDescription::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString MediaDescription::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void MediaDescription::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
