#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "./Session2Command.hpp"

namespace android::media
{
	// Fields
	jint Session2Command::COMMAND_CODE_CUSTOM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.Session2Command",
			"COMMAND_CODE_CUSTOM"
		);
	}
	QAndroidJniObject Session2Command::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.Session2Command",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	Session2Command::Session2Command(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Session2Command::Session2Command(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.Session2Command",
			"(I)V",
			arg0
		);
	}
	Session2Command::Session2Command(jstring &arg0, android::os::Bundle &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.Session2Command",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	Session2Command::Session2Command(const QString &arg0, android::os::Bundle &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.Session2Command",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint Session2Command::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Session2Command::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Session2Command::getCommandCode()
	{
		return __thiz.callMethod<jint>(
			"getCommandCode",
			"()I"
		);
	}
	jstring Session2Command::getCustomAction()
	{
		return __thiz.callObjectMethod(
			"getCustomAction",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Session2Command::getCustomExtras()
	{
		return __thiz.callObjectMethod(
			"getCustomExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint Session2Command::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Session2Command::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::media

