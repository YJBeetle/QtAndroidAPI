#pragma once

#include "../../../JObject.hpp"


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
		jstring getDatabaseName();
		jstring getDocumentId();
		jstring getNamespace();
		jstring getPackageName();
		jlong getUsageTimestampMillis();
	};
} // namespace android::app::appsearch

