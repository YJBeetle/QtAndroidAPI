#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Bundle.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "../../java/text/NumberFormat.hpp"
#include "./ProgressDialog.hpp"

namespace android::app
{
	// Fields
	jint ProgressDialog::STYLE_HORIZONTAL()
	{
		return getStaticField<jint>(
			"android.app.ProgressDialog",
			"STYLE_HORIZONTAL"
		);
	}
	jint ProgressDialog::STYLE_SPINNER()
	{
		return getStaticField<jint>(
			"android.app.ProgressDialog",
			"STYLE_SPINNER"
		);
	}
	
	// QJniObject forward
	ProgressDialog::ProgressDialog(QJniObject obj) : android::app::AlertDialog(obj) {}
	
	// Constructors
	ProgressDialog::ProgressDialog(android::content::Context arg0)
		: android::app::AlertDialog(
			"android.app.ProgressDialog",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	ProgressDialog::ProgressDialog(android::content::Context arg0, jint arg1)
		: android::app::AlertDialog(
			"android.app.ProgressDialog",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	android::app::ProgressDialog ProgressDialog::show(android::content::Context arg0, JString arg1, JString arg2)
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
	android::app::ProgressDialog ProgressDialog::show(android::content::Context arg0, JString arg1, JString arg2, jboolean arg3)
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
	android::app::ProgressDialog ProgressDialog::show(android::content::Context arg0, JString arg1, JString arg2, jboolean arg3, jboolean arg4)
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
	android::app::ProgressDialog ProgressDialog::show(android::content::Context arg0, JString arg1, JString arg2, jboolean arg3, jboolean arg4, JObject arg5)
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
	jint ProgressDialog::getMax()
	{
		return callMethod<jint>(
			"getMax",
			"()I"
		);
	}
	jint ProgressDialog::getProgress()
	{
		return callMethod<jint>(
			"getProgress",
			"()I"
		);
	}
	jint ProgressDialog::getSecondaryProgress()
	{
		return callMethod<jint>(
			"getSecondaryProgress",
			"()I"
		);
	}
	void ProgressDialog::incrementProgressBy(jint arg0)
	{
		callMethod<void>(
			"incrementProgressBy",
			"(I)V",
			arg0
		);
	}
	void ProgressDialog::incrementSecondaryProgressBy(jint arg0)
	{
		callMethod<void>(
			"incrementSecondaryProgressBy",
			"(I)V",
			arg0
		);
	}
	jboolean ProgressDialog::isIndeterminate()
	{
		return callMethod<jboolean>(
			"isIndeterminate",
			"()Z"
		);
	}
	void ProgressDialog::onStart()
	{
		callMethod<void>(
			"onStart",
			"()V"
		);
	}
	void ProgressDialog::setIndeterminate(jboolean arg0)
	{
		callMethod<void>(
			"setIndeterminate",
			"(Z)V",
			arg0
		);
	}
	void ProgressDialog::setIndeterminateDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setIndeterminateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ProgressDialog::setMax(jint arg0)
	{
		callMethod<void>(
			"setMax",
			"(I)V",
			arg0
		);
	}
	void ProgressDialog::setMessage(JString arg0)
	{
		callMethod<void>(
			"setMessage",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void ProgressDialog::setProgress(jint arg0)
	{
		callMethod<void>(
			"setProgress",
			"(I)V",
			arg0
		);
	}
	void ProgressDialog::setProgressDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setProgressDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ProgressDialog::setProgressNumberFormat(JString arg0)
	{
		callMethod<void>(
			"setProgressNumberFormat",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void ProgressDialog::setProgressPercentFormat(java::text::NumberFormat arg0)
	{
		callMethod<void>(
			"setProgressPercentFormat",
			"(Ljava/text/NumberFormat;)V",
			arg0.object()
		);
	}
	void ProgressDialog::setProgressStyle(jint arg0)
	{
		callMethod<void>(
			"setProgressStyle",
			"(I)V",
			arg0
		);
	}
	void ProgressDialog::setSecondaryProgress(jint arg0)
	{
		callMethod<void>(
			"setSecondaryProgress",
			"(I)V",
			arg0
		);
	}
} // namespace android::app

