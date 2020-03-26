#pragma once

#ifndef ANDROID_ICU_UTIL_LOCALEDATA_PAPERSIZE
#define ANDROID_ICU_UTIL_LOCALEDATA_PAPERSIZE

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::util
{
	class LocaleData_PaperSize : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getWidth();
		jint getHeight();
	};
} // namespace __jni_impl::android::icu::util


namespace __jni_impl::android::icu::util
{
	// Fields
	
	// Constructors
	void LocaleData_PaperSize::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.LocaleData$PaperSize",
			"(V)V");
	}
	
	// Methods
	jint LocaleData_PaperSize::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jint LocaleData_PaperSize::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class LocaleData_PaperSize : public __jni_impl::android::icu::util::LocaleData_PaperSize
	{
	public:
		LocaleData_PaperSize(QAndroidJniObject obj) { __thiz = obj; }
		LocaleData_PaperSize()
		{
			__constructor();
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_LOCALEDATA_PAPERSIZE

