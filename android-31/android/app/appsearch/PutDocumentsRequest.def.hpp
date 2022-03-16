#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class PutDocumentsRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PutDocumentsRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PutDocumentsRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getGenericDocuments() const;
	};
} // namespace android::app::appsearch

