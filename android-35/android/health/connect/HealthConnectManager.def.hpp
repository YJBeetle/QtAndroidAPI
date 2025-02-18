#pragma once

#include "../../../JObject.hpp"

namespace android::health::connect
{
	class AggregateRecordsRequest;
}
namespace android::health::connect
{
	class ReadRecordsRequest;
}
namespace android::health::connect::changelog
{
	class ChangeLogTokenRequest;
}
namespace android::health::connect::changelog
{
	class ChangeLogsRequest;
}
class JClass;
class JString;
namespace java::time
{
	class Duration;
}
namespace java::time
{
	class Period;
}

namespace android::health::connect
{
	class HealthConnectManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_MANAGE_HEALTH_PERMISSIONS();
		static JString ACTION_REQUEST_EXERCISE_ROUTE();
		static JString CATEGORY_HEALTH_PERMISSIONS();
		static JString EXTRA_EXERCISE_ROUTE();
		static JString EXTRA_SESSION_ID();
		
		// QJniObject forward
		template<typename ...Ts> explicit HealthConnectManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HealthConnectManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void aggregate(android::health::connect::AggregateRecordsRequest arg0, JObject arg1, JObject arg2) const;
		void aggregateGroupByDuration(android::health::connect::AggregateRecordsRequest arg0, java::time::Duration arg1, JObject arg2, JObject arg3) const;
		void aggregateGroupByPeriod(android::health::connect::AggregateRecordsRequest arg0, java::time::Period arg1, JObject arg2, JObject arg3) const;
		void deleteRecords(JObject arg0, JObject arg1, JObject arg2) const;
		void deleteRecords(JClass arg0, JObject arg1, JObject arg2, JObject arg3) const;
		void getChangeLogToken(android::health::connect::changelog::ChangeLogTokenRequest arg0, JObject arg1, JObject arg2) const;
		void getChangeLogs(android::health::connect::changelog::ChangeLogsRequest arg0, JObject arg1, JObject arg2) const;
		void insertRecords(JObject arg0, JObject arg1, JObject arg2) const;
		void readRecords(android::health::connect::ReadRecordsRequest arg0, JObject arg1, JObject arg2) const;
		void updateRecords(JObject arg0, JObject arg1, JObject arg2) const;
	};
} // namespace android::health::connect

