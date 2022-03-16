#pragma once

#include "../../content/ComponentName.def.hpp"
#include "../../graphics/Rect.def.hpp"
#include "../../service/autofill/UserData.def.hpp"
#include "../View.def.hpp"
#include "./AutofillId.def.hpp"
#include "./AutofillManager_AutofillCallback.def.hpp"
#include "./AutofillValue.def.hpp"
#include "../../../JString.hpp"
#include "./AutofillManager.def.hpp"

namespace android::view::autofill
{
	// Fields
	inline JString AutofillManager::EXTRA_ASSIST_STRUCTURE()
	{
		return getStaticObjectField(
			"android.view.autofill.AutofillManager",
			"EXTRA_ASSIST_STRUCTURE",
			"Ljava/lang/String;"
		);
	}
	inline JString AutofillManager::EXTRA_AUTHENTICATION_RESULT()
	{
		return getStaticObjectField(
			"android.view.autofill.AutofillManager",
			"EXTRA_AUTHENTICATION_RESULT",
			"Ljava/lang/String;"
		);
	}
	inline JString AutofillManager::EXTRA_CLIENT_STATE()
	{
		return getStaticObjectField(
			"android.view.autofill.AutofillManager",
			"EXTRA_CLIENT_STATE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline void AutofillManager::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline void AutofillManager::commit() const
	{
		callMethod<void>(
			"commit",
			"()V"
		);
	}
	inline void AutofillManager::disableAutofillServices() const
	{
		callMethod<void>(
			"disableAutofillServices",
			"()V"
		);
	}
	inline android::content::ComponentName AutofillManager::getAutofillServiceComponentName() const
	{
		return callObjectMethod(
			"getAutofillServiceComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	inline JObject AutofillManager::getAvailableFieldClassificationAlgorithms() const
	{
		return callObjectMethod(
			"getAvailableFieldClassificationAlgorithms",
			"()Ljava/util/List;"
		);
	}
	inline JString AutofillManager::getDefaultFieldClassificationAlgorithm() const
	{
		return callObjectMethod(
			"getDefaultFieldClassificationAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline android::view::autofill::AutofillId AutofillManager::getNextAutofillId() const
	{
		return callObjectMethod(
			"getNextAutofillId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	inline android::service::autofill::UserData AutofillManager::getUserData() const
	{
		return callObjectMethod(
			"getUserData",
			"()Landroid/service/autofill/UserData;"
		);
	}
	inline JString AutofillManager::getUserDataId() const
	{
		return callObjectMethod(
			"getUserDataId",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean AutofillManager::hasEnabledAutofillServices() const
	{
		return callMethod<jboolean>(
			"hasEnabledAutofillServices",
			"()Z"
		);
	}
	inline jboolean AutofillManager::isAutofillSupported() const
	{
		return callMethod<jboolean>(
			"isAutofillSupported",
			"()Z"
		);
	}
	inline jboolean AutofillManager::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline jboolean AutofillManager::isFieldClassificationEnabled() const
	{
		return callMethod<jboolean>(
			"isFieldClassificationEnabled",
			"()Z"
		);
	}
	inline void AutofillManager::notifyValueChanged(android::view::View arg0) const
	{
		callMethod<void>(
			"notifyValueChanged",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void AutofillManager::notifyValueChanged(android::view::View arg0, jint arg1, android::view::autofill::AutofillValue arg2) const
	{
		callMethod<void>(
			"notifyValueChanged",
			"(Landroid/view/View;ILandroid/view/autofill/AutofillValue;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void AutofillManager::notifyViewClicked(android::view::View arg0) const
	{
		callMethod<void>(
			"notifyViewClicked",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void AutofillManager::notifyViewClicked(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"notifyViewClicked",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void AutofillManager::notifyViewEntered(android::view::View arg0) const
	{
		callMethod<void>(
			"notifyViewEntered",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void AutofillManager::notifyViewEntered(android::view::View arg0, jint arg1, android::graphics::Rect arg2) const
	{
		callMethod<void>(
			"notifyViewEntered",
			"(Landroid/view/View;ILandroid/graphics/Rect;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void AutofillManager::notifyViewExited(android::view::View arg0) const
	{
		callMethod<void>(
			"notifyViewExited",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void AutofillManager::notifyViewExited(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"notifyViewExited",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void AutofillManager::notifyViewVisibilityChanged(android::view::View arg0, jboolean arg1) const
	{
		callMethod<void>(
			"notifyViewVisibilityChanged",
			"(Landroid/view/View;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void AutofillManager::notifyViewVisibilityChanged(android::view::View arg0, jint arg1, jboolean arg2) const
	{
		callMethod<void>(
			"notifyViewVisibilityChanged",
			"(Landroid/view/View;IZ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void AutofillManager::registerCallback(android::view::autofill::AutofillManager_AutofillCallback arg0) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/view/autofill/AutofillManager$AutofillCallback;)V",
			arg0.object()
		);
	}
	inline void AutofillManager::requestAutofill(android::view::View arg0) const
	{
		callMethod<void>(
			"requestAutofill",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void AutofillManager::requestAutofill(android::view::View arg0, jint arg1, android::graphics::Rect arg2) const
	{
		callMethod<void>(
			"requestAutofill",
			"(Landroid/view/View;ILandroid/graphics/Rect;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void AutofillManager::setUserData(android::service::autofill::UserData arg0) const
	{
		callMethod<void>(
			"setUserData",
			"(Landroid/service/autofill/UserData;)V",
			arg0.object()
		);
	}
	inline void AutofillManager::unregisterCallback(android::view::autofill::AutofillManager_AutofillCallback arg0) const
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/view/autofill/AutofillManager$AutofillCallback;)V",
			arg0.object()
		);
	}
} // namespace android::view::autofill

// Base class headers

