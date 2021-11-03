#pragma once

#include "../../../JObject.hpp"


namespace android::app::appsearch
{
	class ReportUsageRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReportUsageRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReportUsageRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getDocumentId();
		jstring getNamespace();
		jlong getUsageTimestampMillis();
	};
} // namespace android::app::appsearch

