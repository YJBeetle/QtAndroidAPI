#include "./WebSettings_LayoutAlgorithm.hpp"

namespace android::webkit
{
	// Fields
	QAndroidJniObject WebSettings_LayoutAlgorithm::NARROW_COLUMNS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"NARROW_COLUMNS",
			"Landroid/webkit/WebSettings$LayoutAlgorithm;"
		);
	}
	QAndroidJniObject WebSettings_LayoutAlgorithm::NORMAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"NORMAL",
			"Landroid/webkit/WebSettings$LayoutAlgorithm;"
		);
	}
	QAndroidJniObject WebSettings_LayoutAlgorithm::SINGLE_COLUMN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"SINGLE_COLUMN",
			"Landroid/webkit/WebSettings$LayoutAlgorithm;"
		);
	}
	QAndroidJniObject WebSettings_LayoutAlgorithm::TEXT_AUTOSIZING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"TEXT_AUTOSIZING",
			"Landroid/webkit/WebSettings$LayoutAlgorithm;"
		);
	}
	
	WebSettings_LayoutAlgorithm::WebSettings_LayoutAlgorithm(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject WebSettings_LayoutAlgorithm::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/WebSettings$LayoutAlgorithm;",
			arg0
		);
	}
	QAndroidJniObject WebSettings_LayoutAlgorithm::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/WebSettings$LayoutAlgorithm;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray WebSettings_LayoutAlgorithm::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$LayoutAlgorithm",
			"values",
			"()[Landroid/webkit/WebSettings$LayoutAlgorithm;"
		).object<jarray>();
	}
} // namespace android::webkit

