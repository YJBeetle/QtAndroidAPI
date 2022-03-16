#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::app::appsearch
{
	class ReportSystemUsageRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReportSystemUsageRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReportSystemUsageRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString getDatabaseName() const;
		JString getDocumentId() const;
		JString getNamespace() const;
		JString getPackageName() const;
		jlong getUsageTimestampMillis() const;
	};
} // namespace android::app::appsearch

