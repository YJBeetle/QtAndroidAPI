#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::appsearch
{
	class PutDocumentsRequest;
}

namespace android::app::appsearch
{
	class PutDocumentsRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PutDocumentsRequest_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PutDocumentsRequest_Builder(QJniObject obj);
		
		// Constructors
		PutDocumentsRequest_Builder();
		
		// Methods
		android::app::appsearch::PutDocumentsRequest_Builder addGenericDocuments(jarray arg0);
		android::app::appsearch::PutDocumentsRequest_Builder addGenericDocuments(__JniBaseClass arg0);
		android::app::appsearch::PutDocumentsRequest build();
	};
} // namespace android::app::appsearch

