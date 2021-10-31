#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "./Session2Token.hpp"

namespace android::media
{
	// Fields
	QAndroidJniObject Session2Token::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.Session2Token",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Session2Token::TYPE_SESSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.Session2Token",
			"TYPE_SESSION"
		);
	}
	jint Session2Token::TYPE_SESSION_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.Session2Token",
			"TYPE_SESSION_SERVICE"
		);
	}
	
	// QAndroidJniObject forward
	Session2Token::Session2Token(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Session2Token::Session2Token(android::content::Context arg0, android::content::ComponentName arg1)
		: __JniBaseClass(
			"android.media.Session2Token",
			"(Landroid/content/Context;Landroid/content/ComponentName;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jint Session2Token::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Session2Token::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Session2Token::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring Session2Token::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Session2Token::getServiceName()
	{
		return callObjectMethod(
			"getServiceName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Session2Token::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint Session2Token::getUid()
	{
		return callMethod<jint>(
			"getUid",
			"()I"
		);
	}
	jint Session2Token::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Session2Token::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Session2Token::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

