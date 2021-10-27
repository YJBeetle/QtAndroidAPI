#include "../../os/Parcel.hpp"
#include "./SystemUpdatePolicy.hpp"

namespace android::app::admin
{
	// Fields
	QAndroidJniObject SystemUpdatePolicy::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.SystemUpdatePolicy",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SystemUpdatePolicy::TYPE_INSTALL_AUTOMATIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy",
			"TYPE_INSTALL_AUTOMATIC"
		);
	}
	jint SystemUpdatePolicy::TYPE_INSTALL_WINDOWED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy",
			"TYPE_INSTALL_WINDOWED"
		);
	}
	jint SystemUpdatePolicy::TYPE_POSTPONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy",
			"TYPE_POSTPONE"
		);
	}
	
	SystemUpdatePolicy::SystemUpdatePolicy(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject SystemUpdatePolicy::createAutomaticInstallPolicy()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.admin.SystemUpdatePolicy",
			"createAutomaticInstallPolicy",
			"()Landroid/app/admin/SystemUpdatePolicy;"
		);
	}
	QAndroidJniObject SystemUpdatePolicy::createPostponeInstallPolicy()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.admin.SystemUpdatePolicy",
			"createPostponeInstallPolicy",
			"()Landroid/app/admin/SystemUpdatePolicy;"
		);
	}
	QAndroidJniObject SystemUpdatePolicy::createWindowedInstallPolicy(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.admin.SystemUpdatePolicy",
			"createWindowedInstallPolicy",
			"(II)Landroid/app/admin/SystemUpdatePolicy;",
			arg0,
			arg1
		);
	}
	jint SystemUpdatePolicy::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject SystemUpdatePolicy::getFreezePeriods()
	{
		return __thiz.callObjectMethod(
			"getFreezePeriods",
			"()Ljava/util/List;"
		);
	}
	jint SystemUpdatePolicy::getInstallWindowEnd()
	{
		return __thiz.callMethod<jint>(
			"getInstallWindowEnd",
			"()I"
		);
	}
	jint SystemUpdatePolicy::getInstallWindowStart()
	{
		return __thiz.callMethod<jint>(
			"getInstallWindowStart",
			"()I"
		);
	}
	jint SystemUpdatePolicy::getPolicyType()
	{
		return __thiz.callMethod<jint>(
			"getPolicyType",
			"()I"
		);
	}
	QAndroidJniObject SystemUpdatePolicy::setFreezePeriods(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setFreezePeriods",
			"(Ljava/util/List;)Landroid/app/admin/SystemUpdatePolicy;",
			arg0.__jniObject().object()
		);
	}
	jstring SystemUpdatePolicy::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SystemUpdatePolicy::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app::admin

