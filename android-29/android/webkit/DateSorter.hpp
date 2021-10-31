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
		
		DateSorter(QAndroidJniObject obj);
		// Constructors
		DateSorter(android::content::Context arg0);
		DateSorter() = default;
		
		// Methods
		jlong getBoundary(jint arg0);
		jint getIndex(jlong arg0);
		jstring getLabel(jint arg0);
	};
} // namespace android::webkit

