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
	jint VerifiedDisplayHash::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::graphics::Rect VerifiedDisplayHash::getBoundsInWindow() const
	{
		return callObjectMethod(
			"getBoundsInWindow",
			"()Landroid/graphics/Rect;"
		);
	}
	JString VerifiedDisplayHash::getHashAlgorithm() const
	{
		return callObjectMethod(
			"getHashAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	JByteArray VerifiedDisplayHash::getImageHash() const
	{
		return callObjectMethod(
			"getImageHash",
			"()[B"
		);
	}
	jlong VerifiedDisplayHash::getTimeMillis() const
	{
		return callMethod<jlong>(
			"getTimeMillis",
			"()J"
		);
	}
	JString VerifiedDisplayHash::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void VerifiedDisplayHash::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::displayhash

