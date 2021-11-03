#include "../content/res/Resources.hpp"
#include "../view/View.hpp"
#include "./AutoText.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	AutoText::AutoText(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring AutoText::get(jstring arg0, jint arg1, jint arg2, android::view::View arg3)
	{
		return callStaticObjectMethod(
			"android.text.AutoText",
			"get",
			"(Ljava/lang/CharSequence;IILandroid/view/View;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3.object()
		).object<jstring>();
	}
	jint AutoText::getSize(android::view::View arg0)
	{
		return callStaticMethod<jint>(
			"android.text.AutoText",
			"getSize",
			"(Landroid/view/View;)I",
			arg0.object()
		);
	}
} // namespace android::text

