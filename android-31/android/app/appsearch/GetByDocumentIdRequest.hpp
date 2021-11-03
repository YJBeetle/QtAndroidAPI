#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::app::appsearch
{
	class GetByDocumentIdRequest : public JObject
	{
	public:
		// Fields
		static JString PROJECTION_SCHEMA_TYPE_WILDCARD();
		
		// QJniObject forward
		template<typename ...Ts> explicit GetByDocumentIdRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetByDocumentIdRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getIds();
		JString getNamespace();
		JObject getProjections();
	};
} // namespace android::app::appsearch

