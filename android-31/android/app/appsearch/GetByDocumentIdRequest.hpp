#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::appsearch
{
	class GetByDocumentIdRequest : public __JniBaseClass
	{
	public:
		// Fields
		static jstring PROJECTION_SCHEMA_TYPE_WILDCARD();
		
		// QJniObject forward
		template<typename ...Ts> explicit GetByDocumentIdRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GetByDocumentIdRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getIds();
		jstring getNamespace();
		__JniBaseClass getProjections();
	};
} // namespace android::app::appsearch

