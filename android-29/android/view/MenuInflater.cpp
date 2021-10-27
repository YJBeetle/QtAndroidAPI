#include "../content/Context.hpp"
#include "./MenuInflater.hpp"

namespace android::view
{
	// Fields
	
	MenuInflater::MenuInflater(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MenuInflater::MenuInflater(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.MenuInflater",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void MenuInflater::inflate(jint arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"inflate",
			"(ILandroid/view/Menu;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace android::view

