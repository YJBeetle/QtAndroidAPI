#include "../../JString.hpp"
#include "./Spannable_Factory.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	Spannable_Factory::Spannable_Factory(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Spannable_Factory::Spannable_Factory()
		: JObject(
			"android.text.Spannable$Factory",
			"()V"
		) {}
	
	// Methods
	android::text::Spannable_Factory Spannable_Factory::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.Spannable$Factory",
			"getInstance",
			"()Landroid/text/Spannable$Factory;"
		);
	}
	JObject Spannable_Factory::newSpannable(JString arg0) const
	{
		return callObjectMethod(
			"newSpannable",
			"(Ljava/lang/CharSequence;)Landroid/text/Spannable;",
			arg0.object<jstring>()
		);
	}
} // namespace android::text

