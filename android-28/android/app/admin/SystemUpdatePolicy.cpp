#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./SystemUpdatePolicy.hpp"

namespace android::app::admin
{
	// Fields
	JObject SystemUpdatePolicy::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.SystemUpdatePolicy",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SystemUpdatePolicy::TYPE_INSTALL_AUTOMATIC()
	{
		return getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy",
			"TYPE_INSTALL_AUTOMATIC"
		);
	}
	jint SystemUpdatePolicy::TYPE_INSTALL_WINDOWED()
	{
		return getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy",
			"TYPE_INSTALL_WINDOWED"
		);
	}
	jint SystemUpdatePolicy::TYPE_POSTPONE()
	{
		return getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy",
			"TYPE_POSTPONE"
		);
	}
	
	// Constructors
	
	// Methods
	android::app::admin::SystemUpdatePolicy SystemUpdatePolicy::createAutomaticInstallPolicy()
	{
		return callStaticObjectMethod(
			"android.app.admin.SystemUpdatePolicy",
			"createAutomaticInstallPolicy",
			"()Landroid/app/admin/SystemUpdatePolicy;"
		);
	}
	android::app::admin::SystemUpdatePolicy SystemUpdatePolicy::createPostponeInstallPolicy()
	{
		return callStaticObjectMethod(
			"android.app.admin.SystemUpdatePolicy",
			"createPostponeInstallPolicy",
			"()Landroid/app/admin/SystemUpdatePolicy;"
		);
	}
	android::app::admin::SystemUpdatePolicy SystemUpdatePolicy::createWindowedInstallPolicy(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.app.admin.SystemUpdatePolicy",
			"createWindowedInstallPolicy",
			"(II)Landroid/app/admin/SystemUpdatePolicy;",
			arg0,
			arg1
		);
	}
	jint SystemUpdatePolicy::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JObject SystemUpdatePolicy::getFreezePeriods() const
	{
		return callObjectMethod(
			"getFreezePeriods",
			"()Ljava/util/List;"
		);
	}
	jint SystemUpdatePolicy::getInstallWindowEnd() const
	{
		return callMethod<jint>(
			"getInstallWindowEnd",
			"()I"
		);
	}
	jint SystemUpdatePolicy::getInstallWindowStart() const
	{
		return callMethod<jint>(
			"getInstallWindowStart",
			"()I"
		);
	}
	jint SystemUpdatePolicy::getPolicyType() const
	{
		return callMethod<jint>(
			"getPolicyType",
			"()I"
		);
	}
	android::app::admin::SystemUpdatePolicy SystemUpdatePolicy::setFreezePeriods(JObject arg0) const
	{
		return callObjectMethod(
			"setFreezePeriods",
			"(Ljava/util/List;)Landroid/app/admin/SystemUpdatePolicy;",
			arg0.object()
		);
	}
	JString SystemUpdatePolicy::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void SystemUpdatePolicy::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin

