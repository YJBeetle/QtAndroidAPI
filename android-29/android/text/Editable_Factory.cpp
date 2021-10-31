#include "./Editable_Factory.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	Editable_Factory::Editable_Factory(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Editable_Factory::Editable_Factory()
		: __JniBaseClass(
			"android.text.Editable$Factory",
			"()V"
		) {}
	
	// Methods
	android::text::Editable_Factory Editable_Factory::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Editable$Factory",
			"getInstance",
			"()Landroid/text/Editable$Factory;"
		);
	}
	__JniBaseClass Editable_Factory::newEditable(jstring arg0)
	{
		return callObjectMethod(
			"newEditable",
			"(Ljava/lang/CharSequence;)Landroid/text/Editable;",
			arg0
		);
	}
} // namespace android::text

