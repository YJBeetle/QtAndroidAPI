#pragma once

#ifndef ANDROID_TEXT_EDITABLE_FACTORY
#define ANDROID_TEXT_EDITABLE_FACTORY

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::text
{
	class Editable_Factory : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance();
		QAndroidJniObject newEditable(jstring arg0);
	};
} // namespace __jni_impl::android::text


namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void Editable_Factory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.Editable$Factory",
			"()V");
	}
	
	// Methods
	QAndroidJniObject Editable_Factory::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Editable$Factory",
			"getInstance",
			"()Landroid/text/Editable$Factory;");
	}
	QAndroidJniObject Editable_Factory::newEditable(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"newEditable",
			"(Ljava/lang/CharSequence;)Landroid/text/Editable;",
			arg0);
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class Editable_Factory : public __jni_impl::android::text::Editable_Factory
	{
	public:
		Editable_Factory(QAndroidJniObject obj) { __thiz = obj; }
		Editable_Factory()
		{
			__constructor();
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_EDITABLE_FACTORY

