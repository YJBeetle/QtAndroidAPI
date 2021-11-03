#include "../../graphics/Rect.hpp"
#include "../../os/Parcel.hpp"
#include "./VerifiedDisplayHash.hpp"

namespace android::view::displayhash
{
	// Fields
	JObject VerifiedDisplayHash::CREATOR()
	{
		return getStaticObjectField(
			"android.view.displayhash.VerifiedDisplayHash",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	VerifiedDisplayHash::VerifiedDisplayHash(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	VerifiedDisplayHash::VerifiedDisplayHash(jlong arg0, android::graphics::Rect arg1, jstring arg2, jbyteArray arg3)
		: JObject(
			"android.view.displayhash.VerifiedDisplayHash",
			"(JLandroid/graphics/Rect;Ljava/lang/String;[B)V",
			arg0,
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	jint VerifiedDisplayHash::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::graphics::Rect VerifiedDisplayHash::getBoundsInWindow()
	{
		return callObjectMethod(
			"getBoundsInWindow",
			"()Landroid/graphics/Rect;"
		);
	}
	jstring VerifiedDisplayHash::getHashAlgorithm()
	{
		return callObjectMethod(
			"getHashAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray VerifiedDisplayHash::getImageHash()
	{
		return callObjectMethod(
			"getImageHash",
			"()[B"
		).object<jbyteArray>();
	}
	jlong VerifiedDisplayHash::getTimeMillis()
	{
		return callMethod<jlong>(
			"getTimeMillis",
			"()J"
		);
	}
	jstring VerifiedDisplayHash::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void VerifiedDisplayHash::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::displayhash

