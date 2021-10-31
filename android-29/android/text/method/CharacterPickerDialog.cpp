#include "../../content/Context.hpp"
#include "../../os/Bundle.hpp"
#include "../../view/View.hpp"
#include "../../widget/AdapterView.hpp"
#include "./CharacterPickerDialog.hpp"

namespace android::text::method
{
	// Fields
	
	CharacterPickerDialog::CharacterPickerDialog(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CharacterPickerDialog::CharacterPickerDialog(android::content::Context arg0, android::view::View arg1, __JniBaseClass arg2, jstring arg3, jboolean arg4)
	{
		__thiz = QAndroidJniObject(
			"android.text.method.CharacterPickerDialog",
			"(Landroid/content/Context;Landroid/view/View;Landroid/text/Editable;Ljava/lang/String;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4
		);
	}
	
	// Methods
	void CharacterPickerDialog::onClick(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void CharacterPickerDialog::onItemClick(android::widget::AdapterView arg0, android::view::View arg1, jint arg2, jlong arg3)
	{
		__thiz.callMethod<void>(
			"onItemClick",
			"(Landroid/widget/AdapterView;Landroid/view/View;IJ)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
} // namespace android::text::method

