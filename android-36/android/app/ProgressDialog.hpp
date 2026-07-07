#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "../../java/text/NumberFormat.def.hpp"
#include "./ProgressDialog.def.hpp"

namespace android::app
{
	// Fields
	inline jint ProgressDialog::STYLE_HORIZONTAL()
	{
		return getStaticField<jint>(
			"android.app.ProgressDialog",
			"STYLE_HORIZONTAL"
		);
	}
	inline jint ProgressDialog::STYLE_SPINNER()
	{
		return getStaticField<jint>(
			"android.app.ProgressDialog",
			"STYLE_SPINNER"
		);
	}
	
	// Constructors
	inline ProgressDialog::ProgressDialog(android::content::Context arg0)
		: android::app::AlertDialog(
			"android.app.ProgressDialog",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline ProgressDialog::ProgressDialog(android::content::Context arg0, jint arg1)
		: android::app::AlertDialog(
			"android.app.ProgressDialog",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline android::app::ProgressDialog ProgressDialog::show(android::content::Context arg0, JString arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.app.ProgressDialog",
			"show",
			"(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/app/ProgressDialog;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline android::app::ProgressDialog ProgressDialog::show(android::content::Context arg0, JString arg1, JString arg2, jboolean arg3)
	{
		return callStaticObjectMethod(
			"android.app.ProgressDialog",
			"show",
			"(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;Z)Landroid/app/ProgressDialog;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3
		);
	}
	inline android::app::ProgressDialog ProgressDialog::show(android::content::Context arg0, JString arg1, JString arg2, jboolean arg3, jboolean arg4)
	{
		return callStaticObjectMethod(
			"android.app.ProgressDialog",
			"show",
			"(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;ZZ)Landroid/app/ProgressDialog;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3,
			arg4
		);
	}
	inline android::app::ProgressDialog ProgressDialog::show(android::content::Context arg0, JString arg1, JString arg2, jboolean arg3, jboolean arg4, JObject arg5)
	{
		return callStaticObjectMethod(
			"android.app.ProgressDialog",
			"show",
			"(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;ZZLandroid/content/DialogInterface$OnCancelListener;)Landroid/app/ProgressDialog;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3,
			arg4,
			arg5.object()
		);
	}
	inline jint ProgressDialog::getMax() const
	{
		return callMethod<jint>(
			"getMax",
			"()I"
		);
	}
	inline jint ProgressDialog::getProgress() const
	{
		return callMethod<jint>(
			"getProgress",
			"()I"
		);
	}
	inline jint ProgressDialog::getSecondaryProgress() const
	{
		return callMethod<jint>(
			"getSecondaryProgress",
			"()I"
		);
	}
	inline void ProgressDialog::incrementProgressBy(jint arg0) const
	{
		callMethod<void>(
			"incrementProgressBy",
			"(I)V",
			arg0
		);
	}
	inline void ProgressDialog::incrementSecondaryProgressBy(jint arg0) const
	{
		callMethod<void>(
			"incrementSecondaryProgressBy",
			"(I)V",
			arg0
		);
	}
	inline jboolean ProgressDialog::isIndeterminate() const
	{
		return callMethod<jboolean>(
			"isIndeterminate",
			"()Z"
		);
	}
	inline void ProgressDialog::onStart() const
	{
		callMethod<void>(
			"onStart",
			"()V"
		);
	}
	inline void ProgressDialog::setIndeterminate(jboolean arg0) const
	{
		callMethod<void>(
			"setIndeterminate",
			"(Z)V",
			arg0
		);
	}
	inline void ProgressDialog::setIndeterminateDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setIndeterminateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void ProgressDialog::setMax(jint arg0) const
	{
		callMethod<void>(
			"setMax",
			"(I)V",
			arg0
		);
	}
	inline void ProgressDialog::setMessage(JString arg0) const
	{
		callMethod<void>(
			"setMessage",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void ProgressDialog::setProgress(jint arg0) const
	{
		callMethod<void>(
			"setProgress",
			"(I)V",
			arg0
		);
	}
	inline void ProgressDialog::setProgressDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setProgressDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void ProgressDialog::setProgressNumberFormat(JString arg0) const
	{
		callMethod<void>(
			"setProgressNumberFormat",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void ProgressDialog::setProgressPercentFormat(java::text::NumberFormat arg0) const
	{
		callMethod<void>(
			"setProgressPercentFormat",
			"(Ljava/text/NumberFormat;)V",
			arg0.object()
		);
	}
	inline void ProgressDialog::setProgressStyle(jint arg0) const
	{
		callMethod<void>(
			"setProgressStyle",
			"(I)V",
			arg0
		);
	}
	inline void ProgressDialog::setSecondaryProgress(jint arg0) const
	{
		callMethod<void>(
			"setSecondaryProgress",
			"(I)V",
			arg0
		);
	}
} // namespace android::app

// Base class headers
#include "./Dialog.hpp"
#include "./AlertDialog.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
