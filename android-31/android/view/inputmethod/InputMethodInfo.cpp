#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../../content/pm/PackageManager.hpp"
#include "../../content/pm/ResolveInfo.hpp"
#include "../../content/pm/ServiceInfo.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Parcel.hpp"
#include "./InputMethodSubtype.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./InputMethodInfo.hpp"

namespace android::view::inputmethod
{
	// Fields
	JObject InputMethodInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InputMethodInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	InputMethodInfo::InputMethodInfo(android::content::Context arg0, android::content::pm::ResolveInfo arg1)
		: JObject(
			"android.view.inputmethod.InputMethodInfo",
			"(Landroid/content/Context;Landroid/content/pm/ResolveInfo;)V",
			arg0.object(),
			arg1.object()
		) {}
	InputMethodInfo::InputMethodInfo(JString arg0, JString arg1, JString arg2, JString arg3)
		: JObject(
			"android.view.inputmethod.InputMethodInfo",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/CharSequence;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		) {}
	
	// Methods
	jint InputMethodInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void InputMethodInfo::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jboolean InputMethodInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::content::ComponentName InputMethodInfo::getComponent() const
	{
		return callObjectMethod(
			"getComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	jint InputMethodInfo::getConfigChanges() const
	{
		return callMethod<jint>(
			"getConfigChanges",
			"()I"
		);
	}
	JString InputMethodInfo::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	jint InputMethodInfo::getIsDefaultResourceId() const
	{
		return callMethod<jint>(
			"getIsDefaultResourceId",
			"()I"
		);
	}
	JString InputMethodInfo::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	android::content::pm::ServiceInfo InputMethodInfo::getServiceInfo() const
	{
		return callObjectMethod(
			"getServiceInfo",
			"()Landroid/content/pm/ServiceInfo;"
		);
	}
	JString InputMethodInfo::getServiceName() const
	{
		return callObjectMethod(
			"getServiceName",
			"()Ljava/lang/String;"
		);
	}
	JString InputMethodInfo::getSettingsActivity() const
	{
		return callObjectMethod(
			"getSettingsActivity",
			"()Ljava/lang/String;"
		);
	}
	android::view::inputmethod::InputMethodSubtype InputMethodInfo::getSubtypeAt(jint arg0) const
	{
		return callObjectMethod(
			"getSubtypeAt",
			"(I)Landroid/view/inputmethod/InputMethodSubtype;",
			arg0
		);
	}
	jint InputMethodInfo::getSubtypeCount() const
	{
		return callMethod<jint>(
			"getSubtypeCount",
			"()I"
		);
	}
	jint InputMethodInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	android::graphics::drawable::Drawable InputMethodInfo::loadIcon(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	JString InputMethodInfo::loadLabel(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	jboolean InputMethodInfo::shouldShowInInputMethodPicker() const
	{
		return callMethod<jboolean>(
			"shouldShowInInputMethodPicker",
			"()Z"
		);
	}
	jboolean InputMethodInfo::suppressesSpellChecker() const
	{
		return callMethod<jboolean>(
			"suppressesSpellChecker",
			"()Z"
		);
	}
	JString InputMethodInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void InputMethodInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

