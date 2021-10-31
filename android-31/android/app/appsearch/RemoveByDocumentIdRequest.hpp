#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::appsearch
{
	class RemoveByDocumentIdRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoveByDocumentIdRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RemoveByDocumentIdRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getIds();
		jstring getNamespace();
	};
} // namespace android::app::appsearch

