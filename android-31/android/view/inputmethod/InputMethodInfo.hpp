#pragma once

#include "../../content/ComponentName.def.hpp"
#include "../../content/Context.def.hpp"
#include "../../content/pm/PackageManager.def.hpp"
#include "../../content/pm/ResolveInfo.def.hpp"
#include "../../content/pm/ServiceInfo.def.hpp"
#include "../../graphics/drawable/Drawable.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./InputMethodSubtype.def.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./InputMethodInfo.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject InputMethodInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InputMethodInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline InputMethodInfo::InputMethodInfo(android::content::Context arg0, android::content::pm::ResolveInfo arg1)
		: JObject(
			"android.view.inputmethod.InputMethodInfo",
			"(Landroid/content/Context;Landroid/content/pm/ResolveInfo;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline InputMethodInfo::InputMethodInfo(JString arg0, JString arg1, JString arg2, JString arg3)
		: JObject(
			"android.view.inputmethod.InputMethodInfo",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/CharSequence;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		) {}
	
	// Methods
	inline jint InputMethodInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void InputMethodInfo::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jboolean InputMethodInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::content::ComponentName InputMethodInfo::getComponent() const
	{
		return callObjectMethod(
			"getComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	inline jint InputMethodInfo::getConfigChanges() const
	{
		return callMethod<jint>(
			"getConfigChanges",
			"()I"
		);
	}
	inline JString InputMethodInfo::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline jint InputMethodInfo::getIsDefaultResourceId() const
	{
		return callMethod<jint>(
			"getIsDefaultResourceId",
			"()I"
		);
	}
	inline JString InputMethodInfo::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline android::content::pm::ServiceInfo InputMethodInfo::getServiceInfo() const
	{
		return callObjectMethod(
			"getServiceInfo",
			"()Landroid/content/pm/ServiceInfo;"
		);
	}
	inline JString InputMethodInfo::getServiceName() const
	{
		return callObjectMethod(
			"getServiceName",
			"()Ljava/lang/String;"
		);
	}
	inline JString InputMethodInfo::getSettingsActivity() const
	{
		return callObjectMethod(
			"getSettingsActivity",
			"()Ljava/lang/String;"
		);
	}
	inline android::view::inputmethod::InputMethodSubtype InputMethodInfo::getSubtypeAt(jint arg0) const
	{
		return callObjectMethod(
			"getSubtypeAt",
			"(I)Landroid/view/inputmethod/InputMethodSubtype;",
			arg0
		);
	}
	inline jint InputMethodInfo::getSubtypeCount() const
	{
		return callMethod<jint>(
			"getSubtypeCount",
			"()I"
		);
	}
	inline jint InputMethodInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline android::graphics::drawable::Drawable InputMethodInfo::loadIcon(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline JString InputMethodInfo::loadLabel(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline jboolean InputMethodInfo::shouldShowInInputMethodPicker() const
	{
		return callMethod<jboolean>(
			"shouldShowInInputMethodPicker",
			"()Z"
		);
	}
	inline jboolean InputMethodInfo::suppressesSpellChecker() const
	{
		return callMethod<jboolean>(
			"suppressesSpellChecker",
			"()Z"
		);
	}
	inline JString InputMethodInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void InputMethodInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
