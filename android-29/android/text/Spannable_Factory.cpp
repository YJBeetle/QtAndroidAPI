#include "./Spannable_Factory.hpp"

namespace android::text
{
	// Fields
	
	Spannable_Factory::Spannable_Factory(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Spannable_Factory::Spannable_Factory()
	{
		__thiz = QAndroidJniObject(
			"android.text.Spannable$Factory",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Spannable_Factory::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Spannable$Factory",
			"getInstance",
			"()Landroid/text/Spannable$Factory;"
		);
	}
	QAndroidJniObject Spannable_Factory::newSpannable(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"newSpannable",
			"(Ljava/lang/CharSequence;)Landroid/text/Spannable;",
			arg0
		);
	}
} // namespace android::text

