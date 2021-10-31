#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::appsearch
{
	class RemoveByDocumentIdRequest;
}

namespace android::app::appsearch
{
	class RemoveByDocumentIdRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoveByDocumentIdRequest_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RemoveByDocumentIdRequest_Builder(QAndroidJniObject obj);
		
		// Constructors
		RemoveByDocumentIdRequest_Builder(jstring arg0);
		
		// Methods
		android::app::appsearch::RemoveByDocumentIdRequest_Builder addIds(jarray arg0);
		android::app::appsearch::RemoveByDocumentIdRequest_Builder addIds(__JniBaseClass arg0);
		android::app::appsearch::RemoveByDocumentIdRequest build();
	};
} // namespace android::app::appsearch

