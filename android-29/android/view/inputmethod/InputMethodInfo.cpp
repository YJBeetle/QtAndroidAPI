#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../../content/pm/PackageManager.hpp"
#include "../../content/pm/ResolveInfo.hpp"
#include "../../content/pm/ServiceInfo.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Parcel.hpp"
#include "./InputMethodSubtype.hpp"
#include "./InputMethodInfo.hpp"

namespace android::view::inputmethod
{
	// Fields
	QAndroidJniObject InputMethodInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.inputmethod.InputMethodInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	InputMethodInfo::InputMethodInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	InputMethodInfo::InputMethodInfo(android::content::Context arg0, android::content::pm::ResolveInfo arg1)
		: __JniBaseClass(
			"android.view.inputmethod.InputMethodInfo",
			"(Landroid/content/Context;Landroid/content/pm/ResolveInfo;)V",
			arg0.object(),
			arg1.object()
		) {}
	InputMethodInfo::InputMethodInfo(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
		: __JniBaseClass(
			"android.view.inputmethod.InputMethodInfo",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/CharSequence;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jint InputMethodInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void InputMethodInfo::dump(__JniBaseClass arg0, jstring arg1)
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	jboolean InputMethodInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject InputMethodInfo::getComponent()
	{
		return callObjectMethod(
			"getComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	jstring InputMethodInfo::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint InputMethodInfo::getIsDefaultResourceId()
	{
		return callMethod<jint>(
			"getIsDefaultResourceId",
			"()I"
		);
	}
	jstring InputMethodInfo::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject InputMethodInfo::getServiceInfo()
	{
		return callObjectMethod(
			"getServiceInfo",
			"()Landroid/content/pm/ServiceInfo;"
		);
	}
	jstring InputMethodInfo::getServiceName()
	{
		return callObjectMethod(
			"getServiceName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InputMethodInfo::getSettingsActivity()
	{
		return callObjectMethod(
			"getSettingsActivity",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject InputMethodInfo::getSubtypeAt(jint arg0)
	{
		return callObjectMethod(
			"getSubtypeAt",
			"(I)Landroid/view/inputmethod/InputMethodSubtype;",
			arg0
		);
	}
	jint InputMethodInfo::getSubtypeCount()
	{
		return callMethod<jint>(
			"getSubtypeCount",
			"()I"
		);
	}
	jint InputMethodInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject InputMethodInfo::loadIcon(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	jstring InputMethodInfo::loadLabel(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		).object<jstring>();
	}
	jstring InputMethodInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void InputMethodInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

