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
	QAndroidJniObject ClipData::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ClipData",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	ClipData::ClipData(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ClipData::ClipData(android::content::ClipData &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipData",
			"(Landroid/content/ClipData;)V",
			arg0.__jniObject().object()
		);
	}
	ClipData::ClipData(android::content::ClipDescription arg0, android::content::ClipData_Item arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipData",
			"(Landroid/content/ClipDescription;Landroid/content/ClipData$Item;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	ClipData::ClipData(jstring arg0, jarray arg1, android::content::ClipData_Item arg2)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipData",
			"(Ljava/lang/CharSequence;[Ljava/lang/String;Landroid/content/ClipData$Item;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ClipData::newHtmlText(jstring arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ClipData",
			"newHtmlText",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/String;)Landroid/content/ClipData;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ClipData::newIntent(jstring arg0, android::content::Intent arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ClipData",
			"newIntent",
			"(Ljava/lang/CharSequence;Landroid/content/Intent;)Landroid/content/ClipData;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ClipData::newPlainText(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ClipData",
			"newPlainText",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/content/ClipData;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ClipData::newRawUri(jstring arg0, android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ClipData",
			"newRawUri",
			"(Ljava/lang/CharSequence;Landroid/net/Uri;)Landroid/content/ClipData;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ClipData::newUri(android::content::ContentResolver arg0, jstring arg1, android::net::Uri arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ClipData",
			"newUri",
			"(Landroid/content/ContentResolver;Ljava/lang/CharSequence;Landroid/net/Uri;)Landroid/content/ClipData;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void ClipData::addItem(android::content::ClipData_Item arg0)
	{
		__thiz.callMethod<void>(
			"addItem",
			"(Landroid/content/ClipData$Item;)V",
			arg0.__jniObject().object()
		);
	}
	void ClipData::addItem(android::content::ContentResolver arg0, android::content::ClipData_Item arg1)
	{
		__thiz.callMethod<void>(
			"addItem",
			"(Landroid/content/ContentResolver;Landroid/content/ClipData$Item;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint ClipData::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject ClipData::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Landroid/content/ClipDescription;"
		);
	}
	QAndroidJniObject ClipData::getItemAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getItemAt",
			"(I)Landroid/content/ClipData$Item;",
			arg0
		);
	}
	jint ClipData::getItemCount()
	{
		return __thiz.callMethod<jint>(
			"getItemCount",
			"()I"
		);
	}
	jstring ClipData::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ClipData::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content

