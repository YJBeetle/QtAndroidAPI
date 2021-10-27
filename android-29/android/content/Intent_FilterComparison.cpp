#include "./Intent.hpp"
#include "./Intent_FilterComparison.hpp"

namespace android::content
{
	// Fields
	
	Intent_FilterComparison::Intent_FilterComparison(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Intent_FilterComparison::Intent_FilterComparison(android::content::Intent &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.Intent$FilterComparison",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean Intent_FilterComparison::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Intent_FilterComparison::getIntent()
	{
		return __thiz.callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	jint Intent_FilterComparison::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::content

