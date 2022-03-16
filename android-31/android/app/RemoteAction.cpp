#include "./PendingIntent.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../os/Parcel.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./RemoteAction.hpp"

namespace android::app
{
	// Fields
	JObject RemoteAction::CREATOR()
	{
		return getStaticObjectField(
			"android.app.RemoteAction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	RemoteAction::RemoteAction(android::graphics::drawable::Icon arg0, JString arg1, JString arg2, android::app::PendingIntent arg3)
		: JObject(
			"android.app.RemoteAction",
			"(Landroid/graphics/drawable/Icon;Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		) {}
	
	// Methods
	android::app::RemoteAction RemoteAction::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/app/RemoteAction;"
		);
	}
	jint RemoteAction::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void RemoteAction::dump(JString arg0, java::io::PrintWriter arg1) const
	{
		callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/PrintWriter;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	jboolean RemoteAction::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::app::PendingIntent RemoteAction::getActionIntent() const
	{
		return callObjectMethod(
			"getActionIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	JString RemoteAction::getContentDescription() const
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::graphics::drawable::Icon RemoteAction::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	JString RemoteAction::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint RemoteAction::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean RemoteAction::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void RemoteAction::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void RemoteAction::setShouldShowIcon(jboolean arg0) const
	{
		callMethod<void>(
			"setShouldShowIcon",
			"(Z)V",
			arg0
		);
	}
	jboolean RemoteAction::shouldShowIcon() const
	{
		return callMethod<jboolean>(
			"shouldShowIcon",
			"()Z"
		);
	}
	void RemoteAction::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

