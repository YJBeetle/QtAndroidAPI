#pragma once

#ifndef ANDROID_TEXT_FORMAT_FORMATTER
#define ANDROID_TEXT_FORMAT_FORMATTER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::text::format
{
	class Formatter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring formatFileSize(__jni_impl::android::content::Context arg0, jlong arg1);
		static jstring formatShortFileSize(__jni_impl::android::content::Context arg0, jlong arg1);
		static jstring formatIpAddress(jint arg0);
	};
} // namespace __jni_impl::android::text::format

#include "../../content/Context.hpp"

namespace __jni_impl::android::text::format
{
	// Fields
	
	// Constructors
	void Formatter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.format.Formatter",
			"()V");
	}
	
	// Methods
	jstring Formatter::formatFileSize(__jni_impl::android::content::Context arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.Formatter",
			"formatFileSize",
			"(Landroid/content/Context;J)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
	jstring Formatter::formatShortFileSize(__jni_impl::android::content::Context arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.Formatter",
			"formatShortFileSize",
			"(Landroid/content/Context;J)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
	jstring Formatter::formatIpAddress(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.Formatter",
			"formatIpAddress",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace __jni_impl::android::text::format

namespace android::text::format
{
	class Formatter : public __jni_impl::android::text::format::Formatter
	{
	public:
		Formatter(QAndroidJniObject obj) { __thiz = obj; }
		Formatter()
		{
			__constructor();
		}
	};
} // namespace android::text::format

#endif // ANDROID_TEXT_FORMAT_FORMATTER

