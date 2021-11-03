#include "./Intent.hpp"
#include "../../JObject.hpp"
#include "./Intent_FilterComparison.hpp"

namespace android::content
{
	// Fields
	
	// QJniObject forward
	Intent_FilterComparison::Intent_FilterComparison(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Intent_FilterComparison::Intent_FilterComparison(android::content::Intent arg0)
		: JObject(
			"android.content.Intent$FilterComparison",
			"(Landroid/content/Intent;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean Intent_FilterComparison::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
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

