#include "../content/Context.hpp"
#include "../content/res/Resources.hpp"
#include "../view/Display.hpp"
#include "./Presentation.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	Presentation::Presentation(QJniObject obj) : android::app::Dialog(obj) {}
	
	// Constructors
	Presentation::Presentation(android::content::Context arg0, android::view::Display arg1)
		: android::app::Dialog(
			"android.app.Presentation",
			"(Landroid/content/Context;Landroid/view/Display;)V",
			arg0.object(),
			arg1.object()
		) {}
	Presentation::Presentation(android::content::Context arg0, android::view::Display arg1, jint arg2)
		: android::app::Dialog(
			"android.app.Presentation",
			"(Landroid/content/Context;Landroid/view/Display;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	android::view::Display Presentation::getDisplay()
	{
		return callObjectMethod(
			"getDisplay",
			"()Landroid/view/Display;"
		);
	}
	android::content::res::Resources Presentation::getResources()
	{
		return callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	void Presentation::onDisplayChanged()
	{
		callMethod<void>(
			"onDisplayChanged",
			"()V"
		);
	}
	void Presentation::onDisplayRemoved()
	{
		callMethod<void>(
			"onDisplayRemoved",
			"()V"
		);
	}
	void Presentation::show()
	{
		callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace android::app

