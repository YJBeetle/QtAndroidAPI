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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlphabeticIndex_ImmutableIndex(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AlphabeticIndex_ImmutableIndex(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::icu::text::AlphabeticIndex_Bucket getBucket(jint arg0);
		jint getBucketCount();
		jint getBucketIndex(jstring arg0);
		__JniBaseClass iterator();
	};
} // namespace android::icu::text

