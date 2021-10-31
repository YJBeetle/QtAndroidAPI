#include "./PendingIntent.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../os/Parcel.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "./RemoteAction.hpp"

namespace android::app
{
	// Fields
	QAndroidJniObject RemoteAction::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.RemoteAction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	RemoteAction::RemoteAction(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RemoteAction::RemoteAction(android::graphics::drawable::Icon arg0, jstring arg1, jstring arg2, android::app::PendingIntent arg3)
	{
		__thiz = QAndroidJniObject(
			"android.app.RemoteAction",
			"(Landroid/graphics/drawable/Icon;Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject RemoteAction::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/app/RemoteAction;"
		);
	}
	jint RemoteAction::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void RemoteAction::dump(jstring arg0, java::io::PrintWriter arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/PrintWriter;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject RemoteAction::getActionIntent()
	{
		return __thiz.callObjectMethod(
			"getActionIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	jstring RemoteAction::getContentDescription()
	{
		return __thiz.callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject RemoteAction::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jstring RemoteAction::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean RemoteAction::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void RemoteAction::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void RemoteAction::setShouldShowIcon(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setShouldShowIcon",
			"(Z)V",
			arg0
		);
	}
	jboolean RemoteAction::shouldShowIcon()
	{
		return __thiz.callMethod<jboolean>(
			"shouldShowIcon",
			"()Z"
		);
	}
	void RemoteAction::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app

