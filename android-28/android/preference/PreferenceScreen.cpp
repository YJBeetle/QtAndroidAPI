#include "../app/Dialog.hpp"
#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../widget/AdapterView.hpp"
#include "../widget/ListView.hpp"
#include "./PreferenceScreen.hpp"

namespace android::preference
{
	// Fields
	
	// QJniObject forward
	PreferenceScreen::PreferenceScreen(QJniObject obj) : android::preference::PreferenceGroup(obj) {}
	
	// Constructors
	
	// Methods
	void PreferenceScreen::bind(android::widget::ListView arg0) const
	{
		callMethod<void>(
			"bind",
			"(Landroid/widget/ListView;)V",
			arg0.object()
		);
	}
	android::app::Dialog PreferenceScreen::getDialog() const
	{
		return callObjectMethod(
			"getDialog",
			"()Landroid/app/Dialog;"
		);
	}
	JObject PreferenceScreen::getRootAdapter() const
	{
		return callObjectMethod(
			"getRootAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	void PreferenceScreen::onDismiss(JObject arg0) const
	{
		callMethod<void>(
			"onDismiss",
			"(Landroid/content/DialogInterface;)V",
			arg0.object()
		);
	}
	void PreferenceScreen::onItemClick(android::widget::AdapterView arg0, android::view::View arg1, jint arg2, jlong arg3) const
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
} // namespace android::preference

