#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::appsearch
{
	class PutDocumentsRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PutDocumentsRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PutDocumentsRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getGenericDocuments();
	};
} // namespace android::app::appsearch

