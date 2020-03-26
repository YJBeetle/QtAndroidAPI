#pragma once

#ifndef ANDROID_VIEW_TEXTSERVICE_TEXTSERVICESMANAGER
#define ANDROID_VIEW_TEXTSERVICE_TEXTSERVICESMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::textservice
{
	class SpellCheckerSession;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::view::textservice
{
	class TextServicesManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject newSpellCheckerSession(__jni_impl::android::os::Bundle arg0, __jni_impl::java::util::Locale arg1, __jni_impl::__JniBaseClass arg2, jboolean arg3);
	};
} // namespace __jni_impl::android::view::textservice

#include "SpellCheckerSession.hpp"
#include "../../os/Bundle.hpp"
#include "../../../java/util/Locale.hpp"

namespace __jni_impl::android::view::textservice
{
	// Fields
	
	// Constructors
	void TextServicesManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.TextServicesManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TextServicesManager::newSpellCheckerSession(__jni_impl::android::os::Bundle arg0, __jni_impl::java::util::Locale arg1, __jni_impl::__JniBaseClass arg2, jboolean arg3)
	{
		return __thiz.callObjectMethod(
			"newSpellCheckerSession",
			"(Landroid/os/Bundle;Ljava/util/Locale;Landroid/view/textservice/SpellCheckerSession$SpellCheckerSessionListener;Z)Landroid/view/textservice/SpellCheckerSession;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
} // namespace __jni_impl::android::view::textservice

namespace android::view::textservice
{
	class TextServicesManager : public __jni_impl::android::view::textservice::TextServicesManager
	{
	public:
		TextServicesManager(QAndroidJniObject obj) { __thiz = obj; }
		TextServicesManager()
		{
			__constructor();
		}
	};
} // namespace android::view::textservice

#endif // ANDROID_VIEW_TEXTSERVICE_TEXTSERVICESMANAGER

