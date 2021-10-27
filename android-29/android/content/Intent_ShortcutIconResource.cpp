#include "./Context.hpp"
#include "../os/Parcel.hpp"
#include "./Intent_ShortcutIconResource.hpp"

namespace android::content
{
	// Fields
	QAndroidJniObject Intent_ShortcutIconResource::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent$ShortcutIconResource",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring Intent_ShortcutIconResource::packageName()
	{
		return __thiz.getObjectField(
			"packageName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent_ShortcutIconResource::resourceName()
	{
		return __thiz.getObjectField(
			"resourceName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	Intent_ShortcutIconResource::Intent_ShortcutIconResource(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Intent_ShortcutIconResource::Intent_ShortcutIconResource()
	{
		__thiz = QAndroidJniObject(
			"android.content.Intent$ShortcutIconResource",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Intent_ShortcutIconResource::fromContext(android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.Intent$ShortcutIconResource",
			"fromContext",
			"(Landroid/content/Context;I)Landroid/content/Intent$ShortcutIconResource;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint Intent_ShortcutIconResource::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring Intent_ShortcutIconResource::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Intent_ShortcutIconResource::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content

