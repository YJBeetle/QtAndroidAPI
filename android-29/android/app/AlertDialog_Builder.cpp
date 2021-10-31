#include "./AlertDialog.hpp"
#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/View.hpp"
#include "./AlertDialog_Builder.hpp"

namespace android::app
{
	// Fields
	
	AlertDialog_Builder::AlertDialog_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AlertDialog_Builder::AlertDialog_Builder(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.AlertDialog$Builder",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	AlertDialog_Builder::AlertDialog_Builder(android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.AlertDialog$Builder",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject AlertDialog_Builder::create()
	{
		return __thiz.callObjectMethod(
			"create",
			"()Landroid/app/AlertDialog;"
		);
	}
	QAndroidJniObject AlertDialog_Builder::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	QAndroidJniObject AlertDialog_Builder::setAdapter(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"setAdapter",
			"(Landroid/widget/ListAdapter;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AlertDialog_Builder::setCancelable(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setCancelable",
			"(Z)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	QAndroidJniObject AlertDialog_Builder::setCursor(__JniBaseClass arg0, __JniBaseClass arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"setCursor",
			"(Landroid/database/Cursor;Landroid/content/DialogInterface$OnClickListener;Ljava/lang/String;)Landroid/app/AlertDialog$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject AlertDialog_Builder::setCustomTitle(android::view::View arg0)
	{
		return __thiz.callObjectMethod(
			"setCustomTitle",
			"(Landroid/view/View;)Landroid/app/AlertDialog$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AlertDialog_Builder::setIcon(android::graphics::drawable::Drawable arg0)
	{
		return __thiz.callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Drawable;)Landroid/app/AlertDialog$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AlertDialog_Builder::setIcon(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setIcon",
			"(I)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	QAndroidJniObject AlertDialog_Builder::setIconAttribute(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setIconAttribute",
			"(I)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	QAndroidJniObject AlertDialog_Builder::setInverseBackgroundForced(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setInverseBackgroundForced",
			"(Z)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	QAndroidJniObject AlertDialog_Builder::setItems(jarray arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"setItems",
			"([Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AlertDialog_Builder::setItems(jint arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"setItems",
			"(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AlertDialog_Builder::setMessage(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setMessage",
			"(I)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	QAndroidJniObject AlertDialog_Builder::setMessage(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setMessage",
			"(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	QAndroidJniObject AlertDialog_Builder::setMultiChoiceItems(jarray arg0, jbooleanArray arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"setMultiChoiceItems",
			"([Ljava/lang/CharSequence;[ZLandroid/content/DialogInterface$OnMultiChoiceClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AlertDialog_Builder::setMultiChoiceItems(jint arg0, jbooleanArray arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"setMultiChoiceItems",
			"(I[ZLandroid/content/DialogInterface$OnMultiChoiceClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AlertDialog_Builder::setMultiChoiceItems(__JniBaseClass arg0, jstring arg1, jstring arg2, __JniBaseClass arg3)
	{
		return __thiz.callObjectMethod(
			"setMultiChoiceItems",
			"(Landroid/database/Cursor;Ljava/lang/String;Ljava/lang/String;Landroid/content/DialogInterface$OnMultiChoiceClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject AlertDialog_Builder::setNegativeButton(jint arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"setNegativeButton",
			"(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AlertDialog_Builder::setNegativeButton(jstring arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"setNegativeButton",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AlertDialog_Builder::setNeutralButton(jint arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"setNeutralButton",
			"(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AlertDialog_Builder::setNeutralButton(jstring arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"setNeutralButton",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AlertDialog_Builder::setOnCancelListener(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setOnCancelListener",
			"(Landroid/content/DialogInterface$OnCancelListener;)Landroid/app/AlertDialog$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AlertDialog_Builder::setOnDismissListener(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setOnDismissListener",
			"(Landroid/content/DialogInterface$OnDismissListener;)Landroid/app/AlertDialog$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AlertDialog_Builder::setOnItemSelectedListener(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setOnItemSelectedListener",
			"(Landroid/widget/AdapterView$OnItemSelectedListener;)Landroid/app/AlertDialog$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AlertDialog_Builder::setOnKeyListener(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setOnKeyListener",
			"(Landroid/content/DialogInterface$OnKeyListener;)Landroid/app/AlertDialog$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AlertDialog_Builder::setPositiveButton(jint arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"setPositiveButton",
			"(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AlertDialog_Builder::setPositiveButton(jstring arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"setPositiveButton",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AlertDialog_Builder::setSingleChoiceItems(jarray arg0, jint arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"setSingleChoiceItems",
			"([Ljava/lang/CharSequence;ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AlertDialog_Builder::setSingleChoiceItems(__JniBaseClass arg0, jint arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"setSingleChoiceItems",
			"(Landroid/widget/ListAdapter;ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AlertDialog_Builder::setSingleChoiceItems(jint arg0, jint arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"setSingleChoiceItems",
			"(IILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AlertDialog_Builder::setSingleChoiceItems(__JniBaseClass arg0, jint arg1, jstring arg2, __JniBaseClass arg3)
	{
		return __thiz.callObjectMethod(
			"setSingleChoiceItems",
			"(Landroid/database/Cursor;ILjava/lang/String;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject AlertDialog_Builder::setTitle(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setTitle",
			"(I)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	QAndroidJniObject AlertDialog_Builder::setTitle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	QAndroidJniObject AlertDialog_Builder::setView(android::view::View arg0)
	{
		return __thiz.callObjectMethod(
			"setView",
			"(Landroid/view/View;)Landroid/app/AlertDialog$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AlertDialog_Builder::setView(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setView",
			"(I)Landroid/app/AlertDialog$Builder;",
			arg0
		);
	}
	QAndroidJniObject AlertDialog_Builder::show()
	{
		return __thiz.callObjectMethod(
			"show",
			"()Landroid/app/AlertDialog;"
		);
	}
} // namespace android::app

