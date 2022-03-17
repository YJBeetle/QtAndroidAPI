#pragma once

#include "./PendingIntent.def.hpp"
#include "../graphics/drawable/Icon.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../java/io/PrintWriter.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./RemoteAction.def.hpp"

namespace android::app
{
	// Fields
	inline JObject RemoteAction::CREATOR()
	{
		return getStaticObjectField(
			"android.app.RemoteAction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline RemoteAction::RemoteAction(android::graphics::drawable::Icon arg0, JString arg1, JString arg2, android::app::PendingIntent arg3)
		: JObject(
			"android.app.RemoteAction",
			"(Landroid/graphics/drawable/Icon;Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		) {}
	
	// Methods
	inline android::app::RemoteAction RemoteAction::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/app/RemoteAction;"
		);
	}
	inline jint RemoteAction::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void RemoteAction::dump(JString arg0, java::io::PrintWriter arg1) const
	{
		callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/PrintWriter;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::app::PendingIntent RemoteAction::getActionIntent() const
	{
		return callObjectMethod(
			"getActionIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	inline JString RemoteAction::getContentDescription() const
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::graphics::drawable::Icon RemoteAction::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	inline JString RemoteAction::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean RemoteAction::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline void RemoteAction::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void RemoteAction::setShouldShowIcon(jboolean arg0) const
	{
		callMethod<void>(
			"setShouldShowIcon",
			"(Z)V",
			arg0
		);
	}
	inline jboolean RemoteAction::shouldShowIcon() const
	{
		return callMethod<jboolean>(
			"shouldShowIcon",
			"()Z"
		);
	}
	inline void RemoteAction::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
