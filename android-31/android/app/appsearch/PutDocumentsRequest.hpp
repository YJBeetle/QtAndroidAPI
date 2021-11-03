#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class PutDocumentsRequest : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PutDocumentsRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PutDocumentsRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getGenericDocuments() const;
	};
} // namespace android::app::appsearch

