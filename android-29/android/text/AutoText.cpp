#include "../content/res/Resources.hpp"
#include "../view/View.hpp"
#include "./AutoText.hpp"

namespace android::text
{
	// Fields
	
	AutoText::AutoText(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring AutoText::get(jstring arg0, jint arg1, jint arg2, android::view::View arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.AutoText",
			"get",
			"(Ljava/lang/CharSequence;IILandroid/view/View;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		).object<jstring>();
	}
	jstring AutoText::get(const QString &arg0, jint arg1, jint arg2, android::view::View arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.AutoText",
			"get",
			"(Ljava/lang/CharSequence;IILandroid/view/View;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		).object<jstring>();
	}
	jint AutoText::getSize(android::view::View arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.AutoText",
			"getSize",
			"(Landroid/view/View;)I",
			arg0.__jniObject().object()
		);
	}
} // namespace android::text

