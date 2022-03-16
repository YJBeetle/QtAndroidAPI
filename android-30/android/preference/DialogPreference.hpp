#pragma once

#include "../app/AlertDialog_Builder.def.hpp"
#include "../app/Dialog.def.hpp"
#include "../content/Context.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../view/View.def.hpp"
#include "../../JString.hpp"
#include "./DialogPreference.def.hpp"

namespace android::preference
{
	// Fields
	
	// Constructors
	inline DialogPreference::DialogPreference(android::content::Context arg0)
		: android::preference::Preference(
			"android.preference.DialogPreference",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline DialogPreference::DialogPreference(android::content::Context arg0, JObject arg1)
		: android::preference::Preference(
			"android.preference.DialogPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline DialogPreference::DialogPreference(android::content::Context arg0, JObject arg1, jint arg2)
		: android::preference::Preference(
			"android.preference.DialogPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline DialogPreference::DialogPreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::preference::Preference(
			"android.preference.DialogPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline android::app::Dialog DialogPreference::getDialog() const
	{
		return callObjectMethod(
			"getDialog",
			"()Landroid/app/Dialog;"
		);
	}
	inline android::graphics::drawable::Drawable DialogPreference::getDialogIcon() const
	{
		return callObjectMethod(
			"getDialogIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jint DialogPreference::getDialogLayoutResource() const
	{
		return callMethod<jint>(
			"getDialogLayoutResource",
			"()I"
		);
	}
	inline JString DialogPreference::getDialogMessage() const
	{
		return callObjectMethod(
			"getDialogMessage",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString DialogPreference::getDialogTitle() const
	{
		return callObjectMethod(
			"getDialogTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString DialogPreference::getNegativeButtonText() const
	{
		return callObjectMethod(
			"getNegativeButtonText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString DialogPreference::getPositiveButtonText() const
	{
		return callObjectMethod(
			"getPositiveButtonText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline void DialogPreference::onActivityDestroy() const
	{
		callMethod<void>(
			"onActivityDestroy",
			"()V"
		);
	}
	inline void DialogPreference::onClick(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"onClick",
			"(Landroid/content/DialogInterface;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void DialogPreference::onDismiss(JObject arg0) const
	{
		callMethod<void>(
			"onDismiss",
			"(Landroid/content/DialogInterface;)V",
			arg0.object()
		);
	}
	inline void DialogPreference::setDialogIcon(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setDialogIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void DialogPreference::setDialogIcon(jint arg0) const
	{
		callMethod<void>(
			"setDialogIcon",
			"(I)V",
			arg0
		);
	}
	inline void DialogPreference::setDialogLayoutResource(jint arg0) const
	{
		callMethod<void>(
			"setDialogLayoutResource",
			"(I)V",
			arg0
		);
	}
	inline void DialogPreference::setDialogMessage(jint arg0) const
	{
		callMethod<void>(
			"setDialogMessage",
			"(I)V",
			arg0
		);
	}
	inline void DialogPreference::setDialogMessage(JString arg0) const
	{
		callMethod<void>(
			"setDialogMessage",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void DialogPreference::setDialogTitle(jint arg0) const
	{
		callMethod<void>(
			"setDialogTitle",
			"(I)V",
			arg0
		);
	}
	inline void DialogPreference::setDialogTitle(JString arg0) const
	{
		callMethod<void>(
			"setDialogTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void DialogPreference::setNegativeButtonText(jint arg0) const
	{
		callMethod<void>(
			"setNegativeButtonText",
			"(I)V",
			arg0
		);
	}
	inline void DialogPreference::setNegativeButtonText(JString arg0) const
	{
		callMethod<void>(
			"setNegativeButtonText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void DialogPreference::setPositiveButtonText(jint arg0) const
	{
		callMethod<void>(
			"setPositiveButtonText",
			"(I)V",
			arg0
		);
	}
	inline void DialogPreference::setPositiveButtonText(JString arg0) const
	{
		callMethod<void>(
			"setPositiveButtonText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::preference

// Base class headers
#include "./Preference.hpp"

