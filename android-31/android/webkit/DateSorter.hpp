#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}

namespace android::webkit
{
	class DateSorter : public __JniBaseClass
	{
	public:
		// Fields
		static jint DAY_COUNT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DateSorter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DateSorter(QAndroidJniObject obj);
		
		// Constructors
		DateSorter(android::content::Context arg0);
		
		// Methods
		jlong getBoundary(jint arg0);
		jint getIndex(jlong arg0);
		jstring getLabel(jint arg0);
	};
} // namespace android::webkit

