#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::graphics
{
	class Rect;
}
namespace android::service::autofill
{
	class UserData;
}
namespace android::view
{
	class View;
}
namespace android::view::autofill
{
	class AutofillId;
}
namespace android::view::autofill
{
	class AutofillManager_AutofillCallback;
}
namespace android::view::autofill
{
	class AutofillValue;
}

namespace android::view::autofill
{
	class AutofillManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring EXTRA_ASSIST_STRUCTURE();
		static jstring EXTRA_AUTHENTICATION_RESULT();
		static jstring EXTRA_CLIENT_STATE();
		
		AutofillManager(QAndroidJniObject obj);
		// Constructors
		AutofillManager() = default;
		
		// Methods
		void cancel();
		void commit();
		void disableAutofillServices();
		QAndroidJniObject getAutofillServiceComponentName();
		QAndroidJniObject getAvailableFieldClassificationAlgorithms();
		jstring getDefaultFieldClassificationAlgorithm();
		QAndroidJniObject getNextAutofillId();
		QAndroidJniObject getUserData();
		jstring getUserDataId();
		jboolean hasEnabledAutofillServices();
		jboolean isAutofillSupported();
		jboolean isEnabled();
		jboolean isFieldClassificationEnabled();
		void notifyValueChanged(android::view::View arg0);
		void notifyValueChanged(android::view::View arg0, jint arg1, android::view::autofill::AutofillValue arg2);
		void notifyViewClicked(android::view::View arg0);
		void notifyViewClicked(android::view::View arg0, jint arg1);
		void notifyViewEntered(android::view::View arg0);
		void notifyViewEntered(android::view::View arg0, jint arg1, android::graphics::Rect arg2);
		void notifyViewExited(android::view::View arg0);
		void notifyViewExited(android::view::View arg0, jint arg1);
		void notifyViewVisibilityChanged(android::view::View arg0, jboolean arg1);
		void notifyViewVisibilityChanged(android::view::View arg0, jint arg1, jboolean arg2);
		void registerCallback(android::view::autofill::AutofillManager_AutofillCallback arg0);
		void requestAutofill(android::view::View arg0);
		void requestAutofill(android::view::View arg0, jint arg1, android::graphics::Rect arg2);
		void setUserData(android::service::autofill::UserData arg0);
		void unregisterCallback(android::view::autofill::AutofillManager_AutofillCallback arg0);
	};
} // namespace android::view::autofill

