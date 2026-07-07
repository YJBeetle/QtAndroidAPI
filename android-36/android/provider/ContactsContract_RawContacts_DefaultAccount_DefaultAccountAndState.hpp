#pragma once

#include "../accounts/Account.def.hpp"
#include "../../JObject.hpp"
#include "./ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState.def.hpp"

namespace android::provider
{
	// Fields
	inline jint ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState::DEFAULT_ACCOUNT_STATE_CLOUD()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$RawContacts$DefaultAccount$DefaultAccountAndState",
			"DEFAULT_ACCOUNT_STATE_CLOUD"
		);
	}
	inline jint ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState::DEFAULT_ACCOUNT_STATE_LOCAL()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$RawContacts$DefaultAccount$DefaultAccountAndState",
			"DEFAULT_ACCOUNT_STATE_LOCAL"
		);
	}
	inline jint ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState::DEFAULT_ACCOUNT_STATE_NOT_SET()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$RawContacts$DefaultAccount$DefaultAccountAndState",
			"DEFAULT_ACCOUNT_STATE_NOT_SET"
		);
	}
	inline jint ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState::DEFAULT_ACCOUNT_STATE_SIM()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$RawContacts$DefaultAccount$DefaultAccountAndState",
			"DEFAULT_ACCOUNT_STATE_SIM"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::provider::ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState::ofCloud(android::accounts::Account arg0)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$RawContacts$DefaultAccount$DefaultAccountAndState",
			"ofCloud",
			"(Landroid/accounts/Account;)Landroid/provider/ContactsContract$RawContacts$DefaultAccount$DefaultAccountAndState;",
			arg0.object()
		);
	}
	inline android::provider::ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState::ofLocal()
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$RawContacts$DefaultAccount$DefaultAccountAndState",
			"ofLocal",
			"()Landroid/provider/ContactsContract$RawContacts$DefaultAccount$DefaultAccountAndState;"
		);
	}
	inline android::provider::ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState::ofNotSet()
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$RawContacts$DefaultAccount$DefaultAccountAndState",
			"ofNotSet",
			"()Landroid/provider/ContactsContract$RawContacts$DefaultAccount$DefaultAccountAndState;"
		);
	}
	inline android::provider::ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState::ofSim(android::accounts::Account arg0)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$RawContacts$DefaultAccount$DefaultAccountAndState",
			"ofSim",
			"(Landroid/accounts/Account;)Landroid/provider/ContactsContract$RawContacts$DefaultAccount$DefaultAccountAndState;",
			arg0.object()
		);
	}
	inline jboolean ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::accounts::Account ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState::getAccount() const
	{
		return callObjectMethod(
			"getAccount",
			"()Landroid/accounts/Account;"
		);
	}
	inline jint ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline jint ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
