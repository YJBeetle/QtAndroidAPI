#include "../../os/Parcel.hpp"
#include "./ObbInfo.hpp"

namespace android::content::res
{
	// Fields
	QAndroidJniObject ObbInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.res.ObbInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ObbInfo::OBB_OVERLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.ObbInfo",
			"OBB_OVERLAY"
		);
	}
	jstring ObbInfo::filename()
	{
		return __thiz.getObjectField(
			"filename",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ObbInfo::flags()
	{
		return __thiz.getField<jint>(
			"flags"
		);
	}
	jstring ObbInfo::packageName()
	{
		return __thiz.getObjectField(
			"packageName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ObbInfo::version()
	{
		return __thiz.getField<jint>(
			"version"
		);
	}
	
	ObbInfo::ObbInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint ObbInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring ObbInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ObbInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content::res

