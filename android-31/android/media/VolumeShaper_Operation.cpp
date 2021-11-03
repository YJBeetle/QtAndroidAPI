#include "../os/Parcel.hpp"
#include "./VolumeShaper_Operation.hpp"

namespace android::media
{
	// Fields
	JObject VolumeShaper_Operation::CREATOR()
	{
		return getStaticObjectField(
			"android.media.VolumeShaper$Operation",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	android::media::VolumeShaper_Operation VolumeShaper_Operation::PLAY()
	{
		return getStaticObjectField(
			"android.media.VolumeShaper$Operation",
			"PLAY",
			"Landroid/media/VolumeShaper$Operation;"
		);
	}
	android::media::VolumeShaper_Operation VolumeShaper_Operation::REVERSE()
	{
		return getStaticObjectField(
			"android.media.VolumeShaper$Operation",
			"REVERSE",
			"Landroid/media/VolumeShaper$Operation;"
		);
	}
	
	// QJniObject forward
	VolumeShaper_Operation::VolumeShaper_Operation(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint VolumeShaper_Operation::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean VolumeShaper_Operation::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint VolumeShaper_Operation::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring VolumeShaper_Operation::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void VolumeShaper_Operation::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

