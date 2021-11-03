#include "./ClipData_Item.hpp"
#include "./ClipDescription.hpp"
#include "./ContentResolver.hpp"
#include "./Intent.hpp"
#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "./ClipData.hpp"

namespace android::content
{
	// Fields
	JObject ClipData::CREATOR()
	{
		return getStaticObjectField(
			"android.content.ClipData",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	ClipData::ClipData(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ClipData::ClipData(android::content::ClipData &arg0)
		: JObject(
			"android.content.ClipData",
			"(Landroid/content/ClipData;)V",
			arg0.object()
		) {}
	ClipData::ClipData(android::content::ClipDescription arg0, android::content::ClipData_Item arg1)
		: JObject(
			"android.content.ClipData",
			"(Landroid/content/ClipDescription;Landroid/content/ClipData$Item;)V",
			arg0.object(),
			arg1.object()
		) {}
	ClipData::ClipData(jstring arg0, jarray arg1, android::content::ClipData_Item arg2)
		: JObject(
			"android.content.ClipData",
			"(Ljava/lang/CharSequence;[Ljava/lang/String;Landroid/content/ClipData$Item;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	
	// Methods
	android::content::ClipData ClipData::newHtmlText(jstring arg0, jstring arg1, jstring arg2)
	{
		return callStaticObjectMethod(
			"android.content.ClipData",
			"newHtmlText",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/String;)Landroid/content/ClipData;",
			arg0,
			arg1,
			arg2
		);
	}
	android::content::ClipData ClipData::newIntent(jstring arg0, android::content::Intent arg1)
	{
		return callStaticObjectMethod(
			"android.content.ClipData",
			"newIntent",
			"(Ljava/lang/CharSequence;Landroid/content/Intent;)Landroid/content/ClipData;",
			arg0,
			arg1.object()
		);
	}
	android::content::ClipData ClipData::newPlainText(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.content.ClipData",
			"newPlainText",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/content/ClipData;",
			arg0,
			arg1
		);
	}
	android::content::ClipData ClipData::newRawUri(jstring arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.content.ClipData",
			"newRawUri",
			"(Ljava/lang/CharSequence;Landroid/net/Uri;)Landroid/content/ClipData;",
			arg0,
			arg1.object()
		);
	}
	android::content::ClipData ClipData::newUri(android::content::ContentResolver arg0, jstring arg1, android::net::Uri arg2)
	{
		return callStaticObjectMethod(
			"android.content.ClipData",
			"newUri",
			"(Landroid/content/ContentResolver;Ljava/lang/CharSequence;Landroid/net/Uri;)Landroid/content/ClipData;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void ClipData::addItem(android::content::ClipData_Item arg0)
	{
		callMethod<void>(
			"addItem",
			"(Landroid/content/ClipData$Item;)V",
			arg0.object()
		);
	}
	void ClipData::addItem(android::content::ContentResolver arg0, android::content::ClipData_Item arg1)
	{
		callMethod<void>(
			"addItem",
			"(Landroid/content/ContentResolver;Landroid/content/ClipData$Item;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jint ClipData::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::content::ClipDescription ClipData::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Landroid/content/ClipDescription;"
		);
	}
	android::content::ClipData_Item ClipData::getItemAt(jint arg0)
	{
		return callObjectMethod(
			"getItemAt",
			"(I)Landroid/content/ClipData$Item;",
			arg0
		);
	}
	jint ClipData::getItemCount()
	{
		return callMethod<jint>(
			"getItemCount",
			"()I"
		);
	}
	jstring ClipData::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ClipData::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

