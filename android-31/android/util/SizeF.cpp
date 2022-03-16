#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SizeF.hpp"

namespace android::util
{
	// Fields
	JObject SizeF::CREATOR()
	{
		return getStaticObjectField(
			"android.util.SizeF",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	SizeF::SizeF(jfloat arg0, jfloat arg1)
		: JObject(
			"android.util.SizeF",
			"(FF)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::util::SizeF SizeF::parseSizeF(JString arg0)
	{
		return callStaticObjectMethod(
			"android.util.SizeF",
			"parseSizeF",
			"(Ljava/lang/String;)Landroid/util/SizeF;",
			arg0.object<jstring>()
		);
	}
	jint SizeF::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SizeF::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jfloat SizeF::getHeight() const
	{
		return callMethod<jfloat>(
			"getHeight",
			"()F"
		);
	}
	jfloat SizeF::getWidth() const
	{
		return callMethod<jfloat>(
			"getWidth",
			"()F"
		);
	}
	jint SizeF::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString SizeF::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void SizeF::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::util

