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
		return getObjectField(
			"filename",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ObbInfo::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	jstring ObbInfo::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ObbInfo::version()
	{
		return getField<jint>(
			"version"
		);
	}
	
	// QAndroidJniObject forward
	ObbInfo::ObbInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint ObbInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring ObbInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ObbInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::res

