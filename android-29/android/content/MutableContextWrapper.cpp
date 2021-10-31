#include "./Context.hpp"
#include "./MutableContextWrapper.hpp"

namespace android::content
{
	// Fields
	
	MutableContextWrapper::MutableContextWrapper(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MutableContextWrapper::MutableContextWrapper(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.MutableContextWrapper",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void MutableContextWrapper::setBaseContext(android::content::Context arg0)
	{
		__thiz.callMethod<void>(
			"setBaseContext",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::content

