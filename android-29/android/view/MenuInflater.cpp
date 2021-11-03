#include "../content/Context.hpp"
#include "./MenuInflater.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	MenuInflater::MenuInflater(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MenuInflater::MenuInflater(android::content::Context arg0)
		: JObject(
			"android.view.MenuInflater",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	void MenuInflater::inflate(jint arg0, JObject arg1)
	{
		callMethod<void>(
			"inflate",
			"(ILandroid/view/Menu;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::view

