#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::app::appsearch
{
	class ReportSystemUsageRequest : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ReportSystemUsageRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReportSystemUsageRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JString getDatabaseName();
		JString getDocumentId();
		JString getNamespace();
		JString getPackageName();
		jlong getUsageTimestampMillis();
	};
} // namespace android::app::appsearch

