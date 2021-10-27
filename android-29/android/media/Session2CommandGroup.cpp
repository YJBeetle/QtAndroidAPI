#include "./Session2Command.hpp"
#include "../os/Parcel.hpp"
#include "./Session2CommandGroup.hpp"

namespace android::media
{
	// Fields
	QAndroidJniObject Session2CommandGroup::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.Session2CommandGroup",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	Session2CommandGroup::Session2CommandGroup(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint Session2CommandGroup::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject Session2CommandGroup::getCommands()
	{
		return __thiz.callObjectMethod(
			"getCommands",
			"()Ljava/util/Set;"
		);
	}
	jboolean Session2CommandGroup::hasCommand(android::media::Session2Command arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasCommand",
			"(Landroid/media/Session2Command;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Session2CommandGroup::hasCommand(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasCommand",
			"(I)Z",
			arg0
		);
	}
	void Session2CommandGroup::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::media

