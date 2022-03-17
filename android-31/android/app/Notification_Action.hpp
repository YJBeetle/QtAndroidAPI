#pragma once

#include "../../JArray.hpp"
#include "./PendingIntent.def.hpp"
#include "../graphics/drawable/Icon.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "./Notification_Action.def.hpp"

namespace android::app
{
	// Fields
	inline JObject Notification_Action::CREATOR()
	{
		return getStaticObjectField(
			"android.app.Notification$Action",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint Notification_Action::SEMANTIC_ACTION_ARCHIVE()
	{
		return getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_ARCHIVE"
		);
	}
	inline jint Notification_Action::SEMANTIC_ACTION_CALL()
	{
		return getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_CALL"
		);
	}
	inline jint Notification_Action::SEMANTIC_ACTION_DELETE()
	{
		return getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_DELETE"
		);
	}
	inline jint Notification_Action::SEMANTIC_ACTION_MARK_AS_READ()
	{
		return getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_MARK_AS_READ"
		);
	}
	inline jint Notification_Action::SEMANTIC_ACTION_MARK_AS_UNREAD()
	{
		return getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_MARK_AS_UNREAD"
		);
	}
	inline jint Notification_Action::SEMANTIC_ACTION_MUTE()
	{
		return getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_MUTE"
		);
	}
	inline jint Notification_Action::SEMANTIC_ACTION_NONE()
	{
		return getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_NONE"
		);
	}
	inline jint Notification_Action::SEMANTIC_ACTION_REPLY()
	{
		return getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_REPLY"
		);
	}
	inline jint Notification_Action::SEMANTIC_ACTION_THUMBS_DOWN()
	{
		return getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_THUMBS_DOWN"
		);
	}
	inline jint Notification_Action::SEMANTIC_ACTION_THUMBS_UP()
	{
		return getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_THUMBS_UP"
		);
	}
	inline jint Notification_Action::SEMANTIC_ACTION_UNMUTE()
	{
		return getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_UNMUTE"
		);
	}
	inline android::app::PendingIntent Notification_Action::actionIntent()
	{
		return getObjectField(
			"actionIntent",
			"Landroid/app/PendingIntent;"
		);
	}
	inline jint Notification_Action::icon()
	{
		return getField<jint>(
			"icon"
		);
	}
	inline JString Notification_Action::title()
	{
		return getObjectField(
			"title",
			"Ljava/lang/CharSequence;"
		);
	}
	
	// Constructors
	inline Notification_Action::Notification_Action(jint arg0, JString arg1, android::app::PendingIntent arg2)
		: JObject(
			"android.app.Notification$Action",
			"(ILjava/lang/CharSequence;Landroid/app/PendingIntent;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		) {}
	
	// Methods
	inline android::app::Notification_Action Notification_Action::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/app/Notification$Action;"
		);
	}
	inline jint Notification_Action::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean Notification_Action::getAllowGeneratedReplies() const
	{
		return callMethod<jboolean>(
			"getAllowGeneratedReplies",
			"()Z"
		);
	}
	inline JArray Notification_Action::getDataOnlyRemoteInputs() const
	{
		return callObjectMethod(
			"getDataOnlyRemoteInputs",
			"()[Landroid/app/RemoteInput;"
		);
	}
	inline android::os::Bundle Notification_Action::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline android::graphics::drawable::Icon Notification_Action::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	inline JArray Notification_Action::getRemoteInputs() const
	{
		return callObjectMethod(
			"getRemoteInputs",
			"()[Landroid/app/RemoteInput;"
		);
	}
	inline jint Notification_Action::getSemanticAction() const
	{
		return callMethod<jint>(
			"getSemanticAction",
			"()I"
		);
	}
	inline jboolean Notification_Action::isAuthenticationRequired() const
	{
		return callMethod<jboolean>(
			"isAuthenticationRequired",
			"()Z"
		);
	}
	inline jboolean Notification_Action::isContextual() const
	{
		return callMethod<jboolean>(
			"isContextual",
			"()Z"
		);
	}
	inline void Notification_Action::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
