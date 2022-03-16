#include "../content/ComponentName.hpp"
#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AutomaticZenRule.hpp"

namespace android::app
{
	// Fields
	JObject AutomaticZenRule::CREATOR()
	{
		return getStaticObjectField(
			"android.app.AutomaticZenRule",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	AutomaticZenRule::AutomaticZenRule(android::os::Parcel arg0)
		: JObject(
			"android.app.AutomaticZenRule",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	AutomaticZenRule::AutomaticZenRule(JString arg0, android::content::ComponentName arg1, android::net::Uri arg2, jint arg3, jboolean arg4)
		: JObject(
			"android.app.AutomaticZenRule",
			"(Ljava/lang/String;Landroid/content/ComponentName;Landroid/net/Uri;IZ)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3,
			arg4
		) {}
	
	// Methods
	jint AutomaticZenRule::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AutomaticZenRule::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::net::Uri AutomaticZenRule::getConditionId() const
	{
		return callObjectMethod(
			"getConditionId",
			"()Landroid/net/Uri;"
		);
	}
	jlong AutomaticZenRule::getCreationTime() const
	{
		return callMethod<jlong>(
			"getCreationTime",
			"()J"
		);
	}
	jint AutomaticZenRule::getInterruptionFilter() const
	{
		return callMethod<jint>(
			"getInterruptionFilter",
			"()I"
		);
	}
	JString AutomaticZenRule::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	android::content::ComponentName AutomaticZenRule::getOwner() const
	{
		return callObjectMethod(
			"getOwner",
			"()Landroid/content/ComponentName;"
		);
	}
	jint AutomaticZenRule::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AutomaticZenRule::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void AutomaticZenRule::setConditionId(android::net::Uri arg0) const
	{
		callMethod<void>(
			"setConditionId",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void AutomaticZenRule::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void AutomaticZenRule::setInterruptionFilter(jint arg0) const
	{
		callMethod<void>(
			"setInterruptionFilter",
			"(I)V",
			arg0
		);
	}
	void AutomaticZenRule::setName(JString arg0) const
	{
		callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JString AutomaticZenRule::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void AutomaticZenRule::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

