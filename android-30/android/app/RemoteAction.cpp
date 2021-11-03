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
	
	// QJniObject forward
	RemoteAction::RemoteAction(QJniObject obj) : JObject(obj) {}
	
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
	android::app::RemoteAction RemoteAction::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/app/RemoteAction;"
		);
	}
	jint RemoteAction::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void RemoteAction::dump(JString arg0, java::io::PrintWriter arg1)
	{
		callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/PrintWriter;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::app::PendingIntent RemoteAction::getActionIntent()
	{
		return callObjectMethod(
			"getActionIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	JString RemoteAction::getContentDescription()
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::graphics::drawable::Icon RemoteAction::getIcon()
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	JString RemoteAction::getTitle()
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean RemoteAction::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void RemoteAction::setEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void RemoteAction::setShouldShowIcon(jboolean arg0)
	{
		callMethod<void>(
			"setShouldShowIcon",
			"(Z)V",
			arg0
		);
	}
	jboolean RemoteAction::shouldShowIcon()
	{
		return callMethod<jboolean>(
			"shouldShowIcon",
			"()Z"
		);
	}
	void RemoteAction::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

