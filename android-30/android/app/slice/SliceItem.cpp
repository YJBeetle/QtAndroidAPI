#include "../PendingIntent.hpp"
#include "../RemoteInput.hpp"
#include "./Slice.hpp"
#include "../../graphics/drawable/Icon.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
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
	JString SliceItem::FORMAT_ACTION()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_ACTION",
			"Ljava/lang/String;"
		);
	}
	JString SliceItem::FORMAT_BUNDLE()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_BUNDLE",
			"Ljava/lang/String;"
		);
	}
	JString SliceItem::FORMAT_IMAGE()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_IMAGE",
			"Ljava/lang/String;"
		);
	}
	JString SliceItem::FORMAT_INT()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_INT",
			"Ljava/lang/String;"
		);
	}
	JString SliceItem::FORMAT_LONG()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_LONG",
			"Ljava/lang/String;"
		);
	}
	JString SliceItem::FORMAT_REMOTE_INPUT()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_REMOTE_INPUT",
			"Ljava/lang/String;"
		);
	}
	JString SliceItem::FORMAT_SLICE()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_SLICE",
			"Ljava/lang/String;"
		);
	}
	JString SliceItem::FORMAT_TEXT()
	{
		return getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_TEXT",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	SliceItem::SliceItem(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint SliceItem::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::app::PendingIntent SliceItem::getAction() const
	{
		return callObjectMethod(
			"getAction",
			"()Landroid/app/PendingIntent;"
		);
	}
	android::os::Bundle SliceItem::getBundle() const
	{
		return callObjectMethod(
			"getBundle",
			"()Landroid/os/Bundle;"
		);
	}
	JString SliceItem::getFormat() const
	{
		return callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		);
	}
	JObject SliceItem::getHints() const
	{
		return callObjectMethod(
			"getHints",
			"()Ljava/util/List;"
		);
	}
	android::graphics::drawable::Icon SliceItem::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jint SliceItem::getInt() const
	{
		return callMethod<jint>(
			"getInt",
			"()I"
		);
	}
	jlong SliceItem::getLong() const
	{
		return callMethod<jlong>(
			"getLong",
			"()J"
		);
	}
	android::app::RemoteInput SliceItem::getRemoteInput() const
	{
		return callObjectMethod(
			"getRemoteInput",
			"()Landroid/app/RemoteInput;"
		);
	}
	android::app::slice::Slice SliceItem::getSlice() const
	{
		return callObjectMethod(
			"getSlice",
			"()Landroid/app/slice/Slice;"
		);
	}
	JString SliceItem::getSubType() const
	{
		return callObjectMethod(
			"getSubType",
			"()Ljava/lang/String;"
		);
	}
	JString SliceItem::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean SliceItem::hasHint(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasHint",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	void SliceItem::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::slice

