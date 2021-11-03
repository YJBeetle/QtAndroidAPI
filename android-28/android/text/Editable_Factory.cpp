#include "../../JString.hpp"
#include "./Editable_Factory.hpp"

namespace android::text
{
	// Fields
	
	// QJniObject forward
	Editable_Factory::Editable_Factory(QJniObject obj) : JObject(obj) {}
	
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
	JObject Editable_Factory::newEditable(JString arg0)
	{
		return callObjectMethod(
			"newEditable",
			"(Ljava/lang/CharSequence;)Landroid/text/Editable;",
			arg0.object<jstring>()
		);
	}
} // namespace android::text

