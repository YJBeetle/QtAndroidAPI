#pragma once

#include "../../../JObject.hpp"

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
class JString;

namespace android::view::autofill
{
	class AutofillManager : public JObject
	{
	public:
		// Fields
		static JString EXTRA_ASSIST_STRUCTURE();
		static JString EXTRA_AUTHENTICATION_RESULT();
		static JString EXTRA_CLIENT_STATE();
		
		// QJniObject forward
		template<typename ...Ts> explicit AutofillManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AutofillManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void cancel() const;
		void commit() const;
		void disableAutofillServices() const;
		android::content::ComponentName getAutofillServiceComponentName() const;
		JObject getAvailableFieldClassificationAlgorithms() const;
		JString getDefaultFieldClassificationAlgorithm() const;
		android::view::autofill::AutofillId getNextAutofillId() const;
		android::service::autofill::UserData getUserData() const;
		JString getUserDataId() const;
		jboolean hasEnabledAutofillServices() const;
		jboolean isAutofillSupported() const;
		jboolean isEnabled() const;
		jboolean isFieldClassificationEnabled() const;
		void notifyValueChanged(android::view::View arg0) const;
		void notifyValueChanged(android::view::View arg0, jint arg1, android::view::autofill::AutofillValue arg2) const;
		void notifyViewClicked(android::view::View arg0) const;
		void notifyViewClicked(android::view::View arg0, jint arg1) const;
		void notifyViewEntered(android::view::View arg0) const;
		void notifyViewEntered(android::view::View arg0, jint arg1, android::graphics::Rect arg2) const;
		void notifyViewExited(android::view::View arg0) const;
		void notifyViewExited(android::view::View arg0, jint arg1) const;
		void notifyViewVisibilityChanged(android::view::View arg0, jboolean arg1) const;
		void notifyViewVisibilityChanged(android::view::View arg0, jint arg1, jboolean arg2) const;
		void registerCallback(android::view::autofill::AutofillManager_AutofillCallback arg0) const;
		void requestAutofill(android::view::View arg0) const;
		void requestAutofill(android::view::View arg0, jint arg1, android::graphics::Rect arg2) const;
		void setUserData(android::service::autofill::UserData arg0) const;
		void unregisterCallback(android::view::autofill::AutofillManager_AutofillCallback arg0) const;
	};
} // namespace android::view::autofill

