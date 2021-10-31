#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::text
{
	class BidiClassifier : public __JniBaseClass
	{
	public:
		// Fields
		
		BidiClassifier(QAndroidJniObject obj);
		// Constructors
		BidiClassifier(jobject arg0);
		BidiClassifier() = default;
		
		// Methods
		jint classify(jint arg0);
		jobject getContext();
		void setContext(jobject arg0);
	};
} // namespace android::icu::text

