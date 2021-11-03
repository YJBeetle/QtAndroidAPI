#include "./AlertDialog.hpp"
#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/View.hpp"
#include "./AlertDialog_Builder.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	AlertDialog_Builder::AlertDialog_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
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
	android::app::AlertDialog AlertDialog_Builder::create()
	{
		return callObjectMethod(
			"create",
			"()Landroid/app/AlertDialog;"
		);
	}
	android::content::Context AlertDialog_Builder::getContext()
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setAdapter(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"setAdapter",
			"(Landroid/widget/ListAdapter;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setCancelable(jboolean arg0)
	{
		return callObjectMethod(
			"setCancelable",
			"(Z)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setCursor(JObject arg0, JObject arg1, jstring arg2)
	{
		return callObjectMethod(
			"setCursor",
			"(Landroid/database/Cursor;Landroid/content/DialogInterface$OnClickListener;Ljava/lang/String;)Landroid/app/AlertDialog$Builder;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setCustomTitle(android::view::View arg0)
	{
		return callObjectMethod(
			"setCustomTitle",
			"(Landroid/view/View;)Landroid/app/AlertDialog$Builder;",
			arg0.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setIcon(android::graphics::drawable::Drawable arg0)
	{
		return callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Drawable;)Landroid/app/AlertDialog$Builder;",
			arg0.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setIcon(jint arg0)
	{
		return callObjectMethod(
			"setIcon",
			"(I)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setIconAttribute(jint arg0)
	{
		return callObjectMethod(
			"setIconAttribute",
			"(I)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setInverseBackgroundForced(jboolean arg0)
	{
		return callObjectMethod(
			"setInverseBackgroundForced",
			"(Z)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setItems(jarray arg0, JObject arg1)
	{
		return callObjectMethod(
			"setItems",
			"([Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setItems(jint arg0, JObject arg1)
	{
		return callObjectMethod(
			"setItems",
			"(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setMessage(jint arg0)
	{
		return callObjectMethod(
			"setMessage",
			"(I)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setMessage(jstring arg0)
	{
		return callObjectMethod(
			"setMessage",
			"(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setMultiChoiceItems(jarray arg0, jbooleanArray arg1, JObject arg2)
	{
		return callObjectMethod(
			"setMultiChoiceItems",
			"([Ljava/lang/CharSequence;[ZLandroid/content/DialogInterface$OnMultiChoiceClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setMultiChoiceItems(jint arg0, jbooleanArray arg1, JObject arg2)
	{
		return callObjectMethod(
			"setMultiChoiceItems",
			"(I[ZLandroid/content/DialogInterface$OnMultiChoiceClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setMultiChoiceItems(JObject arg0, jstring arg1, jstring arg2, JObject arg3)
	{
		return callObjectMethod(
			"setMultiChoiceItems",
			"(Landroid/database/Cursor;Ljava/lang/String;Ljava/lang/String;Landroid/content/DialogInterface$OnMultiChoiceClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setNegativeButton(jint arg0, JObject arg1)
	{
		return callObjectMethod(
			"setNegativeButton",
			"(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setNegativeButton(jstring arg0, JObject arg1)
	{
		return callObjectMethod(
			"setNegativeButton",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setNeutralButton(jint arg0, JObject arg1)
	{
		return callObjectMethod(
			"setNeutralButton",
			"(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setNeutralButton(jstring arg0, JObject arg1)
	{
		return callObjectMethod(
			"setNeutralButton",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setOnCancelListener(JObject arg0)
	{
		return callObjectMethod(
			"setOnCancelListener",
			"(Landroid/content/DialogInterface$OnCancelListener;)Landroid/app/AlertDialog$Builder;",
			arg0.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setOnDismissListener(JObject arg0)
	{
		return callObjectMethod(
			"setOnDismissListener",
			"(Landroid/content/DialogInterface$OnDismissListener;)Landroid/app/AlertDialog$Builder;",
			arg0.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setOnItemSelectedListener(JObject arg0)
	{
		return callObjectMethod(
			"setOnItemSelectedListener",
			"(Landroid/widget/AdapterView$OnItemSelectedListener;)Landroid/app/AlertDialog$Builder;",
			arg0.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setOnKeyListener(JObject arg0)
	{
		return callObjectMethod(
			"setOnKeyListener",
			"(Landroid/content/DialogInterface$OnKeyListener;)Landroid/app/AlertDialog$Builder;",
			arg0.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setPositiveButton(jint arg0, JObject arg1)
	{
		return callObjectMethod(
			"setPositiveButton",
			"(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setPositiveButton(jstring arg0, JObject arg1)
	{
		return callObjectMethod(
			"setPositiveButton",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setSingleChoiceItems(jarray arg0, jint arg1, JObject arg2)
	{
		return callObjectMethod(
			"setSingleChoiceItems",
			"([Ljava/lang/CharSequence;ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setSingleChoiceItems(JObject arg0, jint arg1, JObject arg2)
	{
		return callObjectMethod(
			"setSingleChoiceItems",
			"(Landroid/widget/ListAdapter;ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setSingleChoiceItems(jint arg0, jint arg1, JObject arg2)
	{
		return callObjectMethod(
			"setSingleChoiceItems",
			"(IILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setSingleChoiceItems(JObject arg0, jint arg1, jstring arg2, JObject arg3)
	{
		return callObjectMethod(
			"setSingleChoiceItems",
			"(Landroid/database/Cursor;ILjava/lang/String;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setTitle(jint arg0)
	{
		return callObjectMethod(
			"setTitle",
			"(I)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setTitle(jstring arg0)
	{
		return callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setView(android::view::View arg0)
	{
		return callObjectMethod(
			"setView",
			"(Landroid/view/View;)Landroid/app/AlertDialog$Builder;",
			arg0.object()
		);
	}
	android::app::AlertDialog_Builder AlertDialog_Builder::setView(jint arg0)
	{
		return callObjectMethod(
			"setView",
			"(I)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	android::app::AlertDialog AlertDialog_Builder::show()
	{
		return callObjectMethod(
			"show",
			"()Landroid/app/AlertDialog;"
		);
	}
} // namespace android::app

