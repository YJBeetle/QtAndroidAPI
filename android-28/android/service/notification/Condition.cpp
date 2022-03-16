#include "../../content/Context.hpp"
#include "../../net/Uri.hpp"
#include "../../net/Uri_Builder.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Condition.hpp"

namespace android::service::notification
{
	// Fields
	JObject Condition::CREATOR()
	{
		return getStaticObjectField(
			"android.service.notification.Condition",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Condition::FLAG_RELEVANT_ALWAYS()
	{
		return getStaticField<jint>(
			"android.service.notification.Condition",
			"FLAG_RELEVANT_ALWAYS"
		);
	}
	jint Condition::FLAG_RELEVANT_NOW()
	{
		return getStaticField<jint>(
			"android.service.notification.Condition",
			"FLAG_RELEVANT_NOW"
		);
	}
	JString Condition::SCHEME()
	{
		return getStaticObjectField(
			"android.service.notification.Condition",
			"SCHEME",
			"Ljava/lang/String;"
		);
	}
	jint Condition::STATE_ERROR()
	{
		return getStaticField<jint>(
			"android.service.notification.Condition",
			"STATE_ERROR"
		);
	}
	jint Condition::STATE_FALSE()
	{
		return getStaticField<jint>(
			"android.service.notification.Condition",
			"STATE_FALSE"
		);
	}
	jint Condition::STATE_TRUE()
	{
		return getStaticField<jint>(
			"android.service.notification.Condition",
			"STATE_TRUE"
		);
	}
	jint Condition::STATE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.service.notification.Condition",
			"STATE_UNKNOWN"
		);
	}
	jint Condition::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	jint Condition::icon()
	{
		return getField<jint>(
			"icon"
		);
	}
	android::net::Uri Condition::id()
	{
		return getObjectField(
			"id",
			"Landroid/net/Uri;"
		);
	}
	JString Condition::line1()
	{
		return getObjectField(
			"line1",
			"Ljava/lang/String;"
		);
	}
	JString Condition::line2()
	{
		return getObjectField(
			"line2",
			"Ljava/lang/String;"
		);
	}
	jint Condition::state()
	{
		return getField<jint>(
			"state"
		);
	}
	JString Condition::summary()
	{
		return getObjectField(
			"summary",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	Condition::Condition(android::os::Parcel arg0)
		: JObject(
			"android.service.notification.Condition",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	Condition::Condition(android::net::Uri arg0, JString arg1, jint arg2)
		: JObject(
			"android.service.notification.Condition",
			"(Landroid/net/Uri;Ljava/lang/String;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		) {}
	Condition::Condition(android::net::Uri arg0, JString arg1, JString arg2, JString arg3, jint arg4, jint arg5, jint arg6)
		: JObject(
			"android.service.notification.Condition",
			"(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;III)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4,
			arg5,
			arg6
		) {}
	
	// Methods
	jboolean Condition::isValidId(android::net::Uri arg0, JString arg1)
	{
		return callStaticMethod<jboolean>(
			"android.service.notification.Condition",
			"isValidId",
			"(Landroid/net/Uri;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::net::Uri_Builder Condition::newId(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.service.notification.Condition",
			"newId",
			"(Landroid/content/Context;)Landroid/net/Uri$Builder;",
			arg0.object()
		);
	}
	JString Condition::relevanceToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.service.notification.Condition",
			"relevanceToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString Condition::stateToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.service.notification.Condition",
			"stateToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	android::service::notification::Condition Condition::copy() const
	{
		return callObjectMethod(
			"copy",
			"()Landroid/service/notification/Condition;"
		);
	}
	jint Condition::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Condition::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint Condition::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString Condition::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Condition::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::notification

