#include "./ApplicationInfo.hpp"
#include "../../os/Parcel.hpp"
#include "./ComponentInfo.hpp"

namespace android::content::pm
{
	// Fields
	QAndroidJniObject ComponentInfo::applicationInfo()
	{
		return __thiz.getObjectField(
			"applicationInfo",
			"Landroid/content/pm/ApplicationInfo;"
		);
	}
	jint ComponentInfo::descriptionRes()
	{
		return __thiz.getField<jint>(
			"descriptionRes"
		);
	}
	jboolean ComponentInfo::directBootAware()
	{
		return __thiz.getField<jboolean>(
			"directBootAware"
		);
	}
	jboolean ComponentInfo::enabled()
	{
		return __thiz.getField<jboolean>(
			"enabled"
		);
	}
	jboolean ComponentInfo::exported()
	{
		return __thiz.getField<jboolean>(
			"exported"
		);
	}
	jstring ComponentInfo::processName()
	{
		return __thiz.getObjectField(
			"processName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ComponentInfo::splitName()
	{
		return __thiz.getObjectField(
			"splitName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	ComponentInfo::ComponentInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ComponentInfo::ComponentInfo()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ComponentInfo",
			"()V"
		);
	}
	ComponentInfo::ComponentInfo(android::content::pm::ComponentInfo &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ComponentInfo",
			"(Landroid/content/pm/ComponentInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint ComponentInfo::getBannerResource()
	{
		return __thiz.callMethod<jint>(
			"getBannerResource",
			"()I"
		);
	}
	jint ComponentInfo::getIconResource()
	{
		return __thiz.callMethod<jint>(
			"getIconResource",
			"()I"
		);
	}
	jint ComponentInfo::getLogoResource()
	{
		return __thiz.callMethod<jint>(
			"getLogoResource",
			"()I"
		);
	}
	jboolean ComponentInfo::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void ComponentInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content::pm

