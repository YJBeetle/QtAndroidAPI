#pragma once

#ifndef ANDROID_WEBKIT_DATESORTER
#define ANDROID_WEBKIT_DATESORTER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::webkit
{
	class DateSorter : public __JniBaseClass
	{
	public:
		// Fields
		static jint DAY_COUNT();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		jint getIndex(jlong arg0);
		jstring getLabel(jint arg0);
		jlong getBoundary(jint arg0);
	};
} // namespace __jni_impl::android::webkit

#include "../content/Context.hpp"

namespace __jni_impl::android::webkit
{
	// Fields
	jint DateSorter::DAY_COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.DateSorter",
			"DAY_COUNT"
		);
	}
	
	// Constructors
	void DateSorter::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.DateSorter",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jint DateSorter::getIndex(jlong arg0)
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"(J)I",
			arg0
		);
	}
	jstring DateSorter::getLabel(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jlong DateSorter::getBoundary(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getBoundary",
			"(I)J",
			arg0
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class DateSorter : public __jni_impl::android::webkit::DateSorter
	{
	public:
		DateSorter(QAndroidJniObject obj) { __thiz = obj; }
		DateSorter(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_DATESORTER

