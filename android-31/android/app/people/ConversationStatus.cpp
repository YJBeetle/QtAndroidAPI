#include "../../graphics/drawable/Icon.hpp"
#include "../../os/Parcel.hpp"
#include "./ConversationStatus.hpp"

namespace android::app::people
{
	// Fields
	jint ConversationStatus::ACTIVITY_ANNIVERSARY()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_ANNIVERSARY"
		);
	}
	jint ConversationStatus::ACTIVITY_AUDIO()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_AUDIO"
		);
	}
	jint ConversationStatus::ACTIVITY_BIRTHDAY()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_BIRTHDAY"
		);
	}
	jint ConversationStatus::ACTIVITY_GAME()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_GAME"
		);
	}
	jint ConversationStatus::ACTIVITY_LOCATION()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_LOCATION"
		);
	}
	jint ConversationStatus::ACTIVITY_NEW_STORY()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_NEW_STORY"
		);
	}
	jint ConversationStatus::ACTIVITY_OTHER()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_OTHER"
		);
	}
	jint ConversationStatus::ACTIVITY_UPCOMING_BIRTHDAY()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_UPCOMING_BIRTHDAY"
		);
	}
	jint ConversationStatus::ACTIVITY_VIDEO()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_VIDEO"
		);
	}
	jint ConversationStatus::AVAILABILITY_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"AVAILABILITY_AVAILABLE"
		);
	}
	jint ConversationStatus::AVAILABILITY_BUSY()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"AVAILABILITY_BUSY"
		);
	}
	jint ConversationStatus::AVAILABILITY_OFFLINE()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"AVAILABILITY_OFFLINE"
		);
	}
	jint ConversationStatus::AVAILABILITY_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"AVAILABILITY_UNKNOWN"
		);
	}
	__JniBaseClass ConversationStatus::CREATOR()
	{
		return getStaticObjectField(
			"android.app.people.ConversationStatus",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	ConversationStatus::ConversationStatus(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint ConversationStatus::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ConversationStatus::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ConversationStatus::getActivity()
	{
		return callMethod<jint>(
			"getActivity",
			"()I"
		);
	}
	jint ConversationStatus::getAvailability()
	{
		return callMethod<jint>(
			"getAvailability",
			"()I"
		);
	}
	jstring ConversationStatus::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jlong ConversationStatus::getEndTimeMillis()
	{
		return callMethod<jlong>(
			"getEndTimeMillis",
			"()J"
		);
	}
	android::graphics::drawable::Icon ConversationStatus::getIcon()
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jstring ConversationStatus::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong ConversationStatus::getStartTimeMillis()
	{
		return callMethod<jlong>(
			"getStartTimeMillis",
			"()J"
		);
	}
	jint ConversationStatus::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring ConversationStatus::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ConversationStatus::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::people

