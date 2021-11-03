#include "../content/res/Resources.hpp"
#include "../view/View.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./AutoText.hpp"

namespace android::text
{
	// Fields
	
	// QJniObject forward
	AutoText::AutoText(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString AutoText::get(JString arg0, jint arg1, jint arg2, android::view::View arg3)
	{
		return callStaticObjectMethod(
			"android.text.AutoText",
			"get",
			"(Ljava/lang/CharSequence;IILandroid/view/View;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object()
		);
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

