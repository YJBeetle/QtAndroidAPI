#pragma once

#include "../../app/RemoteAction.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./ConversationAction.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	inline JObject ConversationAction::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString ConversationAction::TYPE_CALL_PHONE()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_CALL_PHONE",
			"Ljava/lang/String;"
		);
	}
	inline JString ConversationAction::TYPE_CREATE_REMINDER()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_CREATE_REMINDER",
			"Ljava/lang/String;"
		);
	}
	inline JString ConversationAction::TYPE_OPEN_URL()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_OPEN_URL",
			"Ljava/lang/String;"
		);
	}
	inline JString ConversationAction::TYPE_SEND_EMAIL()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_SEND_EMAIL",
			"Ljava/lang/String;"
		);
	}
	inline JString ConversationAction::TYPE_SEND_SMS()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_SEND_SMS",
			"Ljava/lang/String;"
		);
	}
	inline JString ConversationAction::TYPE_SHARE_LOCATION()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_SHARE_LOCATION",
			"Ljava/lang/String;"
		);
	}
	inline JString ConversationAction::TYPE_TEXT_REPLY()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_TEXT_REPLY",
			"Ljava/lang/String;"
		);
	}
	inline JString ConversationAction::TYPE_TRACK_FLIGHT()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_TRACK_FLIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString ConversationAction::TYPE_VIEW_CALENDAR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_VIEW_CALENDAR",
			"Ljava/lang/String;"
		);
	}
	inline JString ConversationAction::TYPE_VIEW_MAP()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_VIEW_MAP",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ConversationAction::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::app::RemoteAction ConversationAction::getAction() const
	{
		return callObjectMethod(
			"getAction",
			"()Landroid/app/RemoteAction;"
		);
	}
	inline jfloat ConversationAction::getConfidenceScore() const
	{
		return callMethod<jfloat>(
			"getConfidenceScore",
			"()F"
		);
	}
	inline android::os::Bundle ConversationAction::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString ConversationAction::getTextReply() const
	{
		return callObjectMethod(
			"getTextReply",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString ConversationAction::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	inline void ConversationAction::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

