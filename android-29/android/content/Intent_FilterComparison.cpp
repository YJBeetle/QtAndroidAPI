#include "./Intent.hpp"
#include "./Intent_FilterComparison.hpp"

namespace android::content
{
	// Fields
	
	// QJniObject forward
	Intent_FilterComparison::Intent_FilterComparison(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Intent_FilterComparison::Intent_FilterComparison(android::content::Intent arg0)
		: __JniBaseClass(
			"android.content.Intent$FilterComparison",
			"(Landroid/content/Intent;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean Intent_FilterComparison::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::content::Intent Intent_FilterComparison::getIntent()
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	jint Intent_FilterComparison::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::content

