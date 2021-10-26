#pragma once

#ifndef ANDROID_VIEW_AUTOFILL_AUTOFILLMANAGER
#define ANDROID_VIEW_AUTOFILL_AUTOFILLMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::autofill
{
	class AutofillManager_AutofillCallback;
}
namespace __jni_impl::android::service::autofill
{
	class UserData;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::view::autofill
{
	class AutofillValue;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::view::autofill
{
	class AutofillId;
}

namespace __jni_impl::android::view::autofill
{
	class AutofillManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring EXTRA_ASSIST_STRUCTURE();
		static jstring EXTRA_AUTHENTICATION_RESULT();
		static jstring EXTRA_CLIENT_STATE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean isEnabled();
		void cancel();
		void commit();
		void registerCallback(__jni_impl::android::view::autofill::AutofillManager_AutofillCallback arg0);
		void unregisterCallback(__jni_impl::android::view::autofill::AutofillManager_AutofillCallback arg0);
		void setUserData(__jni_impl::android::service::autofill::UserData arg0);
		QAndroidJniObject getUserData();
		void requestAutofill(__jni_impl::android::view::View arg0);
		void requestAutofill(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::graphics::Rect arg2);
		void notifyViewEntered(__jni_impl::android::view::View arg0);
		void notifyViewEntered(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::graphics::Rect arg2);
		void notifyViewExited(__jni_impl::android::view::View arg0, jint arg1);
		void notifyViewExited(__jni_impl::android::view::View arg0);
		void notifyViewVisibilityChanged(__jni_impl::android::view::View arg0, jint arg1, jboolean arg2);
		void notifyViewVisibilityChanged(__jni_impl::android::view::View arg0, jboolean arg1);
		void notifyValueChanged(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::autofill::AutofillValue arg2);
		void notifyValueChanged(__jni_impl::android::view::View arg0);
		void notifyViewClicked(__jni_impl::android::view::View arg0);
		void notifyViewClicked(__jni_impl::android::view::View arg0, jint arg1);
		void disableAutofillServices();
		jboolean hasEnabledAutofillServices();
		QAndroidJniObject getAutofillServiceComponentName();
		jstring getUserDataId();
		jboolean isFieldClassificationEnabled();
		jstring getDefaultFieldClassificationAlgorithm();
		QAndroidJniObject getAvailableFieldClassificationAlgorithms();
		jboolean isAutofillSupported();
		QAndroidJniObject getNextAutofillId();
	};
} // namespace __jni_impl::android::view::autofill

#include "AutofillManager_AutofillCallback.hpp"
#include "../../service/autofill/UserData.hpp"
#include "../View.hpp"
#include "../../graphics/Rect.hpp"
#include "AutofillValue.hpp"
#include "../../content/ComponentName.hpp"
#include "AutofillId.hpp"

namespace __jni_impl::android::view::autofill
{
	// Fields
	jstring AutofillManager::EXTRA_ASSIST_STRUCTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.autofill.AutofillManager",
			"EXTRA_ASSIST_STRUCTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AutofillManager::EXTRA_AUTHENTICATION_RESULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.autofill.AutofillManager",
			"EXTRA_AUTHENTICATION_RESULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AutofillManager::EXTRA_CLIENT_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.autofill.AutofillManager",
			"EXTRA_CLIENT_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void AutofillManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.autofill.AutofillManager",
			"(V)V");
	}
	
	// Methods
	jboolean AutofillManager::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void AutofillManager::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	void AutofillManager::commit()
	{
		__thiz.callMethod<void>(
			"commit",
			"()V"
		);
	}
	void AutofillManager::registerCallback(__jni_impl::android::view::autofill::AutofillManager_AutofillCallback arg0)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/view/autofill/AutofillManager$AutofillCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void AutofillManager::unregisterCallback(__jni_impl::android::view::autofill::AutofillManager_AutofillCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterCallback",
			"(Landroid/view/autofill/AutofillManager$AutofillCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void AutofillManager::setUserData(__jni_impl::android::service::autofill::UserData arg0)
	{
		__thiz.callMethod<void>(
			"setUserData",
			"(Landroid/service/autofill/UserData;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AutofillManager::getUserData()
	{
		return __thiz.callObjectMethod(
			"getUserData",
			"()Landroid/service/autofill/UserData;"
		);
	}
	void AutofillManager::requestAutofill(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"requestAutofill",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void AutofillManager::requestAutofill(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::graphics::Rect arg2)
	{
		__thiz.callMethod<void>(
			"requestAutofill",
			"(Landroid/view/View;ILandroid/graphics/Rect;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void AutofillManager::notifyViewEntered(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"notifyViewEntered",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void AutofillManager::notifyViewEntered(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::graphics::Rect arg2)
	{
		__thiz.callMethod<void>(
			"notifyViewEntered",
			"(Landroid/view/View;ILandroid/graphics/Rect;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void AutofillManager::notifyViewExited(__jni_impl::android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"notifyViewExited",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AutofillManager::notifyViewExited(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"notifyViewExited",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void AutofillManager::notifyViewVisibilityChanged(__jni_impl::android::view::View arg0, jint arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"notifyViewVisibilityChanged",
			"(Landroid/view/View;IZ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void AutofillManager::notifyViewVisibilityChanged(__jni_impl::android::view::View arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"notifyViewVisibilityChanged",
			"(Landroid/view/View;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AutofillManager::notifyValueChanged(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::autofill::AutofillValue arg2)
	{
		__thiz.callMethod<void>(
			"notifyValueChanged",
			"(Landroid/view/View;ILandroid/view/autofill/AutofillValue;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void AutofillManager::notifyValueChanged(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"notifyValueChanged",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void AutofillManager::notifyViewClicked(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"notifyViewClicked",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void AutofillManager::notifyViewClicked(__jni_impl::android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"notifyViewClicked",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AutofillManager::disableAutofillServices()
	{
		__thiz.callMethod<void>(
			"disableAutofillServices",
			"()V"
		);
	}
	jboolean AutofillManager::hasEnabledAutofillServices()
	{
		return __thiz.callMethod<jboolean>(
			"hasEnabledAutofillServices",
			"()Z"
		);
	}
	QAndroidJniObject AutofillManager::getAutofillServiceComponentName()
	{
		return __thiz.callObjectMethod(
			"getAutofillServiceComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	jstring AutofillManager::getUserDataId()
	{
		return __thiz.callObjectMethod(
			"getUserDataId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean AutofillManager::isFieldClassificationEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isFieldClassificationEnabled",
			"()Z"
		);
	}
	jstring AutofillManager::getDefaultFieldClassificationAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getDefaultFieldClassificationAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject AutofillManager::getAvailableFieldClassificationAlgorithms()
	{
		return __thiz.callObjectMethod(
			"getAvailableFieldClassificationAlgorithms",
			"()Ljava/util/List;"
		);
	}
	jboolean AutofillManager::isAutofillSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isAutofillSupported",
			"()Z"
		);
	}
	QAndroidJniObject AutofillManager::getNextAutofillId()
	{
		return __thiz.callObjectMethod(
			"getNextAutofillId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
} // namespace __jni_impl::android::view::autofill

namespace android::view::autofill
{
	class AutofillManager : public __jni_impl::android::view::autofill::AutofillManager
	{
	public:
		AutofillManager(QAndroidJniObject obj) { __thiz = obj; }
		AutofillManager()
		{
			__constructor();
		}
	};
} // namespace android::view::autofill

#endif // ANDROID_VIEW_AUTOFILL_AUTOFILLMANAGER

