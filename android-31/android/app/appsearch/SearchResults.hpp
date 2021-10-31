#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::appsearch
{
	class SearchResults : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SearchResults(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SearchResults(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		void getNextPage(__JniBaseClass arg0, __JniBaseClass arg1);
	};
} // namespace android::app::appsearch

