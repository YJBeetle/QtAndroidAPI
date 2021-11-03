#pragma once

#include "../../../JObject.hpp"


namespace android::app::appsearch
{
	class RemoveByDocumentIdRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoveByDocumentIdRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoveByDocumentIdRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getIds();
		jstring getNamespace();
	};
} // namespace android::app::appsearch

