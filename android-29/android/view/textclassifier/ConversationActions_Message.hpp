#pragma once

#include "../../app/Person.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/time/ZonedDateTime.def.hpp"
#include "./ConversationActions_Message.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	inline JObject ConversationActions_Message::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationActions$Message",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline android::app::Person ConversationActions_Message::PERSON_USER_OTHERS()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationActions$Message",
			"PERSON_USER_OTHERS",
			"Landroid/app/Person;"
		);
	}
	inline android::app::Person ConversationActions_Message::PERSON_USER_SELF()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationActions$Message",
			"PERSON_USER_SELF",
			"Landroid/app/Person;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ConversationActions_Message::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::app::Person ConversationActions_Message::getAuthor() const
	{
		return callObjectMethod(
			"getAuthor",
			"()Landroid/app/Person;"
		);
	}
	inline android::os::Bundle ConversationActions_Message::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline java::time::ZonedDateTime ConversationActions_Message::getReferenceTime() const
	{
		return callObjectMethod(
			"getReferenceTime",
			"()Ljava/time/ZonedDateTime;"
		);
	}
	inline JString ConversationActions_Message::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline void ConversationActions_Message::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

// Base class headers

