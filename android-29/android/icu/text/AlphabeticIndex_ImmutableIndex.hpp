#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::text
{
	class AlphabeticIndex_Bucket;
}

namespace android::icu::text
{
	class AlphabeticIndex_ImmutableIndex : public __JniBaseClass
	{
	public:
		// Fields
		
		AlphabeticIndex_ImmutableIndex(QAndroidJniObject obj);
		// Constructors
		AlphabeticIndex_ImmutableIndex() = default;
		
		// Methods
		QAndroidJniObject getBucket(jint arg0);
		jint getBucketCount();
		jint getBucketIndex(jstring arg0);
		jint getBucketIndex(const QString &arg0);
		QAndroidJniObject iterator();
	};
} // namespace android::icu::text

