#pragma once

#include "../accounts/Account.def.hpp"
#include "./SyncRequest.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../JString.hpp"
#include "./SyncRequest_Builder.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline SyncRequest_Builder::SyncRequest_Builder()
		: JObject(
			"android.content.SyncRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::content::SyncRequest SyncRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/content/SyncRequest;"
		);
	}
	inline android::content::SyncRequest_Builder SyncRequest_Builder::setDisallowMetered(jboolean arg0) const
	{
		return callObjectMethod(
			"setDisallowMetered",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	inline android::content::SyncRequest_Builder SyncRequest_Builder::setExpedited(jboolean arg0) const
	{
		return callObjectMethod(
			"setExpedited",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	inline android::content::SyncRequest_Builder SyncRequest_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/content/SyncRequest$Builder;",
			arg0.object()
		);
	}
	inline android::content::SyncRequest_Builder SyncRequest_Builder::setIgnoreBackoff(jboolean arg0) const
	{
		return callObjectMethod(
			"setIgnoreBackoff",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	inline android::content::SyncRequest_Builder SyncRequest_Builder::setIgnoreSettings(jboolean arg0) const
	{
		return callObjectMethod(
			"setIgnoreSettings",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	inline android::content::SyncRequest_Builder SyncRequest_Builder::setManual(jboolean arg0) const
	{
		return callObjectMethod(
			"setManual",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	inline android::content::SyncRequest_Builder SyncRequest_Builder::setNoRetry(jboolean arg0) const
	{
		return callObjectMethod(
			"setNoRetry",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	inline android::content::SyncRequest_Builder SyncRequest_Builder::setRequiresCharging(jboolean arg0) const
	{
		return callObjectMethod(
			"setRequiresCharging",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	inline android::content::SyncRequest_Builder SyncRequest_Builder::setSyncAdapter(android::accounts::Account arg0, JString arg1) const
	{
		return callObjectMethod(
			"setSyncAdapter",
			"(Landroid/accounts/Account;Ljava/lang/String;)Landroid/content/SyncRequest$Builder;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::content::SyncRequest_Builder SyncRequest_Builder::syncOnce() const
	{
		return callObjectMethod(
			"syncOnce",
			"()Landroid/content/SyncRequest$Builder;"
		);
	}
	inline android::content::SyncRequest_Builder SyncRequest_Builder::syncPeriodic(jlong arg0, jlong arg1) const
	{
		return callObjectMethod(
			"syncPeriodic",
			"(JJ)Landroid/content/SyncRequest$Builder;",
			arg0,
			arg1
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
