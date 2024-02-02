#pragma once

#include "./LocaleConfig.def.hpp"
#include "../os/LocaleList.def.hpp"
#include "../../JString.hpp"
#include "./LocaleManager.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::os::LocaleList LocaleManager::getApplicationLocales() const
	{
		return callObjectMethod(
			"getApplicationLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	inline android::os::LocaleList LocaleManager::getApplicationLocales(JString arg0) const
	{
		return callObjectMethod(
			"getApplicationLocales",
			"(Ljava/lang/String;)Landroid/os/LocaleList;",
			arg0.object<jstring>()
		);
	}
	inline android::app::LocaleConfig LocaleManager::getOverrideLocaleConfig() const
	{
		return callObjectMethod(
			"getOverrideLocaleConfig",
			"()Landroid/app/LocaleConfig;"
		);
	}
	inline android::os::LocaleList LocaleManager::getSystemLocales() const
	{
		return callObjectMethod(
			"getSystemLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	inline void LocaleManager::setApplicationLocales(android::os::LocaleList arg0) const
	{
		callMethod<void>(
			"setApplicationLocales",
			"(Landroid/os/LocaleList;)V",
			arg0.object()
		);
	}
	inline void LocaleManager::setOverrideLocaleConfig(android::app::LocaleConfig arg0) const
	{
		callMethod<void>(
			"setOverrideLocaleConfig",
			"(Landroid/app/LocaleConfig;)V",
			arg0.object()
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
