#pragma once

#include "./AssociationInfo.def.hpp"
#include "../content/Intent.def.hpp"
#include "../../java/io/InputStream.def.hpp"
#include "../../java/io/OutputStream.def.hpp"
#include "../../JString.hpp"
#include "./CompanionDeviceService.def.hpp"

namespace android::companion
{
	// Fields
	inline JString CompanionDeviceService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.companion.CompanionDeviceService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline CompanionDeviceService::CompanionDeviceService()
		: android::app::Service(
			"android.companion.CompanionDeviceService",
			"()V"
		) {}
	
	// Methods
	inline void CompanionDeviceService::attachSystemDataTransport(jint arg0, java::io::InputStream arg1, java::io::OutputStream arg2) const
	{
		callMethod<void>(
			"attachSystemDataTransport",
			"(ILjava/io/InputStream;Ljava/io/OutputStream;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline void CompanionDeviceService::detachSystemDataTransport(jint arg0) const
	{
		callMethod<void>(
			"detachSystemDataTransport",
			"(I)V",
			arg0
		);
	}
	inline JObject CompanionDeviceService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void CompanionDeviceService::onDeviceAppeared(android::companion::AssociationInfo arg0) const
	{
		callMethod<void>(
			"onDeviceAppeared",
			"(Landroid/companion/AssociationInfo;)V",
			arg0.object()
		);
	}
	inline void CompanionDeviceService::onDeviceAppeared(JString arg0) const
	{
		callMethod<void>(
			"onDeviceAppeared",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void CompanionDeviceService::onDeviceDisappeared(android::companion::AssociationInfo arg0) const
	{
		callMethod<void>(
			"onDeviceDisappeared",
			"(Landroid/companion/AssociationInfo;)V",
			arg0.object()
		);
	}
	inline void CompanionDeviceService::onDeviceDisappeared(JString arg0) const
	{
		callMethod<void>(
			"onDeviceDisappeared",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::companion

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::companion;
#endif
