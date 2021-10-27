#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::text
{
	class Spannable_Factory : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance();
		QAndroidJniObject newSpannable(jstring arg0);
		QAndroidJniObject newSpannable(const QString &arg0);
	};
} // namespace __jni_impl::android::text


namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void Spannable_Factory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.Spannable$Factory",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Spannable_Factory::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Spannable$Factory",
			"getInstance",
			"()Landroid/text/Spannable$Factory;"
		);
	}
	QAndroidJniObject Spannable_Factory::newSpannable(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"newSpannable",
			"(Ljava/lang/CharSequence;)Landroid/text/Spannable;",
			arg0
		);
	}
	QAndroidJniObject Spannable_Factory::newSpannable(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"newSpannable",
			"(Ljava/lang/CharSequence;)Landroid/text/Spannable;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class Spannable_Factory : public __jni_impl::android::text::Spannable_Factory
	{
	public:
		Spannable_Factory(QAndroidJniObject obj) { __thiz = obj; }
		Spannable_Factory()
		{
			__constructor();
		}
	};
} // namespace android::text

