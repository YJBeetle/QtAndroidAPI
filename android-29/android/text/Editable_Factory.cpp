#include "../../JString.hpp"
#include "./Editable_Factory.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	Editable_Factory::Editable_Factory(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Editable_Factory::Editable_Factory()
		: JObject(
			"android.text.Editable$Factory",
			"()V"
		) {}
	
	// Methods
	android::text::Editable_Factory Editable_Factory::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.Editable$Factory",
			"getInstance",
			"()Landroid/text/Editable$Factory;"
		);
	}
	JObject Editable_Factory::newEditable(JString arg0) const
	{
		return callObjectMethod(
			"newEditable",
			"(Ljava/lang/CharSequence;)Landroid/text/Editable;",
			arg0.object<jstring>()
		);
	}
} // namespace android::text

