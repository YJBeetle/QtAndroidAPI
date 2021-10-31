#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::appsearch
{
	class GetByDocumentIdRequest;
}

namespace android::app::appsearch
{
	class GetByDocumentIdRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GetByDocumentIdRequest_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GetByDocumentIdRequest_Builder(QAndroidJniObject obj);
		
		// Constructors
		GetByDocumentIdRequest_Builder(jstring arg0);
		
		// Methods
		android::app::appsearch::GetByDocumentIdRequest_Builder addIds(jarray arg0);
		android::app::appsearch::GetByDocumentIdRequest_Builder addIds(__JniBaseClass arg0);
		android::app::appsearch::GetByDocumentIdRequest_Builder addProjection(jstring arg0, __JniBaseClass arg1);
		android::app::appsearch::GetByDocumentIdRequest build();
	};
} // namespace android::app::appsearch

