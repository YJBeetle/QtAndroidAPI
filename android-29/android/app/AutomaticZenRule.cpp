#include "../content/ComponentName.hpp"
#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "../service/notification/ZenPolicy.hpp"
#include "./AutomaticZenRule.hpp"

namespace android::app
{
	// Fields
	__JniBaseClass AutomaticZenRule::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AutomaticZenRule",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	AutomaticZenRule::AutomaticZenRule(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AutomaticZenRule::AutomaticZenRule(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.app.AutomaticZenRule",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	AutomaticZenRule::AutomaticZenRule(jstring arg0, android::content::ComponentName arg1, android::net::Uri arg2, jint arg3, jboolean arg4)
		: __JniBaseClass(
			"android.app.AutomaticZenRule",
			"(Ljava/lang/String;Landroid/content/ComponentName;Landroid/net/Uri;IZ)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3,
			arg4
		) {}
	AutomaticZenRule::AutomaticZenRule(jstring arg0, android::content::ComponentName arg1, android::content::ComponentName arg2, android::net::Uri arg3, android::service::notification::ZenPolicy arg4, jint arg5, jboolean arg6)
		: __JniBaseClass(
			"android.app.AutomaticZenRule",
			"(Ljava/lang/String;Landroid/content/ComponentName;Landroid/content/ComponentName;Landroid/net/Uri;Landroid/service/notification/ZenPolicy;IZ)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5,
			arg6
		) {}
	
	// Methods
	jint AutomaticZenRule::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AutomaticZenRule::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::net::Uri AutomaticZenRule::getConditionId()
	{
		return callObjectMethod(
			"getConditionId",
			"()Landroid/net/Uri;"
		);
	}
	android::content::ComponentName AutomaticZenRule::getConfigurationActivity()
	{
		return callObjectMethod(
			"getConfigurationActivity",
			"()Landroid/content/ComponentName;"
		);
	}
	jlong AutomaticZenRule::getCreationTime()
	{
		return callMethod<jlong>(
			"getCreationTime",
			"()J"
		);
	}
	jint AutomaticZenRule::getInterruptionFilter()
	{
		return callMethod<jint>(
			"getInterruptionFilter",
			"()I"
		);
	}
	jstring AutomaticZenRule::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::content::ComponentName AutomaticZenRule::getOwner()
	{
		return callObjectMethod(
			"getOwner",
			"()Landroid/content/ComponentName;"
		);
	}
	android::service::notification::ZenPolicy AutomaticZenRule::getZenPolicy()
	{
		return callObjectMethod(
			"getZenPolicy",
			"()Landroid/service/notification/ZenPolicy;"
		);
	}
	jint AutomaticZenRule::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AutomaticZenRule::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void AutomaticZenRule::setConditionId(android::net::Uri arg0)
	{
		callMethod<void>(
			"setConditionId",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void AutomaticZenRule::setConfigurationActivity(android::content::ComponentName arg0)
	{
		callMethod<void>(
			"setConfigurationActivity",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	void AutomaticZenRule::setEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void AutomaticZenRule::setInterruptionFilter(jint arg0)
	{
		callMethod<void>(
			"setInterruptionFilter",
			"(I)V",
			arg0
		);
	}
	void AutomaticZenRule::setName(jstring arg0)
	{
		callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void AutomaticZenRule::setZenPolicy(android::service::notification::ZenPolicy arg0)
	{
		callMethod<void>(
			"setZenPolicy",
			"(Landroid/service/notification/ZenPolicy;)V",
			arg0.object()
		);
	}
	jstring AutomaticZenRule::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AutomaticZenRule::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

