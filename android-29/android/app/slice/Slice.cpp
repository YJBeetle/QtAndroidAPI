#include "./SliceSpec.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Parcel.hpp"
#include "./Slice.hpp"

namespace android::app::slice
{
	// Fields
	__JniBaseClass Slice::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring Slice::EXTRA_RANGE_VALUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"EXTRA_RANGE_VALUE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::EXTRA_TOGGLE_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"EXTRA_TOGGLE_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_ACTIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_ACTIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_ERROR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_ERROR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_HORIZONTAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_HORIZONTAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_KEYWORDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_KEYWORDS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_LARGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_LARGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_LAST_UPDATED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_LAST_UPDATED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_LIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_LIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_LIST_ITEM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_LIST_ITEM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_NO_TINT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_NO_TINT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_PARTIAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_PARTIAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_PERMISSION_REQUEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_PERMISSION_REQUEST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_SEE_MORE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_SEE_MORE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_SELECTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_SELECTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_SHORTCUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_SHORTCUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_SUMMARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_SUMMARY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_TTL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_TTL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::SUBTYPE_COLOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_COLOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::SUBTYPE_CONTENT_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_CONTENT_DESCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::SUBTYPE_LAYOUT_DIRECTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_LAYOUT_DIRECTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::SUBTYPE_MAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_MAX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::SUBTYPE_MESSAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_MESSAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::SUBTYPE_MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_MILLIS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::SUBTYPE_PRIORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_PRIORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::SUBTYPE_RANGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_RANGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::SUBTYPE_SOURCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_SOURCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::SUBTYPE_TOGGLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_TOGGLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::SUBTYPE_VALUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_VALUE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	Slice::Slice(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint Slice::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	__JniBaseClass Slice::getHints()
	{
		return callObjectMethod(
			"getHints",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass Slice::getItems()
	{
		return callObjectMethod(
			"getItems",
			"()Ljava/util/List;"
		);
	}
	android::app::slice::SliceSpec Slice::getSpec()
	{
		return callObjectMethod(
			"getSpec",
			"()Landroid/app/slice/SliceSpec;"
		);
	}
	android::net::Uri Slice::getUri()
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	jboolean Slice::isCallerNeeded()
	{
		return callMethod<jboolean>(
			"isCallerNeeded",
			"()Z"
		);
	}
	jstring Slice::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Slice::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::slice

