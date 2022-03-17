#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./SystemUpdatePolicy.def.hpp"

namespace android::app::admin
{
	// Fields
	inline JObject SystemUpdatePolicy::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.SystemUpdatePolicy",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint SystemUpdatePolicy::TYPE_INSTALL_AUTOMATIC()
	{
		return getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy",
			"TYPE_INSTALL_AUTOMATIC"
		);
	}
	inline jint SystemUpdatePolicy::TYPE_INSTALL_WINDOWED()
	{
		return getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy",
			"TYPE_INSTALL_WINDOWED"
		);
	}
	inline jint SystemUpdatePolicy::TYPE_POSTPONE()
	{
		return getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy",
			"TYPE_POSTPONE"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::app::admin::SystemUpdatePolicy SystemUpdatePolicy::createAutomaticInstallPolicy()
	{
		return callStaticObjectMethod(
			"android.app.admin.SystemUpdatePolicy",
			"createAutomaticInstallPolicy",
			"()Landroid/app/admin/SystemUpdatePolicy;"
		);
	}
	inline android::app::admin::SystemUpdatePolicy SystemUpdatePolicy::createPostponeInstallPolicy()
	{
		return callStaticObjectMethod(
			"android.app.admin.SystemUpdatePolicy",
			"createPostponeInstallPolicy",
			"()Landroid/app/admin/SystemUpdatePolicy;"
		);
	}
	inline android::app::admin::SystemUpdatePolicy SystemUpdatePolicy::createWindowedInstallPolicy(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.app.admin.SystemUpdatePolicy",
			"createWindowedInstallPolicy",
			"(II)Landroid/app/admin/SystemUpdatePolicy;",
			arg0,
			arg1
		);
	}
	inline jint SystemUpdatePolicy::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject SystemUpdatePolicy::getFreezePeriods() const
	{
		return callObjectMethod(
			"getFreezePeriods",
			"()Ljava/util/List;"
		);
	}
	inline jint SystemUpdatePolicy::getInstallWindowEnd() const
	{
		return callMethod<jint>(
			"getInstallWindowEnd",
			"()I"
		);
	}
	inline jint SystemUpdatePolicy::getInstallWindowStart() const
	{
		return callMethod<jint>(
			"getInstallWindowStart",
			"()I"
		);
	}
	inline jint SystemUpdatePolicy::getPolicyType() const
	{
		return callMethod<jint>(
			"getPolicyType",
			"()I"
		);
	}
	inline android::app::admin::SystemUpdatePolicy SystemUpdatePolicy::setFreezePeriods(JObject arg0) const
	{
		return callObjectMethod(
			"setFreezePeriods",
			"(Ljava/util/List;)Landroid/app/admin/SystemUpdatePolicy;",
			arg0.object()
		);
	}
	inline JString SystemUpdatePolicy::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void SystemUpdatePolicy::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin

// Base class headers

