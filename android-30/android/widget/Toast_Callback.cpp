#include "./Toast_Callback.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	Toast_Callback::Toast_Callback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Toast_Callback::Toast_Callback()
		: JObject(
			"android.widget.Toast$Callback",
			"()V"
		) {}
	
	// Methods
	void Toast_Callback::onToastHidden() const
	{
		callMethod<void>(
			"onToastHidden",
			"()V"
		);
	}
	void Toast_Callback::onToastShown() const
	{
		callMethod<void>(
			"onToastShown",
			"()V"
		);
	}
} // namespace android::widget

