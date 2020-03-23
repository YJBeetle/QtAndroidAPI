#pragma once

#ifndef ANDROID_VIEW_VIEWSTRUCTURE_HTMLINFO_BUILDER
#define ANDROID_VIEW_VIEWSTRUCTURE_HTMLINFO_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class ViewStructure_HtmlInfo;
}

namespace __jni_impl::android::view
{
	class ViewStructure_HtmlInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject addAttribute(jstring arg0, jstring arg1);
	};
} // namespace __jni_impl::android::view

#include "ViewStructure_HtmlInfo.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void ViewStructure_HtmlInfo_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewStructure$HtmlInfo$Builder",
			"()V");
	}
	
	// Methods
	QAndroidJniObject ViewStructure_HtmlInfo_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/ViewStructure$HtmlInfo;");
	}
	QAndroidJniObject ViewStructure_HtmlInfo_Builder::addAttribute(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"addAttribute",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/view/ViewStructure$HtmlInfo$Builder;",
			arg0,
			arg1);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class ViewStructure_HtmlInfo_Builder : public __jni_impl::android::view::ViewStructure_HtmlInfo_Builder
	{
	public:
		ViewStructure_HtmlInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
		ViewStructure_HtmlInfo_Builder()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_VIEWSTRUCTURE_HTMLINFO_BUILDER

