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
		static QAndroidJniObject FEATURE_DELETE();
		static QAndroidJniObject FEATURE_DOWNLOAD();
		static QAndroidJniObject FEATURE_EDIT();
		static QAndroidJniObject FEATURE_PRINT();
		static QAndroidJniObject FEATURE_SEND();
		static QAndroidJniObject FEATURE_VIEW();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::content


namespace __jni_impl::android::content
{
	// Fields
	QAndroidJniObject QuickViewConstants::FEATURE_DELETE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_DELETE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject QuickViewConstants::FEATURE_DOWNLOAD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_DOWNLOAD",
			"Ljava/lang/String;");
	}
	QAndroidJniObject QuickViewConstants::FEATURE_EDIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_EDIT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject QuickViewConstants::FEATURE_PRINT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_PRINT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject QuickViewConstants::FEATURE_SEND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_SEND",
			"Ljava/lang/String;");
	}
	QAndroidJniObject QuickViewConstants::FEATURE_VIEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_VIEW",
			"Ljava/lang/String;");
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

