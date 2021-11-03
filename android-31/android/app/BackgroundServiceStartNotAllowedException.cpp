#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./BackgroundServiceStartNotAllowedException.hpp"

namespace android::app
{
	// Fields
	JObject BackgroundServiceStartNotAllowedException::CREATOR()
	{
		return getStaticObjectField(
			"android.app.BackgroundServiceStartNotAllowedException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	BackgroundServiceStartNotAllowedException::BackgroundServiceStartNotAllowedException(QAndroidJniObject obj) : android::app::ServiceStartNotAllowedException(obj) {}
	
	// Constructors
	BackgroundServiceStartNotAllowedException::BackgroundServiceStartNotAllowedException(JString arg0)
		: android::app::ServiceStartNotAllowedException(
			"android.app.BackgroundServiceStartNotAllowedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	jint BackgroundServiceStartNotAllowedException::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void BackgroundServiceStartNotAllowedException::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

