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
	
	SystemUpdatePolicy_ValidationFailedException::SystemUpdatePolicy_ValidationFailedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint SystemUpdatePolicy_ValidationFailedException::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint SystemUpdatePolicy_ValidationFailedException::getErrorCode()
	{
		return __thiz.callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	void SystemUpdatePolicy_ValidationFailedException::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app::admin

