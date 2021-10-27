#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::text
{
	class BidiRun : public __JniBaseClass
	{
	public:
		// Fields
		
		BidiRun(QAndroidJniObject obj);
		// Constructors
		BidiRun() = default;
		
		// Methods
		jbyte getDirection();
		jbyte getEmbeddingLevel();
		jint getLength();
		jint getLimit();
		jint getStart();
		jboolean isEvenRun();
		jboolean isOddRun();
		jstring toString();
	};
} // namespace android::icu::text

