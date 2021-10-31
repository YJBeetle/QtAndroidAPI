#include "../content/Context.hpp"
#include "../content/res/Resources.hpp"
#include "../view/Display.hpp"
#include "./Presentation.hpp"

namespace android::app
{
	// Fields
	
	Presentation::Presentation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Presentation::Presentation(android::content::Context arg0, android::view::Display arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.Presentation",
			"(Landroid/content/Context;Landroid/view/Display;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	Presentation::Presentation(android::content::Context arg0, android::view::Display arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Presentation",
			"(Landroid/content/Context;Landroid/view/Display;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject Presentation::getDisplay()
	{
		return __thiz.callObjectMethod(
			"getDisplay",
			"()Landroid/view/Display;"
		);
	}
	QAndroidJniObject Presentation::getResources()
	{
		return __thiz.callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	void Presentation::onDisplayChanged()
	{
		__thiz.callMethod<void>(
			"onDisplayChanged",
			"()V"
		);
	}
	void Presentation::onDisplayRemoved()
	{
		__thiz.callMethod<void>(
			"onDisplayRemoved",
			"()V"
		);
	}
	void Presentation::show()
	{
		__thiz.callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace android::app

