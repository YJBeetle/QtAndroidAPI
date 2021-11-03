#include "../os/Parcel.hpp"
#include "./PageRange.hpp"

namespace android::print
{
	// Fields
	android::print::PageRange PageRange::ALL_PAGES()
	{
		return getStaticObjectField(
			"android.print.PageRange",
			"ALL_PAGES",
			"Landroid/print/PageRange;"
		);
	}
	JObject PageRange::CREATOR()
	{
		return getStaticObjectField(
			"android.print.PageRange",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	PageRange::PageRange(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PageRange::PageRange(jint arg0, jint arg1)
		: JObject(
			"android.print.PageRange",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint PageRange::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PageRange::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PageRange::getEnd()
	{
		return callMethod<jint>(
			"getEnd",
			"()I"
		);
	}
	jint PageRange::getStart()
	{
		return callMethod<jint>(
			"getStart",
			"()I"
		);
	}
	jint PageRange::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PageRange::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PageRange::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::print

