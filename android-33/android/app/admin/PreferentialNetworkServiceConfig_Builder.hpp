#pragma once

#include "../../../JIntArray.hpp"
#include "./PreferentialNetworkServiceConfig.def.hpp"
#include "./PreferentialNetworkServiceConfig_Builder.def.hpp"

namespace android::app::admin
{
	// Fields
	
	// Constructors
	inline PreferentialNetworkServiceConfig_Builder::PreferentialNetworkServiceConfig_Builder()
		: JObject(
			"android.app.admin.PreferentialNetworkServiceConfig$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::app::admin::PreferentialNetworkServiceConfig PreferentialNetworkServiceConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/admin/PreferentialNetworkServiceConfig;"
		);
	}
	inline android::app::admin::PreferentialNetworkServiceConfig_Builder PreferentialNetworkServiceConfig_Builder::setEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setEnabled",
			"(Z)Landroid/app/admin/PreferentialNetworkServiceConfig$Builder;",
			arg0
		);
	}
	inline android::app::admin::PreferentialNetworkServiceConfig_Builder PreferentialNetworkServiceConfig_Builder::setExcludedUids(JIntArray arg0) const
	{
		return callObjectMethod(
			"setExcludedUids",
			"([I)Landroid/app/admin/PreferentialNetworkServiceConfig$Builder;",
			arg0.object<jintArray>()
		);
	}
	inline android::app::admin::PreferentialNetworkServiceConfig_Builder PreferentialNetworkServiceConfig_Builder::setFallbackToDefaultConnectionAllowed(jboolean arg0) const
	{
		return callObjectMethod(
			"setFallbackToDefaultConnectionAllowed",
			"(Z)Landroid/app/admin/PreferentialNetworkServiceConfig$Builder;",
			arg0
		);
	}
	inline android::app::admin::PreferentialNetworkServiceConfig_Builder PreferentialNetworkServiceConfig_Builder::setIncludedUids(JIntArray arg0) const
	{
		return callObjectMethod(
			"setIncludedUids",
			"([I)Landroid/app/admin/PreferentialNetworkServiceConfig$Builder;",
			arg0.object<jintArray>()
		);
	}
	inline android::app::admin::PreferentialNetworkServiceConfig_Builder PreferentialNetworkServiceConfig_Builder::setNetworkId(jint arg0) const
	{
		return callObjectMethod(
			"setNetworkId",
			"(I)Landroid/app/admin/PreferentialNetworkServiceConfig$Builder;",
			arg0
		);
	}
} // namespace android::app::admin

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::admin;
#endif
