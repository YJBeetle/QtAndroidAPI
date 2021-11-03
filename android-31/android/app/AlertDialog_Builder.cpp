#include "../../JArray.hpp"
#include "../../JBooleanArray.hpp"
#include "./AlertDialog.hpp"
#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/View.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./AlertDialog_Builder.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	AlertDialog_Builder::AlertDialog_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AlertDialog_Builder::AlertDialog_Builder(android::content::Context arg0)
		: JObject(
			"android.app.AlertDialog$Builder",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	AlertDialog_Builder::AlertDialog_Builder(android::content::Context arg0, jint arg1)
		: JObject(
			"android.app.AlertDialog$Builder",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	android::app::AlertDialog AlertDialog_Builder::create() const
	{
		return callObjectMethod(
			"create",
			"()Landroid/app/AlertDialog;"
		);
	}
	android::content::Context AlertDialog_Builder::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setAdapter(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setAdapter",
			"(Landroid/widget/ListAdapter;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setCancelable(jboolean arg0) const
	{
		return callObjectMethod(
			"setCancelable",
			"(Z)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setCursor(JObject arg0, JObject arg1, JString arg2) const
	{
		return callObjectMethod(
			"setCursor",
			"(Landroid/database/Cursor;Landroid/content/DialogInterface$OnClickListener;Ljava/lang/String;)Landroid/app/AlertDialog$Builder;",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setCustomTitle(android::view::View arg0) const
	{
		return callObjectMethod(
			"setCustomTitle",
			"(Landroid/view/View;)Landroid/app/AlertDialog$Builder;",
			arg0.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setIcon(android::graphics::drawable::Drawable arg0) const
	{
		return callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Drawable;)Landroid/app/AlertDialog$Builder;",
			arg0.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setIcon(jint arg0) const
	{
		return callObjectMethod(
			"setIcon",
			"(I)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setIconAttribute(jint arg0) const
	{
		return callObjectMethod(
			"setIconAttribute",
			"(I)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setInverseBackgroundForced(jboolean arg0) const
	{
		return callObjectMethod(
			"setInverseBackgroundForced",
			"(Z)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setItems(JArray arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setItems",
			"([Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setItems(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setItems",
			"(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setMessage(jint arg0) const
	{
		return callObjectMethod(
			"setMessage",
			"(I)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setMessage(JString arg0) const
	{
		return callObjectMethod(
			"setMessage",
			"(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;",
			arg0.object<jstring>()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setMultiChoiceItems(JArray arg0, JBooleanArray arg1, JObject arg2) const
	{
		return callObjectMethod(
			"setMultiChoiceItems",
			"([Ljava/lang/CharSequence;[ZLandroid/content/DialogInterface$OnMultiChoiceClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0.object<jarray>(),
			arg1.object<jbooleanArray>(),
			arg2.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setMultiChoiceItems(jint arg0, JBooleanArray arg1, JObject arg2) const
	{
		return callObjectMethod(
			"setMultiChoiceItems",
			"(I[ZLandroid/content/DialogInterface$OnMultiChoiceClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1.object<jbooleanArray>(),
			arg2.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setMultiChoiceItems(JObject arg0, JString arg1, JString arg2, JObject arg3) const
	{
		return callObjectMethod(
			"setMultiChoiceItems",
			"(Landroid/database/Cursor;Ljava/lang/String;Ljava/lang/String;Landroid/content/DialogInterface$OnMultiChoiceClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setNegativeButton(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setNegativeButton",
			"(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setNegativeButton(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setNegativeButton",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setNeutralButton(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setNeutralButton",
			"(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setNeutralButton(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setNeutralButton",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setOnCancelListener(JObject arg0) const
	{
		return callObjectMethod(
			"setOnCancelListener",
			"(Landroid/content/DialogInterface$OnCancelListener;)Landroid/app/AlertDialog$Builder;",
			arg0.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setOnDismissListener(JObject arg0) const
	{
		return callObjectMethod(
			"setOnDismissListener",
			"(Landroid/content/DialogInterface$OnDismissListener;)Landroid/app/AlertDialog$Builder;",
			arg0.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setOnItemSelectedListener(JObject arg0) const
	{
		return callObjectMethod(
			"setOnItemSelectedListener",
			"(Landroid/widget/AdapterView$OnItemSelectedListener;)Landroid/app/AlertDialog$Builder;",
			arg0.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setOnKeyListener(JObject arg0) const
	{
		return callObjectMethod(
			"setOnKeyListener",
			"(Landroid/content/DialogInterface$OnKeyListener;)Landroid/app/AlertDialog$Builder;",
			arg0.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setPositiveButton(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setPositiveButton",
			"(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setPositiveButton(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setPositiveButton",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setSingleChoiceItems(JArray arg0, jint arg1, JObject arg2) const
	{
		return callObjectMethod(
			"setSingleChoiceItems",
			"([Ljava/lang/CharSequence;ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0.object<jarray>(),
			arg1,
			arg2.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setSingleChoiceItems(JObject arg0, jint arg1, JObject arg2) const
	{
		return callObjectMethod(
			"setSingleChoiceItems",
			"(Landroid/widget/ListAdapter;ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setSingleChoiceItems(jint arg0, jint arg1, JObject arg2) const
	{
		return callObjectMethod(
			"setSingleChoiceItems",
			"(IILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setSingleChoiceItems(JObject arg0, jint arg1, JString arg2, JObject arg3) const
	{
		return callObjectMethod(
			"setSingleChoiceItems",
			"(Landroid/database/Cursor;ILjava/lang/String;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0.object(),
			arg1,
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setTitle(jint arg0) const
	{
		return callObjectMethod(
			"setTitle",
			"(I)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setTitle(JString arg0) const
	{
		return callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;",
			arg0.object<jstring>()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setView(android::view::View arg0) const
	{
		return callObjectMethod(
			"setView",
			"(Landroid/view/View;)Landroid/app/AlertDialog$Builder;",
			arg0.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setView(jint arg0) const
	{
		return callObjectMethod(
			"setView",
			"(I)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	android::app::AlertDialog AlertDialog_Builder::show() const
	{
		return callObjectMethod(
			"show",
			"()Landroid/app/AlertDialog;"
		);
	}
} // namespace android::app

