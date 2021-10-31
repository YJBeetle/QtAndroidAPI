#include "../os/Parcel.hpp"
#include "./NotificationChannelGroup.hpp"

namespace android::app
{
	// Fields
	__JniBaseClass NotificationChannelGroup::CREATOR()
	{
		return getStaticObjectField(
			"android.app.NotificationChannelGroup",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	NotificationChannelGroup::NotificationChannelGroup(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	NotificationChannelGroup::NotificationChannelGroup(jstring arg0, jstring arg1)
		: __JniBaseClass(
			"android.app.NotificationChannelGroup",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::app::NotificationChannelGroup NotificationChannelGroup::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/app/NotificationChannelGroup;"
		);
	}
	jint NotificationChannelGroup::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NotificationChannelGroup::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	__JniBaseClass NotificationChannelGroup::getChannels()
	{
		return callObjectMethod(
			"getChannels",
			"()Ljava/util/List;"
		);
	}
	jstring NotificationChannelGroup::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationChannelGroup::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationChannelGroup::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint NotificationChannelGroup::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean NotificationChannelGroup::isBlocked()
	{
		return callMethod<jboolean>(
			"isBlocked",
			"()Z"
		);
	}
	void NotificationChannelGroup::setDescription(jstring arg0)
	{
		callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jstring NotificationChannelGroup::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void NotificationChannelGroup::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

