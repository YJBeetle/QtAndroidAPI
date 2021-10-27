#include "../../os/Parcel.hpp"
#include "./InstrumentationInfo.hpp"

namespace android::content::pm
{
	// Fields
	QAndroidJniObject InstrumentationInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.InstrumentationInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring InstrumentationInfo::dataDir()
	{
		return __thiz.getObjectField(
			"dataDir",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean InstrumentationInfo::functionalTest()
	{
		return __thiz.getField<jboolean>(
			"functionalTest"
		);
	}
	jboolean InstrumentationInfo::handleProfiling()
	{
		return __thiz.getField<jboolean>(
			"handleProfiling"
		);
	}
	jstring InstrumentationInfo::publicSourceDir()
	{
		return __thiz.getObjectField(
			"publicSourceDir",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InstrumentationInfo::sourceDir()
	{
		return __thiz.getObjectField(
			"sourceDir",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jarray InstrumentationInfo::splitNames()
	{
		return __thiz.getObjectField(
			"splitNames",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray InstrumentationInfo::splitPublicSourceDirs()
	{
		return __thiz.getObjectField(
			"splitPublicSourceDirs",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray InstrumentationInfo::splitSourceDirs()
	{
		return __thiz.getObjectField(
			"splitSourceDirs",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring InstrumentationInfo::targetPackage()
	{
		return __thiz.getObjectField(
			"targetPackage",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InstrumentationInfo::targetProcesses()
	{
		return __thiz.getObjectField(
			"targetProcesses",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	InstrumentationInfo::InstrumentationInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InstrumentationInfo::InstrumentationInfo()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.InstrumentationInfo",
			"()V"
		);
	}
	InstrumentationInfo::InstrumentationInfo(android::content::pm::InstrumentationInfo &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.InstrumentationInfo",
			"(Landroid/content/pm/InstrumentationInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint InstrumentationInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring InstrumentationInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void InstrumentationInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content::pm

