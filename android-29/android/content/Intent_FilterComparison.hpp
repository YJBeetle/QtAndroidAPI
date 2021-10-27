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
		
		Intent_FilterComparison(QAndroidJniObject obj);
		// Constructors
		Intent_FilterComparison(android::content::Intent &arg0);
		Intent_FilterComparison() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getIntent();
		jint hashCode();
	};
} // namespace android::content

