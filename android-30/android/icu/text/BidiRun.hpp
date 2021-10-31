#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::text
{
	class BidiRun : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BidiRun(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BidiRun(QAndroidJniObject obj);
		
		// Constructors
		
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

