#include "../os/Parcel.hpp"
#include "./BackgroundServiceStartNotAllowedException.hpp"

namespace android::app
{
	// Fields
	__JniBaseClass BackgroundServiceStartNotAllowedException::CREATOR()
	{
		return getStaticObjectField(
			"android.app.BackgroundServiceStartNotAllowedException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	BackgroundServiceStartNotAllowedException::BackgroundServiceStartNotAllowedException(QJniObject obj) : android::app::ServiceStartNotAllowedException(obj) {}
	
	// Constructors
	BackgroundServiceStartNotAllowedException::BackgroundServiceStartNotAllowedException(jstring arg0)
		: android::app::ServiceStartNotAllowedException(
			"android.app.BackgroundServiceStartNotAllowedException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jint BackgroundServiceStartNotAllowedException::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void BackgroundServiceStartNotAllowedException::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

