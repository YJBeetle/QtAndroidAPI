#include "../../content/Context.hpp"
#include "../../os/Bundle.hpp"
#include "../../view/View.hpp"
#include "../../widget/AdapterView.hpp"
#include "./CharacterPickerDialog.hpp"

namespace android::text::method
{
	// Fields
	
	// QJniObject forward
	CharacterPickerDialog::CharacterPickerDialog(QJniObject obj) : android::app::Dialog(obj) {}
	
	// Constructors
	CharacterPickerDialog::CharacterPickerDialog(android::content::Context arg0, android::view::View arg1, JObject arg2, jstring arg3, jboolean arg4)
		: android::app::Dialog(
			"android.text.method.CharacterPickerDialog",
			"(Landroid/content/Context;Landroid/view/View;Landroid/text/Editable;Ljava/lang/String;Z)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3,
			arg4
		) {}
	
	// Methods
	void CharacterPickerDialog::onClick(android::view::View arg0)
	{
		callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void CharacterPickerDialog::onItemClick(android::widget::AdapterView arg0, android::view::View arg1, jint arg2, jlong arg3)
	{
		callMethod<void>(
			"onItemClick",
			"(Landroid/widget/AdapterView;Landroid/view/View;IJ)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
} // namespace android::text::method

