#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./ConversationActions.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	inline JObject ConversationActions::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationActions",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline ConversationActions::ConversationActions(JObject arg0, JString arg1)
		: JObject(
			"android.view.textclassifier.ConversationActions",
			"(Ljava/util/List;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jint ConversationActions::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject ConversationActions::getConversationActions() const
	{
		return callObjectMethod(
			"getConversationActions",
			"()Ljava/util/List;"
		);
	}
	inline JString ConversationActions::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline void ConversationActions::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

