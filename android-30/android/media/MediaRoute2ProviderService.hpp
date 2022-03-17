#pragma once

#include "../content/Intent.def.hpp"
#include "./RouteDiscoveryPreference.def.hpp"
#include "./RoutingSessionInfo.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../JString.hpp"
#include "./MediaRoute2ProviderService.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaRoute2ProviderService::REASON_INVALID_COMMAND()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2ProviderService",
			"REASON_INVALID_COMMAND"
		);
	}
	inline jint MediaRoute2ProviderService::REASON_NETWORK_ERROR()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2ProviderService",
			"REASON_NETWORK_ERROR"
		);
	}
	inline jint MediaRoute2ProviderService::REASON_REJECTED()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2ProviderService",
			"REASON_REJECTED"
		);
	}
	inline jint MediaRoute2ProviderService::REASON_ROUTE_NOT_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2ProviderService",
			"REASON_ROUTE_NOT_AVAILABLE"
		);
	}
	inline jint MediaRoute2ProviderService::REASON_UNKNOWN_ERROR()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2ProviderService",
			"REASON_UNKNOWN_ERROR"
		);
	}
	inline jlong MediaRoute2ProviderService::REQUEST_ID_NONE()
	{
		return getStaticField<jlong>(
			"android.media.MediaRoute2ProviderService",
			"REQUEST_ID_NONE"
		);
	}
	inline JString MediaRoute2ProviderService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.media.MediaRoute2ProviderService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline MediaRoute2ProviderService::MediaRoute2ProviderService()
		: android::app::Service(
			"android.media.MediaRoute2ProviderService",
			"()V"
		) {}
	
	// Methods
	inline JObject MediaRoute2ProviderService::getAllSessionInfo() const
	{
		return callObjectMethod(
			"getAllSessionInfo",
			"()Ljava/util/List;"
		);
	}
	inline android::media::RoutingSessionInfo MediaRoute2ProviderService::getSessionInfo(JString arg0) const
	{
		return callObjectMethod(
			"getSessionInfo",
			"(Ljava/lang/String;)Landroid/media/RoutingSessionInfo;",
			arg0.object<jstring>()
		);
	}
	inline void MediaRoute2ProviderService::notifyRequestFailed(jlong arg0, jint arg1) const
	{
		callMethod<void>(
			"notifyRequestFailed",
			"(JI)V",
			arg0,
			arg1
		);
	}
	inline void MediaRoute2ProviderService::notifyRoutes(JObject arg0) const
	{
		callMethod<void>(
			"notifyRoutes",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	inline void MediaRoute2ProviderService::notifySessionCreated(jlong arg0, android::media::RoutingSessionInfo arg1) const
	{
		callMethod<void>(
			"notifySessionCreated",
			"(JLandroid/media/RoutingSessionInfo;)V",
			arg0,
			arg1.object()
		);
	}
	inline void MediaRoute2ProviderService::notifySessionReleased(JString arg0) const
	{
		callMethod<void>(
			"notifySessionReleased",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void MediaRoute2ProviderService::notifySessionUpdated(android::media::RoutingSessionInfo arg0) const
	{
		callMethod<void>(
			"notifySessionUpdated",
			"(Landroid/media/RoutingSessionInfo;)V",
			arg0.object()
		);
	}
	inline JObject MediaRoute2ProviderService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void MediaRoute2ProviderService::onCreateSession(jlong arg0, JString arg1, JString arg2, android::os::Bundle arg3) const
	{
		callMethod<void>(
			"onCreateSession",
			"(JLjava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	inline void MediaRoute2ProviderService::onDeselectRoute(jlong arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"onDeselectRoute",
			"(JLjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline void MediaRoute2ProviderService::onDiscoveryPreferenceChanged(android::media::RouteDiscoveryPreference arg0) const
	{
		callMethod<void>(
			"onDiscoveryPreferenceChanged",
			"(Landroid/media/RouteDiscoveryPreference;)V",
			arg0.object()
		);
	}
	inline void MediaRoute2ProviderService::onReleaseSession(jlong arg0, JString arg1) const
	{
		callMethod<void>(
			"onReleaseSession",
			"(JLjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void MediaRoute2ProviderService::onSelectRoute(jlong arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"onSelectRoute",
			"(JLjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline void MediaRoute2ProviderService::onSetRouteVolume(jlong arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"onSetRouteVolume",
			"(JLjava/lang/String;I)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void MediaRoute2ProviderService::onSetSessionVolume(jlong arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"onSetSessionVolume",
			"(JLjava/lang/String;I)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void MediaRoute2ProviderService::onTransferToRoute(jlong arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"onTransferToRoute",
			"(JLjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
} // namespace android::media

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

