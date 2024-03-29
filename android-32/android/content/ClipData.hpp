#pragma once

#include "../../JArray.hpp"
#include "./ClipData_Item.def.hpp"
#include "./ClipDescription.def.hpp"
#include "./ContentResolver.def.hpp"
#include "./Intent.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./ClipData.def.hpp"

namespace android::content
{
	// Fields
	inline JObject ClipData::CREATOR()
	{
		return getStaticObjectField(
			"android.content.ClipData",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline ClipData::ClipData(android::content::ClipData &arg0)
		: JObject(
			"android.content.ClipData",
			"(Landroid/content/ClipData;)V",
			arg0.object()
		) {}
	inline ClipData::ClipData(android::content::ClipDescription arg0, android::content::ClipData_Item arg1)
		: JObject(
			"android.content.ClipData",
			"(Landroid/content/ClipDescription;Landroid/content/ClipData$Item;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline ClipData::ClipData(JString arg0, JArray arg1, android::content::ClipData_Item arg2)
		: JObject(
			"android.content.ClipData",
			"(Ljava/lang/CharSequence;[Ljava/lang/String;Landroid/content/ClipData$Item;)V",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object()
		) {}
	
	// Methods
	inline android::content::ClipData ClipData::newHtmlText(JString arg0, JString arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.content.ClipData",
			"newHtmlText",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/String;)Landroid/content/ClipData;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline android::content::ClipData ClipData::newIntent(JString arg0, android::content::Intent arg1)
	{
		return callStaticObjectMethod(
			"android.content.ClipData",
			"newIntent",
			"(Ljava/lang/CharSequence;Landroid/content/Intent;)Landroid/content/ClipData;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::content::ClipData ClipData::newPlainText(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.content.ClipData",
			"newPlainText",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/content/ClipData;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::content::ClipData ClipData::newRawUri(JString arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.content.ClipData",
			"newRawUri",
			"(Ljava/lang/CharSequence;Landroid/net/Uri;)Landroid/content/ClipData;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::content::ClipData ClipData::newUri(android::content::ContentResolver arg0, JString arg1, android::net::Uri arg2)
	{
		return callStaticObjectMethod(
			"android.content.ClipData",
			"newUri",
			"(Landroid/content/ContentResolver;Ljava/lang/CharSequence;Landroid/net/Uri;)Landroid/content/ClipData;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void ClipData::addItem(android::content::ClipData_Item arg0) const
	{
		callMethod<void>(
			"addItem",
			"(Landroid/content/ClipData$Item;)V",
			arg0.object()
		);
	}
	inline void ClipData::addItem(android::content::ContentResolver arg0, android::content::ClipData_Item arg1) const
	{
		callMethod<void>(
			"addItem",
			"(Landroid/content/ContentResolver;Landroid/content/ClipData$Item;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint ClipData::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::content::ClipDescription ClipData::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Landroid/content/ClipDescription;"
		);
	}
	inline android::content::ClipData_Item ClipData::getItemAt(jint arg0) const
	{
		return callObjectMethod(
			"getItemAt",
			"(I)Landroid/content/ClipData$Item;",
			arg0
		);
	}
	inline jint ClipData::getItemCount() const
	{
		return callMethod<jint>(
			"getItemCount",
			"()I"
		);
	}
	inline JString ClipData::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ClipData::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
