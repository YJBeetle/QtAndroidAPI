#include "./Spannable_Factory.hpp"

namespace android::text
{
	// Fields
	
	// QJniObject forward
	Spannable_Factory::Spannable_Factory(QJniObject obj) : JObject(obj) {}
	
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
	JObject Spannable_Factory::newSpannable(jstring arg0)
	{
		return callObjectMethod(
			"newSpannable",
			"(Ljava/lang/CharSequence;)Landroid/text/Spannable;",
			arg0
		);
	}
} // namespace android::text

