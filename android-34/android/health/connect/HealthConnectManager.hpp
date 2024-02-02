#pragma once

#include "./AggregateRecordsRequest.def.hpp"
#include "./ReadRecordsRequest.def.hpp"
#include "./changelog/ChangeLogTokenRequest.def.hpp"
#include "./changelog/ChangeLogsRequest.def.hpp"
#include "../../../JClass.hpp"
#include "../../../JString.hpp"
#include "../../../java/time/Duration.def.hpp"
#include "../../../java/time/Period.def.hpp"
#include "./HealthConnectManager.def.hpp"

namespace android::health::connect
{
	// Fields
	inline JString HealthConnectManager::ACTION_MANAGE_HEALTH_PERMISSIONS()
	{
		return getStaticObjectField(
			"android.health.connect.HealthConnectManager",
			"ACTION_MANAGE_HEALTH_PERMISSIONS",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthConnectManager::ACTION_REQUEST_EXERCISE_ROUTE()
	{
		return getStaticObjectField(
			"android.health.connect.HealthConnectManager",
			"ACTION_REQUEST_EXERCISE_ROUTE",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthConnectManager::CATEGORY_HEALTH_PERMISSIONS()
	{
		return getStaticObjectField(
			"android.health.connect.HealthConnectManager",
			"CATEGORY_HEALTH_PERMISSIONS",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthConnectManager::EXTRA_EXERCISE_ROUTE()
	{
		return getStaticObjectField(
			"android.health.connect.HealthConnectManager",
			"EXTRA_EXERCISE_ROUTE",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthConnectManager::EXTRA_SESSION_ID()
	{
		return getStaticObjectField(
			"android.health.connect.HealthConnectManager",
			"EXTRA_SESSION_ID",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline void HealthConnectManager::aggregate(android::health::connect::AggregateRecordsRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"aggregate",
			"(Landroid/health/connect/AggregateRecordsRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void HealthConnectManager::aggregateGroupByDuration(android::health::connect::AggregateRecordsRequest arg0, java::time::Duration arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"aggregateGroupByDuration",
			"(Landroid/health/connect/AggregateRecordsRequest;Ljava/time/Duration;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void HealthConnectManager::aggregateGroupByPeriod(android::health::connect::AggregateRecordsRequest arg0, java::time::Period arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"aggregateGroupByPeriod",
			"(Landroid/health/connect/AggregateRecordsRequest;Ljava/time/Period;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void HealthConnectManager::deleteRecords(JObject arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"deleteRecords",
			"(Ljava/util/List;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void HealthConnectManager::deleteRecords(JClass arg0, JObject arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"deleteRecords",
			"(Ljava/lang/Class;Landroid/health/connect/TimeRangeFilter;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object<jclass>(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void HealthConnectManager::getChangeLogToken(android::health::connect::changelog::ChangeLogTokenRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"getChangeLogToken",
			"(Landroid/health/connect/changelog/ChangeLogTokenRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void HealthConnectManager::getChangeLogs(android::health::connect::changelog::ChangeLogsRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"getChangeLogs",
			"(Landroid/health/connect/changelog/ChangeLogsRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void HealthConnectManager::insertRecords(JObject arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"insertRecords",
			"(Ljava/util/List;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void HealthConnectManager::readRecords(android::health::connect::ReadRecordsRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"readRecords",
			"(Landroid/health/connect/ReadRecordsRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void HealthConnectManager::updateRecords(JObject arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"updateRecords",
			"(Ljava/util/List;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::health::connect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
