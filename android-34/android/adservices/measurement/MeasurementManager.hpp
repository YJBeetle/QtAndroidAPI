#pragma once

#include "./DeletionRequest.def.hpp"
#include "./WebSourceRegistrationRequest.def.hpp"
#include "./WebTriggerRegistrationRequest.def.hpp"
#include "../../content/Context.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../view/InputEvent.def.hpp"
#include "./MeasurementManager.def.hpp"

namespace android::adservices::measurement
{
	// Fields
	inline jint MeasurementManager::MEASUREMENT_API_STATE_DISABLED()
	{
		return getStaticField<jint>(
			"android.adservices.measurement.MeasurementManager",
			"MEASUREMENT_API_STATE_DISABLED"
		);
	}
	inline jint MeasurementManager::MEASUREMENT_API_STATE_ENABLED()
	{
		return getStaticField<jint>(
			"android.adservices.measurement.MeasurementManager",
			"MEASUREMENT_API_STATE_ENABLED"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::adservices::measurement::MeasurementManager MeasurementManager::get(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.adservices.measurement.MeasurementManager",
			"get",
			"(Landroid/content/Context;)Landroid/adservices/measurement/MeasurementManager;",
			arg0.object()
		);
	}
	inline void MeasurementManager::deleteRegistrations(android::adservices::measurement::DeletionRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"deleteRegistrations",
			"(Landroid/adservices/measurement/DeletionRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void MeasurementManager::getMeasurementApiStatus(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"getMeasurementApiStatus",
			"(Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MeasurementManager::registerSource(android::net::Uri arg0, android::view::InputEvent arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"registerSource",
			"(Landroid/net/Uri;Landroid/view/InputEvent;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void MeasurementManager::registerTrigger(android::net::Uri arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"registerTrigger",
			"(Landroid/net/Uri;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void MeasurementManager::registerWebSource(android::adservices::measurement::WebSourceRegistrationRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"registerWebSource",
			"(Landroid/adservices/measurement/WebSourceRegistrationRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void MeasurementManager::registerWebTrigger(android::adservices::measurement::WebTriggerRegistrationRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"registerWebTrigger",
			"(Landroid/adservices/measurement/WebTriggerRegistrationRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::adservices::measurement

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::measurement;
#endif
