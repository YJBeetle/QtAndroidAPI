#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::text
{
	class BidiClassifier : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BidiClassifier(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BidiClassifier(QAndroidJniObject obj);
		
		// Constructors
		BidiClassifier(jobject arg0);
		
		// Methods
		jint classify(jint arg0);
		jobject getContext();
		void setContext(jobject arg0);
	};
} // namespace android::icu::text

