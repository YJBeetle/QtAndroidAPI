#include "../../os/Parcel.hpp"
#include "./SystemUpdatePolicy_ValidationFailedException.hpp"

namespace android::app::admin
{
	// Fields
	QAndroidJniObject SystemUpdatePolicy_ValidationFailedException::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.SystemUpdatePolicy$ValidationFailedException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SystemUpdatePolicy_ValidationFailedException::ERROR_COMBINED_FREEZE_PERIOD_TOO_CLOSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy$ValidationFailedException",
			"ERROR_COMBINED_FREEZE_PERIOD_TOO_CLOSE"
		);
	}
	jint SystemUpdatePolicy_ValidationFailedException::ERROR_COMBINED_FREEZE_PERIOD_TOO_LONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy$ValidationFailedException",
			"ERROR_COMBINED_FREEZE_PERIOD_TOO_LONG"
		);
	}
	jint SystemUpdatePolicy_ValidationFailedException::ERROR_DUPLICATE_OR_OVERLAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy$ValidationFailedException",
			"ERROR_DUPLICATE_OR_OVERLAP"
		);
	}
	jint SystemUpdatePolicy_ValidationFailedException::ERROR_NEW_FREEZE_PERIOD_TOO_CLOSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy$ValidationFailedException",
			"ERROR_NEW_FREEZE_PERIOD_TOO_CLOSE"
		);
	}
	jint SystemUpdatePolicy_ValidationFailedException::ERROR_NEW_FREEZE_PERIOD_TOO_LONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy$ValidationFailedException",
			"ERROR_NEW_FREEZE_PERIOD_TOO_LONG"
		);
	}
	jint SystemUpdatePolicy_ValidationFailedException::ERROR_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy$ValidationFailedException",
			"ERROR_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	SystemUpdatePolicy_ValidationFailedException::SystemUpdatePolicy_ValidationFailedException(QAndroidJniObject obj) : java::lang::IllegalArgumentException(obj) {}
	
	// Constructors
	
	// Methods
	jint SystemUpdatePolicy_ValidationFailedException::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint SystemUpdatePolicy_ValidationFailedException::getErrorCode()
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	void SystemUpdatePolicy_ValidationFailedException::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin
