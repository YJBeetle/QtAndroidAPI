#pragma once

#include "../../../JObject.hpp"


namespace android::app::appsearch
{
	class GetByDocumentIdRequest : public JObject
	{
	public:
		// Fields
		static jstring PROJECTION_SCHEMA_TYPE_WILDCARD();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GetByDocumentIdRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetByDocumentIdRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getIds();
		jstring getNamespace();
		JObject getProjections();
	};
} // namespace android::app::appsearch

