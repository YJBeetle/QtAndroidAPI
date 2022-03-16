#pragma once

#include "../../graphics/drawable/Icon.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ConversationStatus.def.hpp"

namespace android::app::people
{
	// Fields
	inline jint ConversationStatus::ACTIVITY_ANNIVERSARY()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_ANNIVERSARY"
		);
	}
	inline jint ConversationStatus::ACTIVITY_AUDIO()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_AUDIO"
		);
	}
	inline jint ConversationStatus::ACTIVITY_BIRTHDAY()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_BIRTHDAY"
		);
	}
	inline jint ConversationStatus::ACTIVITY_GAME()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_GAME"
		);
	}
	inline jint ConversationStatus::ACTIVITY_LOCATION()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_LOCATION"
		);
	}
	inline jint ConversationStatus::ACTIVITY_NEW_STORY()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_NEW_STORY"
		);
	}
	inline jint ConversationStatus::ACTIVITY_OTHER()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_OTHER"
		);
	}
	inline jint ConversationStatus::ACTIVITY_UPCOMING_BIRTHDAY()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_UPCOMING_BIRTHDAY"
		);
	}
	inline jint ConversationStatus::ACTIVITY_VIDEO()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"ACTIVITY_VIDEO"
		);
	}
	inline jint ConversationStatus::AVAILABILITY_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"AVAILABILITY_AVAILABLE"
		);
	}
	inline jint ConversationStatus::AVAILABILITY_BUSY()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"AVAILABILITY_BUSY"
		);
	}
	inline jint ConversationStatus::AVAILABILITY_OFFLINE()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"AVAILABILITY_OFFLINE"
		);
	}
	inline jint ConversationStatus::AVAILABILITY_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.people.ConversationStatus",
			"AVAILABILITY_UNKNOWN"
		);
	}
	inline JObject ConversationStatus::CREATOR()
	{
		return getStaticObjectField(
			"android.app.people.ConversationStatus",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ConversationStatus::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ConversationStatus::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ConversationStatus::getActivity() const
	{
		return callMethod<jint>(
			"getActivity",
			"()I"
		);
	}
	inline jint ConversationStatus::getAvailability() const
	{
		return callMethod<jint>(
			"getAvailability",
			"()I"
		);
	}
	inline JString ConversationStatus::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jlong ConversationStatus::getEndTimeMillis() const
	{
		return callMethod<jlong>(
			"getEndTimeMillis",
			"()J"
		);
	}
	inline android::graphics::drawable::Icon ConversationStatus::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	inline JString ConversationStatus::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline jlong ConversationStatus::getStartTimeMillis() const
	{
		return callMethod<jlong>(
			"getStartTimeMillis",
			"()J"
		);
	}
	inline jint ConversationStatus::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString ConversationStatus::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ConversationStatus::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::people

// Base class headers

