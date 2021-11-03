#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Session2Token.hpp"

namespace android::media
{
	// Fields
	JObject Session2Token::CREATOR()
	{
		return getStaticObjectField(
			"android.media.Session2Token",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Session2Token::TYPE_SESSION()
	{
		return getStaticField<jint>(
			"android.media.Session2Token",
			"TYPE_SESSION"
		);
	}
	jint Session2Token::TYPE_SESSION_SERVICE()
	{
		return getStaticField<jint>(
			"android.media.Session2Token",
			"TYPE_SESSION_SERVICE"
		);
	}
	
	// QAndroidJniObject forward
	Session2Token::Session2Token(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Session2Token::Session2Token(android::content::Context arg0, android::content::ComponentName arg1)
		: JObject(
			"android.media.Session2Token",
			"(Landroid/content/Context;Landroid/content/ComponentName;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jint Session2Token::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Session2Token::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::os::Bundle Session2Token::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	JString Session2Token::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	JString Session2Token::getServiceName() const
	{
		return callObjectMethod(
			"getServiceName",
			"()Ljava/lang/String;"
		);
	}
	jint Session2Token::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint Session2Token::getUid() const
	{
		return callMethod<jint>(
			"getUid",
			"()I"
		);
	}
	jint Session2Token::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString Session2Token::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Session2Token::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

