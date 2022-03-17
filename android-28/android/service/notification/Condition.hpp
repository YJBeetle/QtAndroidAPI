#pragma once

#include "../../content/Context.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../net/Uri_Builder.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Condition.def.hpp"

namespace android::service::notification
{
	// Fields
	inline JObject Condition::CREATOR()
	{
		return getStaticObjectField(
			"android.service.notification.Condition",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint Condition::FLAG_RELEVANT_ALWAYS()
	{
		return getStaticField<jint>(
			"android.service.notification.Condition",
			"FLAG_RELEVANT_ALWAYS"
		);
	}
	inline jint Condition::FLAG_RELEVANT_NOW()
	{
		return getStaticField<jint>(
			"android.service.notification.Condition",
			"FLAG_RELEVANT_NOW"
		);
	}
	inline JString Condition::SCHEME()
	{
		return getStaticObjectField(
			"android.service.notification.Condition",
			"SCHEME",
			"Ljava/lang/String;"
		);
	}
	inline jint Condition::STATE_ERROR()
	{
		return getStaticField<jint>(
			"android.service.notification.Condition",
			"STATE_ERROR"
		);
	}
	inline jint Condition::STATE_FALSE()
	{
		return getStaticField<jint>(
			"android.service.notification.Condition",
			"STATE_FALSE"
		);
	}
	inline jint Condition::STATE_TRUE()
	{
		return getStaticField<jint>(
			"android.service.notification.Condition",
			"STATE_TRUE"
		);
	}
	inline jint Condition::STATE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.service.notification.Condition",
			"STATE_UNKNOWN"
		);
	}
	inline jint Condition::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	inline jint Condition::icon()
	{
		return getField<jint>(
			"icon"
		);
	}
	inline android::net::Uri Condition::id()
	{
		return getObjectField(
			"id",
			"Landroid/net/Uri;"
		);
	}
	inline JString Condition::line1()
	{
		return getObjectField(
			"line1",
			"Ljava/lang/String;"
		);
	}
	inline JString Condition::line2()
	{
		return getObjectField(
			"line2",
			"Ljava/lang/String;"
		);
	}
	inline jint Condition::state()
	{
		return getField<jint>(
			"state"
		);
	}
	inline JString Condition::summary()
	{
		return getObjectField(
			"summary",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline Condition::Condition(android::os::Parcel arg0)
		: JObject(
			"android.service.notification.Condition",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline Condition::Condition(android::net::Uri arg0, JString arg1, jint arg2)
		: JObject(
			"android.service.notification.Condition",
			"(Landroid/net/Uri;Ljava/lang/String;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		) {}
	inline Condition::Condition(android::net::Uri arg0, JString arg1, JString arg2, JString arg3, jint arg4, jint arg5, jint arg6)
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
	inline jboolean Condition::isValidId(android::net::Uri arg0, JString arg1)
	{
		return callStaticMethod<jboolean>(
			"android.service.notification.Condition",
			"isValidId",
			"(Landroid/net/Uri;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::net::Uri_Builder Condition::newId(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.service.notification.Condition",
			"newId",
			"(Landroid/content/Context;)Landroid/net/Uri$Builder;",
			arg0.object()
		);
	}
	inline JString Condition::relevanceToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.service.notification.Condition",
			"relevanceToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Condition::stateToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.service.notification.Condition",
			"stateToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline android::service::notification::Condition Condition::copy() const
	{
		return callObjectMethod(
			"copy",
			"()Landroid/service/notification/Condition;"
		);
	}
	inline jint Condition::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean Condition::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Condition::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Condition::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Condition::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::notification

// Base class headers

