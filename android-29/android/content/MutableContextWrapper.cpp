#include "./Context.hpp"
#include "./MutableContextWrapper.hpp"

namespace android::content
{
	// Fields
	
	// QJniObject forward
	MutableContextWrapper::MutableContextWrapper(QJniObject obj) : android::content::ContextWrapper(obj) {}
	
	// Constructors
	MutableContextWrapper::MutableContextWrapper(android::content::Context arg0)
		: android::content::ContextWrapper(
			"android.content.MutableContextWrapper",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	void MutableContextWrapper::setBaseContext(android::content::Context arg0) const
	{
		callMethod<void>(
			"setBaseContext",
			"(Landroid/content/Context;)V",
			arg0.object()
		);
	}
} // namespace android::content

