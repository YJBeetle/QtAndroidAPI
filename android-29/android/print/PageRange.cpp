#include "../os/Parcel.hpp"
#include "./PageRange.hpp"

namespace android::print
{
	// Fields
	QAndroidJniObject PageRange::ALL_PAGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PageRange",
			"ALL_PAGES",
			"Landroid/print/PageRange;"
		);
	}
	QAndroidJniObject PageRange::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PageRange",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	PageRange::PageRange(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PageRange::PageRange(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.print.PageRange",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint PageRange::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PageRange::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PageRange::getEnd()
	{
		return __thiz.callMethod<jint>(
			"getEnd",
			"()I"
		);
	}
	jint PageRange::getStart()
	{
		return __thiz.callMethod<jint>(
			"getStart",
			"()I"
		);
	}
	jint PageRange::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PageRange::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PageRange::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::print

