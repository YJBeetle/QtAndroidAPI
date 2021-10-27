#include "../IntentFilter.hpp"
#include "./ActivityInfo.hpp"
#include "./PackageManager.hpp"
#include "./ProviderInfo.hpp"
#include "./ServiceInfo.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Parcel.hpp"
#include "./ResolveInfo.hpp"

namespace android::content::pm
{
	// Fields
	QAndroidJniObject ResolveInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.ResolveInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	QAndroidJniObject ResolveInfo::activityInfo()
	{
		return __thiz.getObjectField(
			"activityInfo",
			"Landroid/content/pm/ActivityInfo;"
		);
	}
	QAndroidJniObject ResolveInfo::filter()
	{
		return __thiz.getObjectField(
			"filter",
			"Landroid/content/IntentFilter;"
		);
	}
	jint ResolveInfo::icon()
	{
		return __thiz.getField<jint>(
			"icon"
		);
	}
	jboolean ResolveInfo::isDefault()
	{
		return __thiz.getField<jboolean>(
			"isDefault"
		);
	}
	jboolean ResolveInfo::isInstantAppAvailable()
	{
		return __thiz.getField<jboolean>(
			"isInstantAppAvailable"
		);
	}
	jint ResolveInfo::labelRes()
	{
		return __thiz.getField<jint>(
			"labelRes"
		);
	}
	jint ResolveInfo::match()
	{
		return __thiz.getField<jint>(
			"match"
		);
	}
	jstring ResolveInfo::nonLocalizedLabel()
	{
		return __thiz.getObjectField(
			"nonLocalizedLabel",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint ResolveInfo::preferredOrder()
	{
		return __thiz.getField<jint>(
			"preferredOrder"
		);
	}
	jint ResolveInfo::priority()
	{
		return __thiz.getField<jint>(
			"priority"
		);
	}
	QAndroidJniObject ResolveInfo::providerInfo()
	{
		return __thiz.getObjectField(
			"providerInfo",
			"Landroid/content/pm/ProviderInfo;"
		);
	}
	jstring ResolveInfo::resolvePackageName()
	{
		return __thiz.getObjectField(
			"resolvePackageName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ResolveInfo::serviceInfo()
	{
		return __thiz.getObjectField(
			"serviceInfo",
			"Landroid/content/pm/ServiceInfo;"
		);
	}
	jint ResolveInfo::specificIndex()
	{
		return __thiz.getField<jint>(
			"specificIndex"
		);
	}
	
	ResolveInfo::ResolveInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ResolveInfo::ResolveInfo()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ResolveInfo",
			"()V"
		);
	}
	ResolveInfo::ResolveInfo(android::content::pm::ResolveInfo &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ResolveInfo",
			"(Landroid/content/pm/ResolveInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint ResolveInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ResolveInfo::dump(__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ResolveInfo::dump(__JniBaseClass arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jint ResolveInfo::getIconResource()
	{
		return __thiz.callMethod<jint>(
			"getIconResource",
			"()I"
		);
	}
	QAndroidJniObject ResolveInfo::loadIcon(android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	jstring ResolveInfo::loadLabel(android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring ResolveInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ResolveInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content::pm

