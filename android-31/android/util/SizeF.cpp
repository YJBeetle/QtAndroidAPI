#include "../os/Parcel.hpp"
#include "./SizeF.hpp"

namespace android::util
{
	// Fields
	__JniBaseClass SizeF::CREATOR()
	{
		return getStaticObjectField(
			"android.util.SizeF",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	SizeF::SizeF(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SizeF::SizeF(jfloat arg0, jfloat arg1)
		: __JniBaseClass(
			"android.util.SizeF",
			"(FF)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::util::SizeF SizeF::parseSizeF(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.util.SizeF",
			"parseSizeF",
			"(Ljava/lang/String;)Landroid/util/SizeF;",
			arg0
		);
	}
	jint SizeF::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SizeF::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat SizeF::getHeight()
	{
		return callMethod<jfloat>(
			"getHeight",
			"()F"
		);
	}
	jfloat SizeF::getWidth()
	{
		return callMethod<jfloat>(
			"getWidth",
			"()F"
		);
	}
	jint SizeF::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring SizeF::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SizeF::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::util

