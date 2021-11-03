#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./ForegroundServiceStartNotAllowedException.hpp"

namespace android::app
{
	// Fields
	JObject ForegroundServiceStartNotAllowedException::CREATOR()
	{
		return getStaticObjectField(
			"android.app.ForegroundServiceStartNotAllowedException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	ForegroundServiceStartNotAllowedException::ForegroundServiceStartNotAllowedException(QAndroidJniObject obj) : android::app::ServiceStartNotAllowedException(obj) {}
	
	// Constructors
	ForegroundServiceStartNotAllowedException::ForegroundServiceStartNotAllowedException(JString arg0)
		: android::app::ServiceStartNotAllowedException(
			"android.app.ForegroundServiceStartNotAllowedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	jint ForegroundServiceStartNotAllowedException::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ForegroundServiceStartNotAllowedException::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

