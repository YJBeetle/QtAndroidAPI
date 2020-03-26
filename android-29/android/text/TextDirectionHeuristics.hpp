#pragma once

#ifndef ANDROID_TEXT_TEXTDIRECTIONHEURISTICS
#define ANDROID_TEXT_TEXTDIRECTIONHEURISTICS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::text
{
	class TextDirectionHeuristics : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ANYRTL_LTR();
		static QAndroidJniObject FIRSTSTRONG_LTR();
		static QAndroidJniObject FIRSTSTRONG_RTL();
		static QAndroidJniObject LOCALE();
		static QAndroidJniObject LTR();
		static QAndroidJniObject RTL();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::text


namespace __jni_impl::android::text
{
	// Fields
	QAndroidJniObject TextDirectionHeuristics::ANYRTL_LTR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"ANYRTL_LTR",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	QAndroidJniObject TextDirectionHeuristics::FIRSTSTRONG_LTR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"FIRSTSTRONG_LTR",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	QAndroidJniObject TextDirectionHeuristics::FIRSTSTRONG_RTL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"FIRSTSTRONG_RTL",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	QAndroidJniObject TextDirectionHeuristics::LOCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"LOCALE",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	QAndroidJniObject TextDirectionHeuristics::LTR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"LTR",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	QAndroidJniObject TextDirectionHeuristics::RTL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.TextDirectionHeuristics",
			"RTL",
			"Landroid/text/TextDirectionHeuristic;"
		);
	}
	
	// Constructors
	void TextDirectionHeuristics::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.TextDirectionHeuristics",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::text

namespace android::text
{
	class TextDirectionHeuristics : public __jni_impl::android::text::TextDirectionHeuristics
	{
	public:
		TextDirectionHeuristics(QAndroidJniObject obj) { __thiz = obj; }
		TextDirectionHeuristics()
		{
			__constructor();
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_TEXTDIRECTIONHEURISTICS

