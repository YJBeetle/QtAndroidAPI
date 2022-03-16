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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GetByDocumentIdRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetByDocumentIdRequest(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getIds() const;
		JString getNamespace() const;
		JObject getProjections() const;
	};
} // namespace android::app::appsearch

