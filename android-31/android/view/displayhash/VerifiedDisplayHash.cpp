#include "../../../JByteArray.hpp"
#include "../../graphics/Rect.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
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
	VerifiedDisplayHash::VerifiedDisplayHash(jlong arg0, android::graphics::Rect arg1, JString arg2, JByteArray arg3)
		: JObject(
			"android.view.displayhash.VerifiedDisplayHash",
			"(JLandroid/graphics/Rect;Ljava/lang/String;[B)V",
			arg0,
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object<jbyteArray>()
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
	JString VerifiedDisplayHash::getHashAlgorithm()
	{
		return callObjectMethod(
			"getHashAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	JByteArray VerifiedDisplayHash::getImageHash()
	{
		return callObjectMethod(
			"getImageHash",
			"()[B"
		);
	}
	jlong VerifiedDisplayHash::getTimeMillis()
	{
		return callMethod<jlong>(
			"getTimeMillis",
			"()J"
		);
	}
	JString VerifiedDisplayHash::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

