#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::app::appsearch
{
	class ReportUsageRequest : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ReportUsageRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReportUsageRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JString getDocumentId() const;
		JString getNamespace() const;
		jlong getUsageTimestampMillis() const;
	};
} // namespace android::app::appsearch

