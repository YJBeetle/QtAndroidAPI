#pragma once

#ifndef ANDROID_VIEW_VIEWSTRUCTURE_HTMLINFO
#define ANDROID_VIEW_VIEWSTRUCTURE_HTMLINFO

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::view
{
	class ViewStructure_HtmlInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getAttributes();
		jstring getTag();
	};
} // namespace __jni_impl::android::view


namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void ViewStructure_HtmlInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewStructure$HtmlInfo",
			"()V");
	}
	
	// Methods
	QAndroidJniObject ViewStructure_HtmlInfo::getAttributes()
	{
		return __thiz.callObjectMethod(
			"getAttributes",
			"()Ljava/util/List;"
		);
	}
	jstring ViewStructure_HtmlInfo::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class ViewStructure_HtmlInfo : public __jni_impl::android::view::ViewStructure_HtmlInfo
	{
	public:
		ViewStructure_HtmlInfo(QAndroidJniObject obj) { __thiz = obj; }
		ViewStructure_HtmlInfo()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_VIEWSTRUCTURE_HTMLINFO

