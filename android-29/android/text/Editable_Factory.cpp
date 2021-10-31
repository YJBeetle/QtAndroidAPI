#include "./Editable_Factory.hpp"

namespace android::text
{
	// Fields
	
	Editable_Factory::Editable_Factory(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Editable_Factory::Editable_Factory()
	{
		__thiz = QAndroidJniObject(
			"android.text.Editable$Factory",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Editable_Factory::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Editable$Factory",
			"getInstance",
			"()Landroid/text/Editable$Factory;"
		);
	}
	QAndroidJniObject Editable_Factory::newEditable(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"newEditable",
			"(Ljava/lang/CharSequence;)Landroid/text/Editable;",
			arg0
		);
	}
} // namespace android::text

