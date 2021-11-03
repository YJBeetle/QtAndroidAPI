#pragma once

#include "../../../JObject.hpp"


namespace android::icu::text
{
	class BidiClassifier : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BidiClassifier(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BidiClassifier(QAndroidJniObject obj);
		
		// Constructors
		BidiClassifier(jobject arg0);
		
		// Methods
		jint classify(jint arg0);
		jobject getContext();
		void setContext(jobject arg0);
	};
} // namespace android::icu::text

