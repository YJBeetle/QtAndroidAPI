#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Intent;
}

namespace android::content
{
	class Intent_FilterComparison : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Intent_FilterComparison(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Intent_FilterComparison(QAndroidJniObject obj);
		
		// Constructors
		Intent_FilterComparison(android::content::Intent arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		android::content::Intent getIntent();
		jint hashCode();
	};
} // namespace android::content

