#include "../PendingIntent.hpp"
#include "../RemoteInput.hpp"
#include "./Slice.hpp"
#include "../../graphics/drawable/Icon.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./SliceItem.hpp"

namespace android::app::slice
{
	// Fields
	QAndroidJniObject SliceItem::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring SliceItem::FORMAT_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceItem::FORMAT_BUNDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_BUNDLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceItem::FORMAT_IMAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_IMAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceItem::FORMAT_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceItem::FORMAT_LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_LONG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceItem::FORMAT_REMOTE_INPUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_REMOTE_INPUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceItem::FORMAT_SLICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_SLICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceItem::FORMAT_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	SliceItem::SliceItem(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint SliceItem::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject SliceItem::getAction()
	{
		return callObjectMethod(
			"getAction",
			"()Landroid/app/PendingIntent;"
		);
	}
	QAndroidJniObject SliceItem::getBundle()
	{
		return callObjectMethod(
			"getBundle",
			"()Landroid/os/Bundle;"
		);
	}
	jstring SliceItem::getFormat()
	{
		return callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SliceItem::getHints()
	{
		return callObjectMethod(
			"getHints",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject SliceItem::getIcon()
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jint SliceItem::getInt()
	{
		return callMethod<jint>(
			"getInt",
			"()I"
		);
	}
	jlong SliceItem::getLong()
	{
		return callMethod<jlong>(
			"getLong",
			"()J"
		);
	}
	QAndroidJniObject SliceItem::getRemoteInput()
	{
		return callObjectMethod(
			"getRemoteInput",
			"()Landroid/app/RemoteInput;"
		);
	}
	QAndroidJniObject SliceItem::getSlice()
	{
		return callObjectMethod(
			"getSlice",
			"()Landroid/app/slice/Slice;"
		);
	}
	jstring SliceItem::getSubType()
	{
		return callObjectMethod(
			"getSubType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceItem::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean SliceItem::hasHint(jstring arg0)
	{
		return callMethod<jboolean>(
			"hasHint",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void SliceItem::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::slice
