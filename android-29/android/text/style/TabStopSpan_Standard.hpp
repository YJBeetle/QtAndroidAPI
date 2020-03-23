#pragma once

#ifndef ANDROID_TEXT_STYLE_TABSTOPSPAN_STANDARD
#define ANDROID_TEXT_STYLE_TABSTOPSPAN_STANDARD

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::text::style
{
	class TabStopSpan_Standard : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		jint getTabStop();
	};
} // namespace __jni_impl::android::text::style


namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void TabStopSpan_Standard::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TabStopSpan$Standard",
			"(I)V",
			arg0);
	}
	
	// Methods
	jint TabStopSpan_Standard::getTabStop()
	{
		return __thiz.callMethod<jint>(
			"getTabStop",
			"()I");
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class TabStopSpan_Standard : public __jni_impl::android::text::style::TabStopSpan_Standard
	{
	public:
		TabStopSpan_Standard(QAndroidJniObject obj) { __thiz = obj; }
		TabStopSpan_Standard(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_TABSTOPSPAN_STANDARD

