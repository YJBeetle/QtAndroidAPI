#include "../content/Context.hpp"
#include "../content/res/AssetManager.hpp"
#include "../content/res/Configuration.hpp"
#include "../content/res/Resources.hpp"
#include "../content/res/Resources_Theme.hpp"
#include "./ContextThemeWrapper.hpp"

namespace android::view
{
	// Fields
	
	ContextThemeWrapper::ContextThemeWrapper(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ContextThemeWrapper::ContextThemeWrapper()
	{
		__thiz = QAndroidJniObject(
			"android.view.ContextThemeWrapper",
			"()V"
		);
	}
	ContextThemeWrapper::ContextThemeWrapper(android::content::Context arg0, android::content::res::Resources_Theme arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.ContextThemeWrapper",
			"(Landroid/content/Context;Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	ContextThemeWrapper::ContextThemeWrapper(android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.ContextThemeWrapper",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void ContextThemeWrapper::applyOverrideConfiguration(android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"applyOverrideConfiguration",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContextThemeWrapper::getAssets()
	{
		return __thiz.callObjectMethod(
			"getAssets",
			"()Landroid/content/res/AssetManager;"
		);
	}
	QAndroidJniObject ContextThemeWrapper::getResources()
	{
		return __thiz.callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	jobject ContextThemeWrapper::getSystemService(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getSystemService",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	QAndroidJniObject ContextThemeWrapper::getTheme()
	{
		return __thiz.callObjectMethod(
			"getTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	void ContextThemeWrapper::setTheme(android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"setTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	void ContextThemeWrapper::setTheme(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTheme",
			"(I)V",
			arg0
		);
	}
} // namespace android::view

