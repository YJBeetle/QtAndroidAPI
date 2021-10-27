#include "../content/Intent.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/View.hpp"
#include "./TabHost.hpp"
#include "./TabHost_TabSpec.hpp"

namespace android::widget
{
	// Fields
	
	TabHost_TabSpec::TabHost_TabSpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring TabHost_TabSpec::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TabHost_TabSpec::setContent(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"setContent",
			"(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TabHost_TabSpec::setContent(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setContent",
			"(Landroid/widget/TabHost$TabContentFactory;)Landroid/widget/TabHost$TabSpec;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TabHost_TabSpec::setContent(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setContent",
			"(I)Landroid/widget/TabHost$TabSpec;",
			arg0
		);
	}
	QAndroidJniObject TabHost_TabSpec::setIndicator(android::view::View arg0)
	{
		return __thiz.callObjectMethod(
			"setIndicator",
			"(Landroid/view/View;)Landroid/widget/TabHost$TabSpec;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TabHost_TabSpec::setIndicator(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setIndicator",
			"(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;",
			arg0
		);
	}
	QAndroidJniObject TabHost_TabSpec::setIndicator(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setIndicator",
			"(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TabHost_TabSpec::setIndicator(jstring arg0, android::graphics::drawable::Drawable arg1)
	{
		return __thiz.callObjectMethod(
			"setIndicator",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Drawable;)Landroid/widget/TabHost$TabSpec;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject TabHost_TabSpec::setIndicator(const QString &arg0, android::graphics::drawable::Drawable arg1)
	{
		return __thiz.callObjectMethod(
			"setIndicator",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Drawable;)Landroid/widget/TabHost$TabSpec;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::widget

