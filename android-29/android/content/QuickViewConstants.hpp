#pragma once

#ifndef ANDROID_CONTENT_QUICKVIEWCONSTANTS
#define ANDROID_CONTENT_QUICKVIEWCONSTANTS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::content
{
	class QuickViewConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FEATURE_DELETE();
		static jstring FEATURE_DOWNLOAD();
		static jstring FEATURE_EDIT();
		static jstring FEATURE_PRINT();
		static jstring FEATURE_SEND();
		static jstring FEATURE_VIEW();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::content


namespace __jni_impl::android::content
{
	// Fields
	jstring QuickViewConstants::FEATURE_DELETE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_DELETE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring QuickViewConstants::FEATURE_DOWNLOAD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_DOWNLOAD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring QuickViewConstants::FEATURE_EDIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_EDIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring QuickViewConstants::FEATURE_PRINT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_PRINT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring QuickViewConstants::FEATURE_SEND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_SEND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring QuickViewConstants::FEATURE_VIEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_VIEW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void QuickViewConstants::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.QuickViewConstants",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::content

namespace android::content
{
	class QuickViewConstants : public __jni_impl::android::content::QuickViewConstants
	{
	public:
		QuickViewConstants(QAndroidJniObject obj) { __thiz = obj; }
		QuickViewConstants()
		{
			__constructor();
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_QUICKVIEWCONSTANTS

