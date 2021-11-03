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
	JObject SliceItem::CREATOR()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring SliceItem::FORMAT_ACTION()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceItem::FORMAT_BUNDLE()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_BUNDLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceItem::FORMAT_IMAGE()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_IMAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceItem::FORMAT_INT()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceItem::FORMAT_LONG()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_LONG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceItem::FORMAT_REMOTE_INPUT()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_REMOTE_INPUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceItem::FORMAT_SLICE()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_SLICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceItem::FORMAT_TEXT()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	SliceItem::SliceItem(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint SliceItem::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::app::PendingIntent SliceItem::getAction()
	{
		return callObjectMethod(
			"getAction",
			"()Landroid/app/PendingIntent;"
		);
	}
	android::os::Bundle SliceItem::getBundle()
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
	JObject SliceItem::getHints()
	{
		return callObjectMethod(
			"getHints",
			"()Ljava/util/List;"
		);
	}
	android::graphics::drawable::Icon SliceItem::getIcon()
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
	android::app::RemoteInput SliceItem::getRemoteInput()
	{
		return callObjectMethod(
			"getRemoteInput",
			"()Landroid/app/RemoteInput;"
		);
	}
	android::app::slice::Slice SliceItem::getSlice()
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

