#include "../content/Context.hpp"
#include "../content/res/Resources.hpp"
#include "../view/Display.hpp"
#include "./Presentation.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	Presentation::Presentation(QAndroidJniObject obj) : android::app::Dialog(obj) {}
	
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
	android::view::Display Presentation::getDisplay() const
	{
		return callObjectMethod(
			"getDisplay",
			"()Landroid/view/Display;"
		);
	}
	android::content::res::Resources Presentation::getResources() const
	{
		return callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	void Presentation::onDisplayChanged() const
	{
		callMethod<void>(
			"onDisplayChanged",
			"()V"
		);
	}
	void Presentation::onDisplayRemoved() const
	{
		callMethod<void>(
			"onDisplayRemoved",
			"()V"
		);
	}
	void Presentation::show() const
	{
		callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace android::app

